
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sys_sem_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(void* VAR_1)
{
  sys_sem_t *VAR_2 = (sys_sem_t*)(VAR_1);

  if (VAR_2 && *VAR_2){
    FUNC_0(VAR_0, ("sem del, sem=%p\n", *VAR_2));
    FUNC_2(*VAR_2);
  }

  if (VAR_2) {
    FUNC_0(VAR_0, ("sem pointer del, sem_p=%p\n", VAR_2));
    FUNC_1(VAR_2);
  }
}
