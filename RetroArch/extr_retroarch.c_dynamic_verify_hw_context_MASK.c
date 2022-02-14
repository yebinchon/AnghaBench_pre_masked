
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ driver_switch_enable; } ;
struct TYPE_5__ {char* video_driver; } ;
struct TYPE_7__ {TYPE_2__ bools; TYPE_1__ arrays; } ;
typedef TYPE_3__ settings_t ;
typedef enum retro_hw_context_type { ____Placeholder_retro_hw_context_type } retro_hw_context_type ;
 TYPE_3__* VAR_0 ;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static bool FUNC_1(enum retro_hw_context_type VAR_1,
      unsigned VAR_2, unsigned VAR_3)
{
   settings_t *VAR_4 = VAR_0;
   const char *VAR_5 = VAR_4->arrays.video_driver;

   if (VAR_4->bools.driver_switch_enable)
      return 1;

   switch (VAR_1)
   {
      case 128:
         if (!FUNC_0(VAR_5, "vulkan"))
            return 0;
         break;
      case 132:
      case 131:
      case 130:
      case 133:
      case 129:
         if (!FUNC_0(VAR_5, "gl") &&
             !FUNC_0(VAR_5, "glcore"))
         {
            return 0;
         }
         break;
      case 134:
         if (!(FUNC_0(VAR_5, "d3d11") && VAR_3 == 11))
            return 0;
         break;
      default:
         break;
   }

   return 1;
}
