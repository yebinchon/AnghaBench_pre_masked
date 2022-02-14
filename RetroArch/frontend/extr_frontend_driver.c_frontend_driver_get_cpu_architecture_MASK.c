
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* get_architecture ) () ;} ;
typedef TYPE_1__ frontend_ctx_driver_t ;
typedef enum frontend_architecture { ____Placeholder_frontend_architecture } frontend_architecture ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 () ;

enum frontend_architecture FUNC_2(void)
{
   frontend_ctx_driver_t *VAR_1 = FUNC_0();
   if (!VAR_1 || !VAR_1->get_architecture)
      return VAR_0;
   return VAR_1->get_architecture();
}
