
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00_ts {int * rtask; int ucb; int y_res; int x_res; int irq_wait; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 struct ucb1x00_ts* FUNC_3 (struct input_dev*) ;
 int * FUNC_4 (int ,struct ucb1x00_ts*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,struct ucb1x00_ts*) ;
 int FUNC_8 (int ,int ,int ,struct ucb1x00_ts*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (struct ucb1x00_ts*) ;
 int FUNC_10 (struct ucb1x00_ts*) ;

__attribute__((used)) static int FUNC_11(struct input_dev *VAR_4)
{
 struct ucb1x00_ts *VAR_5 = FUNC_3(VAR_4);
 int VAR_6 = 0;

 FUNC_0(VAR_5->rtask);

 FUNC_2(&VAR_5->irq_wait);
 VAR_6 = FUNC_8(VAR_5->ucb, VAR_1, VAR_3, VAR_5);
 if (VAR_6 < 0)
  goto out;





 FUNC_6(VAR_5->ucb);
 VAR_5->x_res = FUNC_9(VAR_5);
 VAR_5->y_res = FUNC_10(VAR_5);
 FUNC_5(VAR_5->ucb);

 VAR_5->rtask = FUNC_4(VAR_2, VAR_5, "ktsd");
 if (!FUNC_1(VAR_5->rtask)) {
  VAR_6 = 0;
 } else {
  FUNC_7(VAR_5->ucb, VAR_1, VAR_5);
  VAR_5->rtask = ((void*)0);
  VAR_6 = -VAR_0;
 }

 out:
 return VAR_6;
}
