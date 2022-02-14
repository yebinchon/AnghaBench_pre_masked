
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das6402_private {int dummy; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int len_chanlist; int * range_table; int cancel; int type; } ;
struct comedi_device {char* board_name; unsigned long iobase; unsigned int irq; struct comedi_subdevice* subdevices; int minor; } ;
struct comedi_devconfig {unsigned long* options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,...) ;
 int VAR_7 ;
 int FUNC_4 (unsigned int,int ,int ,char*,struct comedi_device*) ;
 int FUNC_5 (unsigned long,int ,char*) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_8,
     struct comedi_devconfig *VAR_9)
{
 unsigned int VAR_10;
 unsigned long VAR_11;
 int VAR_12;
 struct comedi_subdevice *VAR_13;

 VAR_8->board_name = "das6402";

 VAR_11 = VAR_9->options[0];
 if (VAR_11 == 0)
  VAR_11 = 0x300;

 FUNC_3("comedi%d: das6402: 0x%04lx", VAR_8->minor, VAR_11);

 if (!FUNC_5(VAR_11, VAR_1, "das6402")) {
  FUNC_3(" I/O port conflict\n");
  return -VAR_2;
 }
 VAR_8->iobase = VAR_11;



 VAR_10 = VAR_9->options[0];
 FUNC_3(" ( irq = %u )", VAR_10);
 VAR_12 = FUNC_4(VAR_10, VAR_6, 0, "das6402", VAR_8);
 if (VAR_12 < 0) {
  FUNC_3("irq conflict\n");
  return VAR_12;
 }
 VAR_8->irq = VAR_10;

 VAR_12 = FUNC_0(VAR_8, sizeof(struct das6402_private));
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_1(VAR_8, 1);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_13 = VAR_8->subdevices + 0;
 VAR_13->type = VAR_0;
 VAR_13->subdev_flags = VAR_4 | VAR_3;
 VAR_13->n_chan = 8;

 VAR_13->cancel = VAR_5;
 VAR_13->maxdata = (1 << 12) - 1;
 VAR_13->len_chanlist = 16;
 VAR_13->range_table = &VAR_7;

 FUNC_2(VAR_8);

 return 0;
}
