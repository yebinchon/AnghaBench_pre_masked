
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int maxdata; int n_chan; int * range_table; int insn_bits; int subdev_flags; int type; } ;
struct comedi_device {char* board_name; unsigned long iobase; struct comedi_subdevice* subdevices; scalar_t__ irq; int minor; } ;
struct comedi_devconfig {unsigned long* options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct comedi_device*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,...) ;
 int VAR_9 ;
 int FUNC_2 (unsigned long,int ,char*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_10, struct comedi_devconfig *VAR_11)
{
 struct comedi_subdevice *VAR_12;
 unsigned long VAR_13;

 VAR_13 = VAR_11->options[0];
 FUNC_1("comedi%d: pcl725: 0x%04lx ", VAR_10->minor, VAR_13);
 if (!FUNC_2(VAR_13, VAR_4, "pcl725")) {
  FUNC_1("I/O port conflict\n");
  return -VAR_2;
 }
 VAR_10->board_name = "pcl725";
 VAR_10->iobase = VAR_13;
 VAR_10->irq = 0;

 if (FUNC_0(VAR_10, 2) < 0)
  return -VAR_3;

 VAR_12 = VAR_10->subdevices + 0;

 VAR_12->type = VAR_1;
 VAR_12->subdev_flags = VAR_6;
 VAR_12->maxdata = 1;
 VAR_12->n_chan = 8;
 VAR_12->insn_bits = VAR_8;
 VAR_12->range_table = &VAR_9;

 VAR_12 = VAR_10->subdevices + 1;

 VAR_12->type = VAR_0;
 VAR_12->subdev_flags = VAR_5;
 VAR_12->maxdata = 1;
 VAR_12->n_chan = 8;
 VAR_12->insn_bits = VAR_7;
 VAR_12->range_table = &VAR_9;

 FUNC_1("\n");

 return 0;
}
