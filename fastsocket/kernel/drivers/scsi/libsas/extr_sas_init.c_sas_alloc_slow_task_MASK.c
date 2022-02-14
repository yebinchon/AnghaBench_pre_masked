
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_task_slow {int completion; int timer; } ;
struct sas_task {struct sas_task_slow* slow_task; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sas_task_slow*) ;
 struct sas_task_slow* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,struct sas_task*) ;
 struct sas_task* FUNC_5 (int ) ;
 int VAR_0 ;

struct sas_task *FUNC_6(gfp_t VAR_1)
{
 struct sas_task *VAR_2 = FUNC_5(VAR_1);
 struct sas_task_slow *VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_1);

 if (!VAR_2 || !VAR_3) {
  if (VAR_2)
   FUNC_4(VAR_0, VAR_2);
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 VAR_2->slow_task = VAR_3;
 FUNC_1(&VAR_3->timer);
 FUNC_0(&VAR_3->completion);

 return VAR_2;
}
