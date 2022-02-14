
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int (* get_free_mem ) () ;} ;
typedef TYPE_1__ frontend_ctx_driver_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 () ;

uint64_t FUNC_2(void)
{
   frontend_ctx_driver_t *VAR_0 = FUNC_0();
   if (!VAR_0 || !VAR_0->get_free_mem)
      return 0;
   return VAR_0->get_free_mem();
}
