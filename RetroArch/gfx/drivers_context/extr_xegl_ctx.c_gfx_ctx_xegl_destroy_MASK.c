
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int should_reset_mode; int egl; } ;
typedef TYPE_1__ xegl_ctx_data_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(void *VAR_2)
{
   xegl_ctx_data_t *VAR_3 = (xegl_ctx_data_t*)VAR_2;

   FUNC_6();




   if (VAR_1)
   {





      FUNC_7(0);
   }

   FUNC_4();

   if (VAR_3->should_reset_mode)
   {
      FUNC_5(VAR_0);
      VAR_3->should_reset_mode = 0;
   }

   FUNC_3(VAR_2);




}
