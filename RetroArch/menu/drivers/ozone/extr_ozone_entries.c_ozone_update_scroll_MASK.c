
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int position_y; int height; } ;
typedef TYPE_3__ ozone_node_t ;
struct TYPE_10__ {int scroll_y; float cursor_alpha; } ;
struct TYPE_9__ {int header_height; int entry_padding_vertical; unsigned int footer_height; } ;
struct TYPE_12__ {float entries_height; TYPE_2__ animations; int selection; int selection_old; TYPE_1__ dimensions; } ;
typedef TYPE_4__ ozone_handle_t ;
typedef void* menu_animation_ctx_tag ;
struct TYPE_13__ {float* subject; float target_value; int * userdata; void* tag; void* easing_enum; void* duration; int * cb; } ;
typedef TYPE_5__ menu_animation_ctx_entry_t ;
typedef int file_list_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned int*) ;

void FUNC_3(ozone_handle_t *VAR_2, bool VAR_3, ozone_node_t *VAR_4)
{
   file_list_t *VAR_5 = FUNC_1(0);
   menu_animation_ctx_tag VAR_6 = (uintptr_t) VAR_5;
   menu_animation_ctx_entry_t VAR_7;
   float VAR_8 = 0, VAR_9;
   float VAR_10, VAR_11;
   unsigned VAR_12;

   FUNC_2(((void*)0), &VAR_12);

   VAR_11 =
      VAR_2->dimensions.header_height +
      VAR_2->dimensions.entry_padding_vertical +
      VAR_2->animations.scroll_y +
      VAR_4->position_y +
      VAR_4->height / 2;

   VAR_10 = VAR_12 - VAR_2->dimensions.header_height - 1 - VAR_2->dimensions.footer_height;
   VAR_9 = VAR_12/2;

   VAR_8 = VAR_2->animations.scroll_y - (VAR_11 - VAR_9);

   if (VAR_8 + VAR_2->entries_height < VAR_10)
      VAR_8 = VAR_10 - VAR_2->entries_height - VAR_2->dimensions.entry_padding_vertical * 2;

   if (VAR_8 > 0)
      VAR_8 = 0;

   if (VAR_3)
   {

      VAR_2->animations.cursor_alpha = 0.0f;

      VAR_7.cb = ((void*)0);
      VAR_7.duration = VAR_0;
      VAR_7.easing_enum = VAR_1;
      VAR_7.subject = &VAR_2->animations.cursor_alpha;
      VAR_7.tag = VAR_6;
      VAR_7.target_value = 1.0f;
      VAR_7.userdata = ((void*)0);

      FUNC_0(&VAR_7);


      VAR_7.cb = ((void*)0);
      VAR_7.duration = VAR_0;
      VAR_7.easing_enum = VAR_1;
      VAR_7.subject = &VAR_2->animations.scroll_y;
      VAR_7.tag = VAR_6;
      VAR_7.target_value = VAR_8;
      VAR_7.userdata = ((void*)0);

      FUNC_0(&VAR_7);
   }
   else
   {
      VAR_2->selection_old = VAR_2->selection;
      VAR_2->animations.scroll_y = VAR_8;
   }
}
