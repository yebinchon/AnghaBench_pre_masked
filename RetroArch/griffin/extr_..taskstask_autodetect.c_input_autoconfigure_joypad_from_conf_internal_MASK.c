
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int retro_task_t ;
typedef int config_file_t ;
struct TYPE_4__ {int autoconfig_directory; } ;
typedef TYPE_1__ autoconfig_params_t ;


 int * FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int *) ;
 scalar_t__* VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(
      autoconfig_params_t *VAR_1, retro_task_t *VAR_2)
{
   size_t VAR_3;


   for (VAR_3 = 0; VAR_0[VAR_3]; VAR_3++)
   {
      config_file_t *VAR_4 = FUNC_0(
            VAR_0[VAR_3], ((void*)0));
      if (VAR_4 && FUNC_1(VAR_4, VAR_1, VAR_2))
        return 1;
   }

   if (FUNC_2(VAR_1->autoconfig_directory))
      return 1;
   return 0;
}
