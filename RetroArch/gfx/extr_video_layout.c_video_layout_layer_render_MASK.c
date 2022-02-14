
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_9__ ;
typedef struct TYPE_42__ TYPE_8__ ;
typedef struct TYPE_41__ TYPE_7__ ;
typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_13__ ;
typedef struct TYPE_33__ TYPE_12__ ;
typedef struct TYPE_32__ TYPE_11__ ;
typedef struct TYPE_31__ TYPE_10__ ;


struct TYPE_42__ {int (* layer_end ) (TYPE_9__*,int ) ;int (* led_seg ) (TYPE_9__*,int ,int) ;int (* led_dot ) (TYPE_9__*,int,int) ;int (* counter ) (TYPE_9__*,int ) ;int (* text ) (TYPE_9__*,int ) ;int (* image ) (TYPE_9__*,int ,int ) ;int (* ellipse ) (TYPE_9__*) ;int (* rect ) (TYPE_9__*) ;int (* screen ) (TYPE_9__*,int ) ;int (* layer_begin ) (TYPE_9__*) ;} ;
typedef TYPE_8__ video_layout_render_interface_t ;
struct TYPE_43__ {int color; int orientation; int bounds; void* video_driver_frame_data; } ;
typedef TYPE_9__ video_layout_render_info_t ;
struct TYPE_31__ {int elements_count; int blend; TYPE_11__* elements; } ;
typedef TYPE_10__ layer_t ;
struct TYPE_32__ {int o_bind; int state; int components_count; TYPE_12__* components; } ;
typedef TYPE_11__ element_t ;
struct TYPE_40__ {int max_state; } ;
struct TYPE_39__ {int string; } ;
struct TYPE_38__ {int loaded; size_t image_idx; size_t alpha_idx; int alpha_file; int file; } ;
struct TYPE_37__ {int index; } ;
struct TYPE_41__ {TYPE_6__ counter; TYPE_5__ text; TYPE_4__ image; TYPE_3__ screen; } ;
struct TYPE_33__ {int enabled_state; int type; TYPE_7__ attr; int color; int orientation; int render_bounds; } ;
typedef TYPE_12__ component_t ;
struct TYPE_36__ {int value; } ;
struct TYPE_35__ {TYPE_10__* layers; } ;
struct TYPE_34__ {int * images; TYPE_2__* io; TYPE_1__* view; TYPE_8__* render; TYPE_9__ render_info; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (TYPE_9__*,int,int) ;
 int FUNC_3 (TYPE_9__*,int ,int) ;
 int FUNC_4 (TYPE_9__*,int ,int) ;
 int FUNC_5 (TYPE_9__*,int ,int) ;
 int FUNC_6 (TYPE_9__*,int ,int) ;
 int FUNC_7 (TYPE_9__*,int ,int) ;
 int FUNC_8 (TYPE_9__*,int ,int) ;
 int FUNC_9 (TYPE_9__*,int ) ;
 int FUNC_10 (TYPE_9__*,int ) ;
 int FUNC_11 (TYPE_9__*) ;
 int FUNC_12 (TYPE_9__*) ;
 int FUNC_13 (TYPE_9__*,int ,int ) ;
 int FUNC_14 (TYPE_9__*,int ) ;
 int FUNC_15 (TYPE_9__*,int ) ;
 int FUNC_16 (TYPE_9__*,int,int) ;
 int FUNC_17 (TYPE_9__*,int,int) ;
 void* FUNC_18 (int ) ;
 TYPE_13__* VAR_6 ;

void FUNC_19(void *VAR_7, int VAR_8)
{
   video_layout_render_info_t *VAR_9;
   const video_layout_render_interface_t *VAR_10;
   layer_t *VAR_11;
   int VAR_12, VAR_13;

   VAR_9 = &VAR_6->render_info;
   VAR_10 = VAR_6->render;
   VAR_11 = &VAR_6->view->layers[VAR_8];

   VAR_9->video_driver_frame_data = VAR_7;

   VAR_10->layer_begin(VAR_9);

   for (VAR_12 = 0; VAR_12 < VAR_11->elements_count; ++VAR_12)
   {
      element_t *VAR_14;
      VAR_14 = &VAR_11->elements[VAR_12];

      if (VAR_14->o_bind != -1)
         VAR_14->state = VAR_6->io[VAR_14->o_bind].value;

      for (VAR_13 = 0; VAR_13 < VAR_14->components_count; ++VAR_13)
      {
         component_t *VAR_15;
         VAR_15 = &VAR_14->components[VAR_13];

         if (VAR_15->enabled_state != -1)
         {
            if(VAR_15->enabled_state != VAR_14->state)
               continue;
         }

         VAR_9->bounds = VAR_15->render_bounds;
         VAR_9->orientation = VAR_15->orientation;
         VAR_9->color = VAR_15->color;

         switch (VAR_15->type)
         {
         case 128:
            break;
         case 130:
            VAR_10->screen(VAR_9, VAR_15->attr.screen.index);
            break;
         case 132:
            VAR_10->rect(VAR_9);
            break;
         case 143:
            VAR_10->ellipse(VAR_9);
            break;
         case 139:
            if(!VAR_15->attr.image.loaded)
            {
               VAR_15->attr.image.image_idx = FUNC_18(VAR_15->attr.image.file);
               if(VAR_15->attr.image.alpha_file)
                  VAR_15->attr.image.alpha_idx = FUNC_18(VAR_15->attr.image.alpha_file);
               VAR_15->attr.image.loaded = 1;
            }
            VAR_10->image(VAR_9,
               VAR_6->images[VAR_15->attr.image.image_idx],
               VAR_6->images[VAR_15->attr.image.alpha_idx]);
            break;
         case 129:
            VAR_10->text(VAR_9, VAR_15->attr.text.string);
            break;
         case 144:
            VAR_10->counter(VAR_9, FUNC_0(VAR_14->state, VAR_15->attr.counter.max_state));
            break;
         case 140:
            VAR_10->led_dot(VAR_9, 1, VAR_14->state);
            break;
         case 142:
            VAR_10->led_dot(VAR_9, 5, VAR_14->state);
            break;
         case 141:
            VAR_10->led_dot(VAR_9, 8, VAR_14->state);
            break;
         case 134:
            VAR_10->led_seg(VAR_9, VAR_4, VAR_14->state);
            break;
         case 133:
            VAR_10->led_seg(VAR_9, VAR_5, VAR_14->state);
            break;
         case 138:
            VAR_10->led_seg(VAR_9, VAR_0, VAR_14->state);
            break;
         case 137:
            VAR_10->led_seg(VAR_9, VAR_1, VAR_14->state);
            break;
         case 136:
            VAR_10->led_seg(VAR_9, VAR_2, VAR_14->state);
            break;
         case 135:
            VAR_10->led_seg(VAR_9, VAR_3, VAR_14->state);
            break;
         case 131:

            break;
         }
      }
   }

   VAR_10->layer_end(VAR_9, VAR_11->blend);
}
