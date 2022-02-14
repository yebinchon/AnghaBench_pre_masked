
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_task {int task_state_flags; int task_state_lock; int list; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct sas_task* FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

struct sas_task *FUNC_3(gfp_t VAR_2)
{
 struct sas_task *VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (VAR_3) {
  FUNC_0(&VAR_3->list);
  FUNC_2(&VAR_3->task_state_lock);
  VAR_3->task_state_flags = VAR_0;
 }

 return VAR_3;
}
