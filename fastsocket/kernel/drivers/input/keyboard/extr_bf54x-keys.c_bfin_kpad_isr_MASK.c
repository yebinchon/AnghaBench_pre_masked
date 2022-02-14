
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct platform_device {int dummy; } ;
struct input_dev {int dummy; } ;
struct bf54x_kpad {int lastkey; scalar_t__ keyup_test_jiffies; int timer; int irq; struct input_dev* input; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct bf54x_kpad*,struct input_dev*,int ) ;
 scalar_t__ FUNC_2 (struct bf54x_kpad*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct input_dev*,int,int) ;
 int FUNC_6 (struct input_dev*) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int *,scalar_t__) ;
 struct bf54x_kpad* FUNC_8 (struct platform_device*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_2, void *VAR_3)
{
 struct platform_device *VAR_4 = VAR_3;
 struct bf54x_kpad *VAR_5 = FUNC_8(VAR_4);
 struct input_dev *VAR_6 = VAR_5->input;
 int VAR_7;
 u16 VAR_8 = FUNC_3();

 VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_8);

 FUNC_5(VAR_6, VAR_7, 1);
 FUNC_6(VAR_6);

 if (FUNC_2(VAR_5)) {
  FUNC_4(VAR_5->irq);
  VAR_5->lastkey = VAR_7;
  FUNC_7(&VAR_5->timer,
     VAR_1 + VAR_5->keyup_test_jiffies);
 } else {
  FUNC_5(VAR_6, VAR_7, 0);
  FUNC_6(VAR_6);

  FUNC_0();
 }

 return VAR_0;
}
