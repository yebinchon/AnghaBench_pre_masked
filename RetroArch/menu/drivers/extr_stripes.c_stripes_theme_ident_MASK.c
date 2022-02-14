
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int menu_xmb_theme; } ;
struct TYPE_5__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
 TYPE_2__* FUNC_0 () ;

const char* FUNC_1(void)
{
   settings_t *VAR_0 = FUNC_0();
   switch (VAR_0->uints.menu_xmb_theme)
   {
      case 135:
         return "flatui";
      case 130:
         return "retroactive";
      case 129:
         return "retrosystem";
      case 131:
         return "pixel";
      case 132:
         return "neoactive";
      case 128:
         return "systematic";
      case 136:
         return "dot-art";
      case 137:
         return "custom";
      case 133:
         return "monochrome-inverted";
      case 134:
      default:
         break;
   }

   return "monochrome";
}
