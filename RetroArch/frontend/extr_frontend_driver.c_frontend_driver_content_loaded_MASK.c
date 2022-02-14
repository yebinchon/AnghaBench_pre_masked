
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* content_loaded ) () ;} ;
typedef TYPE_1__ frontend_ctx_driver_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(void)
{
   frontend_ctx_driver_t *VAR_0 = FUNC_0();

   if (!VAR_0 || !VAR_0->content_loaded)
      return;
   VAR_0->content_loaded();
}
