
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ displayID; scalar_t__ glCtx; } ;
typedef TYPE_1__ gfx_ctx_cgl_data_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
   gfx_ctx_cgl_data_t *VAR_1 = (gfx_ctx_cgl_data_t*)VAR_0;

   if (VAR_1->glCtx)
   {
      FUNC_2(((void*)0));
      FUNC_1(VAR_1->glCtx);
   }

   if (VAR_1->displayID)
      FUNC_0(VAR_1->displayID);

   if (VAR_1)
      FUNC_3(VAR_1);
}
