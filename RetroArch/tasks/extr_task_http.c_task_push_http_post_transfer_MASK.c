
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int retro_task_callback_t ;


 int FUNC_0 (char const*,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 void* FUNC_2 (int ,char const*,int,char const*,int ,void*) ;

void* FUNC_3(const char *VAR_0,
      const char *VAR_1, bool VAR_2,
      const char *VAR_3, retro_task_callback_t VAR_4, void *VAR_5)
{
   if (FUNC_1(VAR_0))
      return ((void*)0);
   return FUNC_2(
         FUNC_0(VAR_0, "POST", VAR_1),
         VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
}
