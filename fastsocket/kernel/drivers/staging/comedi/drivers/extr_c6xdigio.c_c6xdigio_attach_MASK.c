
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int * range_table; int insn_read; int type; int insn_write; } ;
struct comedi_device {unsigned long iobase; char* board_name; struct comedi_subdevice* subdevices; int minor; } ;
struct comedi_devconfig {unsigned long* options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (unsigned long,int ,char*) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_13,
      struct comedi_devconfig *VAR_14)
{
 int VAR_15 = 0;
 unsigned long VAR_16;
 unsigned int VAR_17;
 struct comedi_subdevice *VAR_18;

 VAR_16 = VAR_14->options[0];
 FUNC_3("comedi%d: c6xdigio: 0x%04lx\n", VAR_13->minor, VAR_16);
 if (!FUNC_4(VAR_16, VAR_0, "c6xdigio")) {
  FUNC_3("comedi%d: I/O port conflict\n", VAR_13->minor);
  return -VAR_3;
 }
 VAR_13->iobase = VAR_16;
 VAR_13->board_name = "c6xdigio";

 VAR_15 = FUNC_0(VAR_13, 2);
 if (VAR_15 < 0)
  return VAR_15;


 FUNC_2(&VAR_8);

 VAR_17 = VAR_14->options[1];
 if (VAR_17 > 0) {
  FUNC_3("comedi%d: irq = %u ignored\n", VAR_13->minor, VAR_17);
 } else if (VAR_17 == 0) {
  FUNC_3("comedi%d: no irq\n", VAR_13->minor);
 }

 VAR_18 = VAR_13->subdevices + 0;

 VAR_18->type = VAR_1;
 VAR_18->subdev_flags = VAR_6;
 VAR_18->n_chan = 2;

 VAR_18->insn_read = VAR_9;
 VAR_18->insn_write = VAR_10;
 VAR_18->maxdata = 500;
 VAR_18->range_table = &VAR_11;

 VAR_18 = VAR_13->subdevices + 1;

 VAR_18->type = VAR_2;
 VAR_18->subdev_flags = VAR_5 | VAR_4;
 VAR_18->n_chan = 2;

 VAR_18->insn_read = VAR_7;
 VAR_18->maxdata = 0xffffff;
 VAR_18->range_table = &VAR_12;
 FUNC_1(VAR_13);

 return 0;
}
