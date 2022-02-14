
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timebase; int settling_time; } ;
union pci20xxx_subdev_private {scalar_t__ iobase; TYPE_1__ pci20341; } ;
struct comedi_subdevice {int maxdata; int range_table; int insn_read; int len_chanlist; int n_chan; int subdev_flags; int type; union pci20xxx_subdev_private* private; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int* VAR_13 ;
 int* VAR_14 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_15, struct comedi_subdevice *VAR_16,
    int VAR_17, int VAR_18)
{
 union pci20xxx_subdev_private *VAR_19 = VAR_16->private;
 int VAR_20;


 if (VAR_17 < 0 || VAR_17 > 3)
  VAR_17 = 0;
 VAR_19->pci20341.timebase = VAR_14[VAR_17];
 VAR_19->pci20341.settling_time = VAR_13[VAR_17];


 VAR_16->type = VAR_0;
 VAR_16->subdev_flags = VAR_10;
 VAR_16->n_chan = VAR_1;
 VAR_16->len_chanlist = VAR_8;
 VAR_16->insn_read = VAR_11;
 VAR_16->maxdata = 0xffff;
 VAR_16->range_table = VAR_12[VAR_17];

 VAR_20 = VAR_19->pci20341.timebase | VAR_7;

 FUNC_0(VAR_3, VAR_19->iobase + VAR_2);
 FUNC_0(VAR_6, VAR_19->iobase + VAR_4);
 FUNC_0(VAR_20, VAR_19->iobase + VAR_5);
 FUNC_0(VAR_19->pci20341.settling_time, VAR_19->iobase + VAR_9);

 return 0;
}
