
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad7877 {int disabled; int mutex; int timer; scalar_t__ pending; TYPE_1__* spi; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (struct ad7877*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ad7877 *VAR_0)
{
 FUNC_4(&VAR_0->mutex);

 if (!VAR_0->disabled) {
  VAR_0->disabled = 1;
  FUNC_2(VAR_0->spi->irq);


  while (VAR_0->pending)
   FUNC_3(1);

  if (FUNC_1(&VAR_0->timer))
   FUNC_0(VAR_0);
 }





 FUNC_5(&VAR_0->mutex);
}
