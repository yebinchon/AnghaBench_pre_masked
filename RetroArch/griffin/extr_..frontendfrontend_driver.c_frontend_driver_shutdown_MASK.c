
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* shutdown ) (int) ;} ;
typedef TYPE_1__ frontend_ctx_driver_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int) ;

void FUNC_2(bool VAR_0)
{
   frontend_ctx_driver_t *VAR_1 = FUNC_0();
   if (!VAR_1 || !VAR_1->shutdown)
      return;
   VAR_1->shutdown(VAR_0);
}
