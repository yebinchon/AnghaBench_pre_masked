
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {int keylock; int keyup_jiffies; } ;


 int FUNC_0 (struct rc_dev*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0)
{
 struct rc_dev *VAR_1 = (struct rc_dev *)VAR_0;
 unsigned long VAR_2;
 FUNC_1(&VAR_1->keylock, VAR_2);
 if (FUNC_3(VAR_1->keyup_jiffies))
  FUNC_0(VAR_1);
 FUNC_2(&VAR_1->keylock, VAR_2);
}
