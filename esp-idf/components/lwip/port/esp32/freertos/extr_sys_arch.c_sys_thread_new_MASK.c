
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * sys_thread_t ;
typedef int lwip_thread_fn ;
typedef int TaskHandle_t ;
typedef scalar_t__ BaseType_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const*,int,void*,int,int *,int ) ;

sys_thread_t
FUNC_1(const char *VAR_2, lwip_thread_fn VAR_3, void *VAR_4, int VAR_5, int VAR_6)
{
  TaskHandle_t VAR_7;
  BaseType_t VAR_8;



  VAR_8 = FUNC_0(VAR_3, VAR_2, VAR_5, VAR_4, VAR_6, &VAR_7,
          VAR_0);

  if (VAR_8 != VAR_1) {
    return ((void*)0);
  }

  return (sys_thread_t)VAR_7;
}
