
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* exitspawn ) (char*,size_t) ;} ;
typedef TYPE_1__ frontend_ctx_driver_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (char*,size_t) ;

void FUNC_2(char *VAR_0, size_t VAR_1)
{
   frontend_ctx_driver_t *VAR_2 = FUNC_0();
   if (!VAR_2 || !VAR_2->exitspawn)
      return;
   VAR_2->exitspawn(VAR_0, VAR_1);
}
