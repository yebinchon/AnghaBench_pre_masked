
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int align; int max_state; int digits; } ;
struct TYPE_11__ {int align; void* string; } ;
struct TYPE_10__ {int loaded; int alpha_idx; int image_idx; void* alpha_file; void* file; } ;
struct TYPE_9__ {int index; } ;
struct TYPE_13__ {TYPE_4__ counter; TYPE_3__ text; TYPE_2__ image; TYPE_1__ screen; } ;
struct TYPE_14__ {int type; TYPE_5__ attr; int enabled_state; int color; int orientation; int render_bounds; int bounds; } ;
typedef TYPE_6__ component_t ;
 void* FUNC_0 (void*) ;

void FUNC_1(component_t *VAR_0, const component_t *VAR_1)
{
   VAR_0->type = VAR_1->type;
   VAR_0->bounds = VAR_1->bounds;
   VAR_0->render_bounds = VAR_1->render_bounds;
   VAR_0->orientation = VAR_1->orientation;
   VAR_0->color = VAR_1->color;
   VAR_0->enabled_state = VAR_1->enabled_state;

   switch (VAR_0->type)
   {
      case 128:
         break;
      case 130:
         VAR_0->attr.screen.index = VAR_1->attr.screen.index;
         break;
      case 132:
         break;
      case 143:
         break;
      case 139:
         VAR_0->attr.image.file = FUNC_0(VAR_1->attr.image.file);
         VAR_0->attr.image.alpha_file = FUNC_0(VAR_1->attr.image.alpha_file);
         VAR_0->attr.image.image_idx = VAR_1->attr.image.image_idx;
         VAR_0->attr.image.alpha_idx = VAR_1->attr.image.alpha_idx;
         VAR_0->attr.image.loaded = VAR_1->attr.image.loaded;
         break;
      case 129:
         VAR_0->attr.text.string = FUNC_0(VAR_1->attr.text.string);
         VAR_0->attr.text.align = VAR_1->attr.text.align;
         break;
      case 144:
         VAR_0->attr.counter.digits = VAR_1->attr.counter.digits;
         VAR_0->attr.counter.max_state = VAR_1->attr.counter.max_state;
         VAR_0->attr.counter.align = VAR_1->attr.counter.align;
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
