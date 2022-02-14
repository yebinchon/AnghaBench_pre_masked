
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int string; } ;
struct TYPE_6__ {int alpha_file; int file; } ;
struct TYPE_8__ {TYPE_2__ text; TYPE_1__ image; } ;
struct TYPE_9__ {int type; TYPE_3__ attr; } ;
typedef TYPE_4__ component_t ;
 int FUNC_0 (int ) ;

void FUNC_1(component_t *VAR_0)
{
   switch (VAR_0->type)
   {
      case 128:
         break;
      case 130:
         break;
      case 132:
         break;
      case 143:
         break;
      case 139:
         FUNC_0(VAR_0->attr.image.file);
         FUNC_0(VAR_0->attr.image.alpha_file);
         break;
      case 129:
         FUNC_0(VAR_0->attr.text.string);
         break;
      case 144:
         break;
      case 140:
         break;
      case 142:
         break;
      case 141:
         break;
      case 134:
         break;
      case 133:
         break;
      case 138:
         break;
      case 137:
         break;
      case 136:
         break;
      case 135:
         break;
      case 131:
         break;
   }
}
