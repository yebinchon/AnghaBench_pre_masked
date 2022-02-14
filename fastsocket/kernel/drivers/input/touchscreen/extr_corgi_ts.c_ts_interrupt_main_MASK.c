
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pressure; } ;
struct corgi_ts {int pendown; int irq_gpio; TYPE_1__ tc; int timer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (struct corgi_ts*) ;
 scalar_t__ FUNC_5 (struct corgi_ts*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct corgi_ts *VAR_4, int VAR_5)
{
 if ((FUNC_1(FUNC_2(VAR_4->irq_gpio)) & FUNC_0(FUNC_2(VAR_4->irq_gpio))) == 0) {

  FUNC_6(VAR_4->irq_gpio, VAR_2);
  if (FUNC_5(VAR_4)) {
   VAR_4->pendown = 1;
   FUNC_4(VAR_4);
  }
  FUNC_3(&VAR_4->timer, VAR_3 + VAR_0 / 100);
 } else {
  if (VAR_4->pendown == 1 || VAR_4->pendown == 2) {
   FUNC_3(&VAR_4->timer, VAR_3 + VAR_0 / 100);
   VAR_4->pendown++;
   return;
  }

  if (VAR_4->pendown) {
   VAR_4->tc.pressure = 0;
   FUNC_4(VAR_4);
  }


  FUNC_6(VAR_4->irq_gpio, VAR_1);
  VAR_4->pendown = 0;
 }
}
