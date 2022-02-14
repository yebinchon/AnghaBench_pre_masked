
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {struct ub_dev* context; } ;
struct ub_dev {int tasklet; int work_done; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_0)
{
 struct ub_dev *VAR_1 = VAR_0->context;

 FUNC_1(&VAR_1->work_done);
 FUNC_0(&VAR_1->tasklet);
}
