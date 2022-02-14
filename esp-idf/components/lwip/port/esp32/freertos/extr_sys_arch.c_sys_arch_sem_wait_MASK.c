
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32_t ;
typedef int sys_sem_t ;
typedef int TickType_t ;
typedef scalar_t__ BaseType_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int) ;

u32_t
FUNC_2(sys_sem_t *VAR_5, u32_t VAR_6)
{
  BaseType_t VAR_7;

  if (!VAR_6) {

    VAR_7 = FUNC_1(*VAR_5, VAR_3);
    FUNC_0("taking semaphore failed", VAR_7 == VAR_2);
  } else {
    TickType_t VAR_8 = VAR_6 / VAR_4;
    VAR_7 = FUNC_1(*VAR_5, VAR_8);
    if (VAR_7 == VAR_1) {

      return VAR_0;
    }
    FUNC_0("taking semaphore failed", VAR_7 == VAR_2);
  }

  return 0;
}
