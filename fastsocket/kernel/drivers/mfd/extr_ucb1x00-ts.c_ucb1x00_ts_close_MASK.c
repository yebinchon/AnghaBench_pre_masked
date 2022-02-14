
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00_ts {int ucb; scalar_t__ rtask; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ucb1x00_ts* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,struct ucb1x00_ts*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct input_dev *VAR_2)
{
 struct ucb1x00_ts *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->rtask)
  FUNC_1(VAR_3->rtask);

 FUNC_3(VAR_3->ucb);
 FUNC_4(VAR_3->ucb, VAR_0, VAR_3);
 FUNC_5(VAR_3->ucb, VAR_1, 0);
 FUNC_2(VAR_3->ucb);
}
