
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* get_user_language ) () ;} ;
typedef TYPE_1__ frontend_ctx_driver_t ;
typedef enum retro_language { ____Placeholder_retro_language } retro_language ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 () ;

enum retro_language FUNC_2(void)
{
   frontend_ctx_driver_t *VAR_1 = FUNC_0();
   if (!VAR_1 || !VAR_1->get_user_language)
      return VAR_0;
   return VAR_1->get_user_language();
}
