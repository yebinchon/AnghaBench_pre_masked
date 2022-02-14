
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {int keylock; scalar_t__ keyup_jiffies; int timer_keyup; int keypressed; int last_scancode; int input_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct rc_dev *VAR_4)
{
 unsigned long VAR_5;

 FUNC_3(&VAR_4->keylock, VAR_5);

 FUNC_0(VAR_4->input_dev, VAR_0, VAR_2, VAR_4->last_scancode);

 if (!VAR_4->keypressed)
  goto out;

 VAR_4->keyup_jiffies = VAR_3 + FUNC_2(VAR_1);
 FUNC_1(&VAR_4->timer_keyup, VAR_4->keyup_jiffies);

out:
 FUNC_4(&VAR_4->keylock, VAR_5);
}
