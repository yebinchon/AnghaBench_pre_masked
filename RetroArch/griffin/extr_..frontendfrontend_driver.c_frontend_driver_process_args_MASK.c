
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* process_args ) (int*,char**) ;} ;
typedef TYPE_1__ frontend_ctx_driver_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int*,char**) ;

void FUNC_2(int *VAR_0, char *VAR_1[])
{
   frontend_ctx_driver_t *VAR_2 = FUNC_0();

   if (!VAR_2 || !VAR_2->process_args)
      return;
   VAR_2->process_args(VAR_0, VAR_1);
}
