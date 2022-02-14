
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void** ao_range_list; } ;
union pci20xxx_subdev_private {TYPE_1__ pci20006; } ;
struct comedi_subdevice {int n_chan; int len_chanlist; int maxdata; void** range_table_list; int insn_write; int insn_read; int subdev_flags; int type; union pci20xxx_subdev_private* private; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void** VAR_4 ;

__attribute__((used)) static int FUNC_0(struct comedi_device *VAR_5, struct comedi_subdevice *VAR_6,
    int VAR_7, int VAR_8)
{
 union pci20xxx_subdev_private *VAR_9 = VAR_6->private;

 if (VAR_7 < 0 || VAR_7 > 2)
  VAR_7 = 0;
 if (VAR_8 < 0 || VAR_8 > 2)
  VAR_8 = 0;

 VAR_9->pci20006.ao_range_list[0] = VAR_4[VAR_7];
 VAR_9->pci20006.ao_range_list[1] = VAR_4[VAR_8];


 VAR_6->type = VAR_0;
 VAR_6->subdev_flags = VAR_1;
 VAR_6->n_chan = 2;
 VAR_6->len_chanlist = 2;
 VAR_6->insn_read = VAR_2;
 VAR_6->insn_write = VAR_3;
 VAR_6->maxdata = 0xffff;
 VAR_6->range_table_list = VAR_9->pci20006.ao_range_list;
 return 0;
}
