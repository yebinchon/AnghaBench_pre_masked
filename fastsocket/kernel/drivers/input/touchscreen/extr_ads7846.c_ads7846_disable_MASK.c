
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ads7846 {int disabled; int irq_disabled; int lock; scalar_t__ pending; TYPE_1__* spi; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ads7846 *VAR_0)
{
 if (VAR_0->disabled)
  return;

 VAR_0->disabled = 1;


 if (!VAR_0->pending) {
  VAR_0->irq_disabled = 1;
  FUNC_0(VAR_0->spi->irq);
 } else {



  while (VAR_0->pending) {
   FUNC_3(&VAR_0->lock);
   FUNC_1(1);
   FUNC_2(&VAR_0->lock);
  }
 }




}
