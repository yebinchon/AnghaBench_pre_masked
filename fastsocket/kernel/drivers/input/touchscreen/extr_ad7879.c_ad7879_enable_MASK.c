
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad7879 {int mutex; TYPE_1__* bus; scalar_t__ disabled; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (struct ad7879*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ad7879 *VAR_0)
{
 FUNC_2(&VAR_0->mutex);

 if (VAR_0->disabled) {
  FUNC_0(VAR_0);
  VAR_0->disabled = 0;
  FUNC_1(VAR_0->bus->irq);
 }

 FUNC_3(&VAR_0->mutex);
}
