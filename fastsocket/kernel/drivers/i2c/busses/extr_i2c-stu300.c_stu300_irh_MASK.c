
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stu300_dev {scalar_t__ cmd_err; int clk; int cmd_issue_lock; int cmd_complete; int cmd_event; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct stu300_dev*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct stu300_dev *VAR_4 = VAR_3;
 int VAR_5;


 FUNC_1(VAR_4->clk);


 FUNC_3(&VAR_4->cmd_issue_lock);

 VAR_5 = FUNC_5(VAR_4, VAR_4->cmd_event);
 if (VAR_5 || VAR_4->cmd_err != VAR_1)
  FUNC_2(&VAR_4->cmd_complete);

 FUNC_4(&VAR_4->cmd_issue_lock);

 FUNC_0(VAR_4->clk);

 return VAR_0;
}
