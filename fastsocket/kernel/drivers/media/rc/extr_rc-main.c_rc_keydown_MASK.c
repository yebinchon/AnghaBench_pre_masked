
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rc_dev {int keylock; scalar_t__ keyup_jiffies; int timer_keyup; scalar_t__ keypressed; } ;


 int VAR_0 ;
 int FUNC_0 (struct rc_dev*,int,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct rc_dev*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct rc_dev *VAR_2, int VAR_3, u8 VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6 = FUNC_3(VAR_2, VAR_3);

 FUNC_4(&VAR_2->keylock, VAR_5);
 FUNC_0(VAR_2, VAR_3, VAR_6, VAR_4);

 if (VAR_2->keypressed) {
  VAR_2->keyup_jiffies = VAR_1 + FUNC_2(VAR_0);
  FUNC_1(&VAR_2->timer_keyup, VAR_2->keyup_jiffies);
 }
 FUNC_5(&VAR_2->keylock, VAR_5);
}
