
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int g_core_es; int core_hw_context_enable; } ;
typedef TYPE_1__ gfx_ctx_x_data_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static uint32_t FUNC_3(void *VAR_9)
{
   uint32_t VAR_10 = 0;
   gfx_ctx_x_data_t *VAR_11 = (gfx_ctx_x_data_t*)VAR_9;

   switch (VAR_7)
   {
      case 130:
      case 129:
         if (VAR_6)
            FUNC_0(VAR_10, VAR_0);

         if (VAR_11->core_hw_context_enable || VAR_11->g_core_es)
            FUNC_0(VAR_10, VAR_1);

         if (VAR_8)
            FUNC_0(VAR_10, VAR_2);

         if (FUNC_1(FUNC_2(), "gl1")) { }
         else if (FUNC_1(FUNC_2(), "glcore"))
         {



         }
         else
         {







         }
         break;
      case 128:



         break;
      case 131:
      default:
         break;
   }

   return VAR_10;
}
