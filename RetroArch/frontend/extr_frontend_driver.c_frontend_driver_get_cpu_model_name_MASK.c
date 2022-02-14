
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* (* get_cpu_model_name ) () ;} ;
typedef TYPE_1__ frontend_ctx_driver_t ;


 TYPE_1__* FUNC_0 () ;
 char const* FUNC_1 () ;

const char* FUNC_2(void)
{
   frontend_ctx_driver_t *VAR_0 = FUNC_0();
   if (!VAR_0 || !VAR_0->get_cpu_model_name)
      return ((void*)0);
   return VAR_0->get_cpu_model_name();
}
