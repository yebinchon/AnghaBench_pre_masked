
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ flags; } ;
typedef TYPE_1__ gfx_ctx_flags_t ;
typedef enum rarch_shader_type { ____Placeholder_rarch_shader_type } rarch_shader_type ;
typedef enum display_flags { ____Placeholder_display_flags } display_flags ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_1 (TYPE_1__*) ;

bool FUNC_2(enum rarch_shader_type VAR_5)
{
   gfx_ctx_flags_t VAR_6;
   enum display_flags VAR_7 = VAR_0;

   VAR_6.flags = 0;

   switch (VAR_5)
   {
      case 128:
         VAR_7 = VAR_4;
         break;
      case 131:
         VAR_7 = VAR_2;
         break;
      case 132:
         VAR_7 = VAR_1;
         break;
      case 130:
         VAR_7 = VAR_3;
         break;
      case 129:
      default:
         return 0;
   }
   FUNC_1(&VAR_6);

   return FUNC_0(VAR_6.flags, VAR_7);
}
