
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_task {int task_state_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(
 struct sas_task *VAR_3)
{

 if (VAR_3->task_state_flags & VAR_0)
  return VAR_1;
 else
  return VAR_2;
}
