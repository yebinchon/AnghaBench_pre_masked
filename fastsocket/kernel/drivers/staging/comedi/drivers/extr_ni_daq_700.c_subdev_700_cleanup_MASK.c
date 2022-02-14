
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {scalar_t__ private; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ have_irq; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_0 ;

void FUNC_1(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2)
{
 if (VAR_2->private) {
  if (VAR_0->have_irq) {
  }

  FUNC_0(VAR_2->private);
 }
}
