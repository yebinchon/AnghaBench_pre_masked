
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ attached; struct comedi_subdevice* subdevices; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int interrupt_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_2 (struct comedi_device*) ;
 TYPE_1__* FUNC_3 (struct comedi_device*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_2, void *VAR_3)
{
 struct comedi_device *VAR_4 = VAR_3;
 struct comedi_subdevice *VAR_5;
 unsigned VAR_6;
 unsigned long VAR_7;

 if (VAR_4->attached == 0)
  return VAR_1;

 FUNC_5(&FUNC_3(VAR_4)->interrupt_lock, VAR_7);
 FUNC_4();
 for (VAR_6 = 0; VAR_6 < FUNC_2(VAR_4); ++VAR_6) {
  VAR_5 = VAR_4->subdevices + FUNC_0(VAR_6);
  FUNC_1(VAR_4, VAR_5);
 }
 FUNC_6(&FUNC_3(VAR_4)->interrupt_lock, VAR_7);
 return VAR_0;
}
