
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef enum gfx_ctx_api { ____Placeholder_gfx_ctx_api } gfx_ctx_api ;
struct TYPE_5__ {int ident; void* (* chain_new ) () ;} ;
typedef TYPE_1__ d3d9_renderchain_driver_t ;




 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,char*) ;
 void* FUNC_1 () ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_2(
      enum gfx_ctx_api VAR_3,
      const d3d9_renderchain_driver_t **VAR_4,
      void **VAR_5)
{
   switch (VAR_3)
   {
      case 131:
         {
            static const d3d9_renderchain_driver_t *VAR_6[] =
            {






               ((void*)0)
            };
            unsigned VAR_7;

            for (VAR_7 = 0; VAR_6[VAR_7]; VAR_7++)
            {
               void *VAR_8 = VAR_6[VAR_7]->chain_new();

               if (!VAR_8)
                  continue;

               *VAR_4 = VAR_6[VAR_7];
               *VAR_5 = VAR_8;

               if (FUNC_0(VAR_6[VAR_7]->ident, "cg_d3d9"))
                  VAR_2 = VAR_0;
               else if (FUNC_0(VAR_6[VAR_7]->ident, "hlsl_d3d9"))
                  VAR_2 = VAR_1;

               return 1;
            }
         }
         break;
      case 130:
      default:
         break;
   }

   return 0;
}
