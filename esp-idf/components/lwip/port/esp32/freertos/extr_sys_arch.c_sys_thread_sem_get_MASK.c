
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sys_sem_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 () ;
 int VAR_1 ;

sys_sem_t*
FUNC_3(void)
{
  sys_sem_t *VAR_2 = FUNC_1(VAR_1);

  if (!VAR_2) {
      VAR_2 = FUNC_2();
  }
  FUNC_0(VAR_0, ("sem_get s=%p\n", VAR_2));
  return VAR_2;
}
