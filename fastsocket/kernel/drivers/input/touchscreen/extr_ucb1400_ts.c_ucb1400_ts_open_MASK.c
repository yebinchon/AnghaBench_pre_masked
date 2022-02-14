
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1400_ts {int * ts_task; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ucb1400_ts* FUNC_3 (struct input_dev*) ;
 int * FUNC_4 (int ,struct ucb1400_ts*,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct input_dev *VAR_1)
{
 struct ucb1400_ts *VAR_2 = FUNC_3(VAR_1);
 int VAR_3 = 0;

 FUNC_0(VAR_2->ts_task);

 VAR_2->ts_task = FUNC_4(VAR_0, VAR_2, "UCB1400_ts");
 if (FUNC_1(VAR_2->ts_task)) {
  VAR_3 = FUNC_2(VAR_2->ts_task);
  VAR_2->ts_task = ((void*)0);
 }

 return VAR_3;
}
