
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sys_sem_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;
 int VAR_1 ;
 int FUNC_4 () ;

sys_sem_t*
FUNC_5(void)
{
  sys_sem_t *VAR_2 = (sys_sem_t*)FUNC_2(sizeof(sys_sem_t*));

  if (!VAR_2){
    FUNC_0(VAR_0, "thread_sem_init: out of memory");
    return 0;
  }

  *VAR_2 = FUNC_4();
  if (!(*VAR_2)){
    FUNC_1(VAR_2);
    FUNC_0(VAR_0, "thread_sem_init: out of memory");
    return 0;
  }

  FUNC_3(VAR_1, VAR_2);
  return VAR_2;
}
