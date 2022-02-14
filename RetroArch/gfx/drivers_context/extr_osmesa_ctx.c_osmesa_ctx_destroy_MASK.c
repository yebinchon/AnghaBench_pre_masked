
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctx; struct TYPE_3__* screen; scalar_t__ socket; } ;
typedef TYPE_1__ gfx_ctx_osmesa_data_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
   gfx_ctx_osmesa_data_t *VAR_1 = (gfx_ctx_osmesa_data_t*)VAR_0;

   if (!VAR_1)
      return;

   if (VAR_1->socket)
      FUNC_1(VAR_1->socket);

   FUNC_3("/tmp/retroarch-osmesa.fifo");

   FUNC_2(VAR_1->screen);
   FUNC_0(VAR_1->ctx);

   FUNC_2(VAR_1);
}
