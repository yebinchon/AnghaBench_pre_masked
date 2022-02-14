
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad7877 {int mutex; TYPE_1__* spi; scalar_t__ disabled; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ad7877 *VAR_0)
{
 FUNC_1(&VAR_0->mutex);

 if (VAR_0->disabled) {
  VAR_0->disabled = 0;
  FUNC_0(VAR_0->spi->irq);
 }

 FUNC_2(&VAR_0->mutex);
}
