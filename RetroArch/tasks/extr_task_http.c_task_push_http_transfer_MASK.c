
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int retro_task_callback_t ;


 int FUNC_0 (char const*,char*,int *) ;
 scalar_t__ FUNC_1 (char const*) ;
 void* FUNC_2 (int ,char const*,int,char const*,int ,void*) ;

void* FUNC_3(const char *VAR_0, bool VAR_1,
      const char *VAR_2,
      retro_task_callback_t VAR_3, void *VAR_4)
{
   if (FUNC_1(VAR_0))
      return ((void*)0);
   return FUNC_2(
         FUNC_0(VAR_0, "GET", ((void*)0)),
         VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
