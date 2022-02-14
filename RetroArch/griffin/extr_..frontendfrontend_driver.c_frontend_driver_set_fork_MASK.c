
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* set_fork ) (int) ;} ;
typedef TYPE_1__ frontend_ctx_driver_t ;
typedef enum frontend_fork { ____Placeholder_frontend_fork } frontend_fork ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int) ;

bool FUNC_3(enum frontend_fork VAR_0)
{
   frontend_ctx_driver_t *VAR_1 = FUNC_1();

   if (!FUNC_0())
      return 0;
   return VAR_1->set_fork(VAR_0);
}
