
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; scalar_t__ irq; scalar_t__ private; } ;
struct TYPE_2__ {scalar_t__ pcidev; scalar_t__ valid; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (scalar_t__,struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1)
{

 if (VAR_1->private) {
  if (VAR_0->valid)
   FUNC_2(VAR_1);
  if (VAR_1->irq)
   FUNC_1(VAR_1->irq, VAR_1);
  if (VAR_0->pcidev) {
   if (VAR_1->iobase) {
    FUNC_0(VAR_0->pcidev);
   }
   FUNC_3(VAR_0->pcidev);
  }
 }

 return 0;
}
