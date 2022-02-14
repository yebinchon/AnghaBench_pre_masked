
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* init ) (void*) ;} ;
typedef TYPE_1__ frontend_ctx_driver_t ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (void*) ;

void FUNC_2(void *VAR_1)
{
   VAR_0 = (frontend_ctx_driver_t*)FUNC_0();

   if (VAR_0 && VAR_0->init)
      VAR_0->init(VAR_1);
}
