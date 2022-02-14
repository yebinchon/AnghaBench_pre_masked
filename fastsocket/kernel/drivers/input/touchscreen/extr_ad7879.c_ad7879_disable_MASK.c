
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad7879 {int disabled; int mutex; TYPE_1__* bus; int timer; int work; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ad7879*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ad7879 *VAR_2)
{
 FUNC_6(&VAR_2->mutex);

 if (!VAR_2->disabled) {

  VAR_2->disabled = 1;
  FUNC_5(VAR_2->bus->irq);

  FUNC_3(&VAR_2->work);

  if (FUNC_4(&VAR_2->timer))
   FUNC_1(VAR_2);

  FUNC_2(VAR_2->bus, VAR_1,
        FUNC_0(VAR_0));
 }

 FUNC_7(&VAR_2->mutex);
}
