
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct bf54x_kpad {int irq; int input; int lastkey; scalar_t__ keyup_test_jiffies; int timer; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct bf54x_kpad*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int *,scalar_t__) ;
 struct bf54x_kpad* FUNC_6 (struct platform_device*) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_1)
{
 struct platform_device *VAR_2 = (struct platform_device *) VAR_1;
 struct bf54x_kpad *VAR_3 = FUNC_6(VAR_2);

 if (FUNC_1(VAR_3)) {

  FUNC_5(&VAR_3->timer,
     VAR_0 + VAR_3->keyup_test_jiffies);
  return;
 }

 FUNC_3(VAR_3->input, VAR_3->lastkey, 0);
 FUNC_4(VAR_3->input);



 FUNC_0();
 FUNC_2(VAR_3->irq);
}
