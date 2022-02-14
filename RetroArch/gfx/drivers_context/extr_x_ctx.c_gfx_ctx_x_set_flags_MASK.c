
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int core_hw_context_enable; } ;
typedef TYPE_1__ gfx_ctx_x_data_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(void *VAR_6, uint32_t VAR_7)
{
   gfx_ctx_x_data_t *VAR_8 = (gfx_ctx_x_data_t*)VAR_6;

   switch (VAR_4)
   {
      case 129:
      case 128:
         if (FUNC_0(VAR_7, VAR_0))
               VAR_3 = 1;
         if (FUNC_0(VAR_7, VAR_1))
            VAR_8->core_hw_context_enable = 1;
         if (FUNC_0(VAR_7, VAR_2))
            VAR_5 = 1;
         break;
      case 130:
      default:
         break;
   }
}
