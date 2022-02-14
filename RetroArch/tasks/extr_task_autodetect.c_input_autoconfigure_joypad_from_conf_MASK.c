
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int retro_task_t ;
typedef int config_file_t ;
typedef int autoconfig_params_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(
      config_file_t *VAR_0, autoconfig_params_t *VAR_1, retro_task_t *VAR_2)
{
   int VAR_3 = FUNC_2(VAR_0,
         VAR_1);

   if (VAR_3)
      FUNC_1(VAR_0, VAR_1, VAR_2);

   FUNC_0(VAR_0);

   return VAR_3;
}
