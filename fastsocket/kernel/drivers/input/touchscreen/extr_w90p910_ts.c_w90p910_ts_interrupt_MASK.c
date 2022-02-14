
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w90p910_ts {int state; int lock; int timer; } ;
typedef int irqreturn_t ;


 int VAR_0 ;




 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct w90p910_ts*) ;
 int FUNC_6 (struct w90p910_ts*) ;
 int FUNC_7 (struct w90p910_ts*) ;
 int FUNC_8 (struct w90p910_ts*,int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_2, void *VAR_3)
{
 struct w90p910_ts *VAR_4 = VAR_3;
 unsigned long VAR_5;

 FUNC_3(&VAR_4->lock, VAR_5);

 switch (VAR_4->state) {
 case 130:




  FUNC_0(&VAR_4->timer);
  FUNC_6(VAR_4);
  break;


 case 129:
  FUNC_7(VAR_4);
  break;

 case 128:
  FUNC_8(VAR_4, 1);
  FUNC_5(VAR_4);
  FUNC_1(&VAR_4->timer, VAR_1 + FUNC_2(100));
  break;

 case 131:
  break;
 }

 FUNC_4(&VAR_4->lock, VAR_5);

 return VAR_0;
}
