
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int subdev_flags; int n_chan; int len_chanlist; int maxdata; int cancel; int do_cmdtest; int do_cmd; int insn_config; int * range_table; int type; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; struct comedi_subdevice* subdevices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct comedi_device*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_11)
{
 struct comedi_subdevice *VAR_12;

 if (FUNC_0(VAR_11, 1) < 0)
  return -VAR_1;

 VAR_12 = VAR_11->subdevices + 0;

 VAR_11->read_subdev = VAR_12;

 VAR_12->type = VAR_0;
 VAR_12->subdev_flags =
     VAR_4 | VAR_5 | VAR_3 | VAR_2;
 VAR_12->n_chan = 32;
 VAR_12->len_chanlist = 32;
 VAR_12->maxdata = 1;
 VAR_12->range_table = &VAR_10;
 VAR_12->insn_config = VAR_6;
 VAR_12->do_cmd = VAR_8;
 VAR_12->do_cmdtest = VAR_9;
 VAR_12->cancel = VAR_7;

 return 0;
}
