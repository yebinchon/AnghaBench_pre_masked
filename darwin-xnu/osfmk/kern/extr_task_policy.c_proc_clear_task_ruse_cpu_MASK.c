
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct TYPE_7__ {int applied_ru_cpu; int applied_ru_cpu_ext; void* bsd_info; void* policy_ru_cpu; void* policy_ru_cpu_ext; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(task_t VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
 void * VAR_7 = ((void*)0);

 FUNC_3(VAR_3);
 if (VAR_3 != FUNC_0()) {
  VAR_3->policy_ru_cpu_ext = VAR_1;
 } else {
  VAR_3->policy_ru_cpu = VAR_1;
 }

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5 != 0)
  goto out;

 VAR_6 = VAR_3->applied_ru_cpu;
 if (VAR_3->applied_ru_cpu_ext != VAR_2) {

  VAR_3->applied_ru_cpu_ext = VAR_2;
 }
 if (VAR_6 != VAR_2) {
  VAR_7 = VAR_3->bsd_info;
  FUNC_4(VAR_3);
  FUNC_1(VAR_7, VAR_0, VAR_6);
  goto out1;
 }

out:
 FUNC_4(VAR_3);
out1:
 return(VAR_5);

}
