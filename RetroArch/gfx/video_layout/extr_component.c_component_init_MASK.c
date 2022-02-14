
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int digits; int max_state; void* align; } ;
struct TYPE_10__ {void* align; int * string; } ;
struct TYPE_9__ {int loaded; int alpha_idx; int image_idx; int * alpha_file; int * file; } ;
struct TYPE_8__ {int index; } ;
struct TYPE_12__ {TYPE_4__ counter; TYPE_3__ text; TYPE_2__ image; TYPE_1__ screen; } ;
struct TYPE_13__ {int type; int enabled_state; TYPE_5__ attr; int color; int orientation; int render_bounds; int bounds; } ;
typedef TYPE_6__ component_t ;
typedef int comp_type_t ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(component_t *VAR_2, comp_type_t VAR_3)
{
   VAR_2->type = VAR_3;
   VAR_2->bounds = FUNC_0();
   VAR_2->render_bounds = FUNC_1();
   VAR_2->orientation = VAR_0;
   VAR_2->color = FUNC_2();
   VAR_2->enabled_state = -1;

   switch (VAR_2->type)
   {
      case 128:
         break;
      case 130:
         VAR_2->attr.screen.index = 0;
         break;
      case 132:
         break;
      case 143:
         break;
      case 139:
         VAR_2->attr.image.file = ((void*)0);
         VAR_2->attr.image.alpha_file = ((void*)0);
         VAR_2->attr.image.image_idx = 0;
         VAR_2->attr.image.alpha_idx = 0;
         VAR_2->attr.image.loaded = 0;
         break;
      case 129:
         VAR_2->attr.text.string = ((void*)0);
         VAR_2->attr.text.align = VAR_1;
         break;
      case 144:
         VAR_2->attr.counter.digits = 2;
         VAR_2->attr.counter.max_state = 999;
         VAR_2->attr.counter.align = VAR_1;
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
