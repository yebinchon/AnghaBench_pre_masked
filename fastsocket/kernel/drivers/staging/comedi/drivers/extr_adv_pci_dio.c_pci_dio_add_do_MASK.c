
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct diosubd_data {int chans; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int len_chanlist; void* private; int insn_bits; scalar_t__ state; int * range_table; int type; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int io_access; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static int FUNC_0(struct comedi_device *VAR_9, struct comedi_subdevice *VAR_10,
     const struct diosubd_data *VAR_11, int VAR_12)
{
 VAR_10->type = VAR_0;
 VAR_10->subdev_flags = VAR_4 | VAR_2 | VAR_1;
 if (VAR_11->chans > 16)
  VAR_10->subdev_flags |= VAR_3;
 VAR_10->n_chan = VAR_11->chans;
 VAR_10->maxdata = 1;
 VAR_10->len_chanlist = VAR_11->chans;
 VAR_10->range_table = &VAR_7;
 VAR_10->state = 0;
 switch (VAR_8->io_access) {
 case 128:
  VAR_10->insn_bits = VAR_5;
  break;
 case 129:
  VAR_10->insn_bits = VAR_6;
  break;
 }
 VAR_10->private = (void *)VAR_11;

 return 0;
}
