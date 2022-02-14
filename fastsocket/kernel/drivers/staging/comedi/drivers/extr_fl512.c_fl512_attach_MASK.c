
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fl512_private {int dummy; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int insn_read; int insn_write; int * range_table; int type; } ;
struct comedi_device {unsigned long iobase; char* board_name; struct comedi_subdevice* subdevices; int minor; } ;
struct comedi_devconfig {unsigned long* options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct comedi_device*,int) ;
 scalar_t__ FUNC_1 (struct comedi_device*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*,...) ;
 int VAR_11 ;
 int FUNC_3 (unsigned long,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_12, struct comedi_devconfig *VAR_13)
{
 unsigned long VAR_14;
 struct comedi_subdevice *VAR_15;


 VAR_14 = VAR_13->options[0];
 FUNC_2("comedi:%d fl512: 0x%04lx", VAR_12->minor, VAR_14);
 if (!FUNC_3(VAR_14, VAR_4, "fl512")) {
  FUNC_2(" I/O port conflict\n");
  return -VAR_2;
 }
 VAR_12->iobase = VAR_14;
 VAR_12->board_name = "fl512";
 if (FUNC_0(VAR_12, sizeof(struct fl512_private)) < 0)
  return -VAR_3;





 if (FUNC_1(VAR_12, 2) < 0)
  return -VAR_3;





 VAR_15 = VAR_12->subdevices + 0;
 VAR_15->type = VAR_0;
 VAR_15->subdev_flags = VAR_6 | VAR_5;
 VAR_15->n_chan = 16;
 VAR_15->maxdata = 0x0fff;
 VAR_15->range_table = &VAR_11;
 VAR_15->insn_read = VAR_8;
 FUNC_2("comedi: fl512: subdevice 0 initialized\n");


 VAR_15 = VAR_12->subdevices + 1;
 VAR_15->type = VAR_1;
 VAR_15->subdev_flags = VAR_7;
 VAR_15->n_chan = 2;
 VAR_15->maxdata = 0x0fff;
 VAR_15->range_table = &VAR_11;
 VAR_15->insn_write = VAR_9;
 VAR_15->insn_read = VAR_10;
 FUNC_2("comedi: fl512: subdevice 1 initialized\n");

 return 1;
}
