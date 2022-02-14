
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max3100_port {int work; int workqueue; int suspending; int force_end_work; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct max3100_port *VAR_1)
{
 if (!VAR_1->force_end_work && !FUNC_2(&VAR_1->work) &&
     !FUNC_0(VAR_0) && !VAR_1->suspending)
  FUNC_1(VAR_1->workqueue, &VAR_1->work);
}
