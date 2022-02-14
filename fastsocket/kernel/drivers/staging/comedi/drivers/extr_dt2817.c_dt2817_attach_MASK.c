
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int n_chan; int subdev_flags; int maxdata; scalar_t__ state; int insn_config; int insn_bits; int * range_table; int type; } ;
struct comedi_device {unsigned long iobase; char* board_name; struct comedi_subdevice* subdevices; int minor; } ;
struct comedi_devconfig {unsigned long* options; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (char*,...) ;
 int VAR_8 ;
 int FUNC_3 (unsigned long,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_9, struct comedi_devconfig *VAR_10)
{
 int VAR_11;
 struct comedi_subdevice *VAR_12;
 unsigned long VAR_13;

 VAR_13 = VAR_10->options[0];
 FUNC_2("comedi%d: dt2817: 0x%04lx ", VAR_9->minor, VAR_13);
 if (!FUNC_3(VAR_13, VAR_2, "dt2817")) {
  FUNC_2("I/O port conflict\n");
  return -VAR_3;
 }
 VAR_9->iobase = VAR_13;
 VAR_9->board_name = "dt2817";

 VAR_11 = FUNC_0(VAR_9, 1);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_12 = VAR_9->subdevices + 0;

 VAR_12->n_chan = 32;
 VAR_12->type = VAR_0;
 VAR_12->subdev_flags = VAR_4 | VAR_5;
 VAR_12->range_table = &VAR_8;
 VAR_12->maxdata = 1;
 VAR_12->insn_bits = VAR_6;
 VAR_12->insn_config = VAR_7;

 VAR_12->state = 0;
 FUNC_1(0, VAR_9->iobase + VAR_1);

 FUNC_2("\n");

 return 0;
}
