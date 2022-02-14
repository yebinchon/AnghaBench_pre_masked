
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int cancel; int do_cmd; int do_cmdtest; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int have_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,int (*) (int,int,int,unsigned long),unsigned long) ;
 TYPE_1__* VAR_3 ;

int FUNC_1(struct comedi_device *VAR_4, struct comedi_subdevice *VAR_5,
   int (*VAR_6) (int, int, int, unsigned long),
   unsigned long VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_5->do_cmdtest = VAR_2;
 VAR_5->do_cmd = VAR_1;
 VAR_5->cancel = VAR_0;

 VAR_3->have_irq = 1;

 return 0;
}
