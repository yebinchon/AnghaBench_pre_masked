
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* deinit ) (void*) ;} ;
typedef TYPE_1__ frontend_ctx_driver_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (void*) ;

void FUNC_2(void *VAR_0)
{
   frontend_ctx_driver_t *VAR_1 = FUNC_0();
   if (!VAR_1 || !VAR_1->deinit)
      return;
   VAR_1->deinit(VAR_0);
}
