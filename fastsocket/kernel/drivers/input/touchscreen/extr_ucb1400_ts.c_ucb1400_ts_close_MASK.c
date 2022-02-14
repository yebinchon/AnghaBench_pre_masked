
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1400_ts {int ac97; scalar_t__ ts_task; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 struct ucb1400_ts* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct input_dev *VAR_1)
{
 struct ucb1400_ts *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->ts_task)
  FUNC_1(VAR_2->ts_task);

 FUNC_3(VAR_2->ac97);
 FUNC_2(VAR_2->ac97, VAR_0, 0);
}
