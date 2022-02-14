
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_21__ {scalar_t__ menu_materialui_auto_rotate_nav_bar; } ;
struct TYPE_20__ {scalar_t__ menu_materialui_landscape_layout_optimization; } ;
struct TYPE_26__ {TYPE_3__ bools; TYPE_2__ uints; } ;
typedef TYPE_8__ settings_t ;
typedef uintptr_t menu_animation_ctx_tag ;
struct TYPE_19__ {int primary; int secondary; } ;
struct TYPE_27__ {float y; int entry_height; TYPE_1__ thumbnails; } ;
typedef TYPE_9__ materialui_node_t ;
struct TYPE_18__ {scalar_t__ type; scalar_t__ y; scalar_t__ x; scalar_t__ press_duration; int dragged; scalar_t__ pressed; scalar_t__ y_accel; } ;
struct TYPE_25__ {int width; scalar_t__ dragged; scalar_t__ height; } ;
struct TYPE_23__ {scalar_t__ font; } ;
struct TYPE_22__ {scalar_t__ font; } ;
struct TYPE_24__ {TYPE_5__ hint; TYPE_4__ list; } ;
struct TYPE_17__ {float last_scale_factor; unsigned int last_width; unsigned int last_height; int last_landscape_layout_optimization; scalar_t__ last_auto_rotate_nav_bar; float dip_base_unit_size; int need_compute; float scroll_y; unsigned int nav_bar_layout_height; float content_height; size_t first_onscreen_entry; size_t last_onscreen_entry; scalar_t__ landscape_entry_margin; unsigned int nav_bar_layout_width; int touch_feedback_update_selection; size_t touch_feedback_selection; scalar_t__ list_view_type; int playlist; int thumbnail_path_data; scalar_t__ secondary_thumbnail_enabled; TYPE_11__ pointer; TYPE_7__ scrollbar; TYPE_6__ font_data; } ;
typedef TYPE_10__ materialui_handle_t ;
typedef scalar_t__ int16_t ;
typedef int file_list_t ;
typedef enum materialui_landscape_layout_optimization_type { ____Placeholder_materialui_landscape_layout_optimization_type } materialui_landscape_layout_optimization_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 float VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_8__* FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,size_t) ;
 int FUNC_2 (TYPE_10__*,int ) ;
 int FUNC_3 (TYPE_10__*,unsigned int,unsigned int,unsigned int) ;
 float FUNC_4 (TYPE_10__*) ;
 int FUNC_5 (TYPE_10__*,int ) ;
 int FUNC_6 (uintptr_t*) ;
 float FUNC_7 (unsigned int,unsigned int) ;
 unsigned int FUNC_8 () ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (int ,size_t*) ;
 int * FUNC_12 (int ) ;
 size_t FUNC_13 () ;
 int FUNC_14 (TYPE_11__*) ;
 int FUNC_15 (size_t) ;
 int FUNC_16 (float) ;
 int FUNC_17 (size_t) ;
 int FUNC_18 (int ,int ,int ,size_t,int *,int) ;
 int FUNC_19 (int ,int ,size_t,int *,int *,int) ;
 int FUNC_20 () ;
 int FUNC_21 () ;

__attribute__((used)) static void FUNC_22(void *VAR_8,
      unsigned VAR_9, unsigned VAR_10,
      bool VAR_11)
{
   settings_t *VAR_12 = FUNC_0();
   materialui_handle_t *VAR_13 = (materialui_handle_t*)VAR_8;
   unsigned VAR_14 = FUNC_8();
   size_t VAR_15 = FUNC_13();
   file_list_t *VAR_16 = FUNC_12(0);
   bool VAR_17 = 0;
   bool VAR_18 = 0;
   size_t VAR_19;
   float VAR_20;
   float VAR_21;

   if (!VAR_12 || !VAR_13 || !VAR_16)
      return;



   VAR_21 = FUNC_7(VAR_9, VAR_10);

   if ((VAR_21 != VAR_13->last_scale_factor) ||
       (VAR_9 != VAR_13->last_width) ||
       (VAR_10 != VAR_13->last_height) ||
       ((enum materialui_landscape_layout_optimization_type)
            VAR_12->uints.menu_materialui_landscape_layout_optimization !=
                  VAR_13->last_landscape_layout_optimization) ||
       (VAR_12->bools.menu_materialui_auto_rotate_nav_bar != VAR_13->last_auto_rotate_nav_bar))
   {
      VAR_13->dip_base_unit_size = VAR_21 * VAR_4;
      VAR_13->last_scale_factor = VAR_21;
      VAR_13->last_width = VAR_9;
      VAR_13->last_height = VAR_10;
      VAR_13->last_landscape_layout_optimization =
            (enum materialui_landscape_layout_optimization_type)
                  VAR_12->uints.menu_materialui_landscape_layout_optimization;
      VAR_13->last_auto_rotate_nav_bar = VAR_12->bools.menu_materialui_auto_rotate_nav_bar;
      FUNC_2(VAR_13, VAR_7);



      FUNC_5(VAR_13, FUNC_20());
      FUNC_21();
   }

   if (VAR_13->need_compute)
   {
      menu_animation_ctx_tag VAR_22 = (uintptr_t)&VAR_13->scroll_y;

      if (VAR_13->font_data.list.font && VAR_13->font_data.hint.font)
         FUNC_3(VAR_13, VAR_9, VAR_10, VAR_14);
      FUNC_6(&VAR_22);


      FUNC_16(0.0f);


      VAR_13->scroll_y = FUNC_4(VAR_13);
      VAR_13->need_compute = 0;
   }



   FUNC_10(VAR_9);
   FUNC_9(VAR_10);


   FUNC_14(&VAR_13->pointer);




   if (VAR_13->pointer.type != VAR_2)
   {



      if (VAR_13->scrollbar.dragged)
      {
         float VAR_23 = (float)VAR_10 - (float)VAR_14 - (float)VAR_13->nav_bar_layout_height;
         float VAR_24 = (float)VAR_13->pointer.y - (float)VAR_14;
         float VAR_25 = VAR_13->content_height - VAR_23;






         VAR_24 -= (float)VAR_13->scrollbar.width + ((float)VAR_13->scrollbar.height / 2.0f);
         VAR_23 -= (float)((2 * VAR_13->scrollbar.width) + VAR_13->scrollbar.height);

         if (VAR_23 > 0.0f)
            VAR_13->scroll_y = VAR_25 * (VAR_24 / VAR_23);
         else
            VAR_13->scroll_y = 0.0f;
      }


      else
         VAR_13->scroll_y -= VAR_13->pointer.y_accel;
   }

   if (VAR_13->scroll_y < 0.0f)
      VAR_13->scroll_y = 0.0f;

   VAR_20 = VAR_13->content_height - (float)VAR_10 + (float)VAR_14 + (float)VAR_13->nav_bar_layout_height;
   if (VAR_13->scroll_y > VAR_20)
      VAR_13->scroll_y = VAR_20;

   if (VAR_13->content_height < (VAR_10 - VAR_14 - VAR_13->nav_bar_layout_height))
      VAR_13->scroll_y = 0.0f;


   VAR_13->first_onscreen_entry = 0;
   VAR_13->last_onscreen_entry = (VAR_15 > 0) ? VAR_15 - 1 : 0;

   for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19++)
   {
      materialui_node_t *VAR_26 = (materialui_node_t*)
            FUNC_1(VAR_16, VAR_19);
      int VAR_27;


      if (!VAR_26)
         break;


      VAR_27 = (int)((float)VAR_14 - VAR_13->scroll_y + VAR_26->y);


      if (!VAR_17)
      {
         if ((VAR_27 + (int)VAR_26->entry_height) > (int)VAR_14)
         {
            VAR_13->first_onscreen_entry = VAR_19;
            VAR_17 = 1;
         }
      }

      else if (!VAR_18)
      {
         if (VAR_27 > ((int)VAR_10 - (int)VAR_13->nav_bar_layout_height))
         {


            if (VAR_19 > 0)
            {
               VAR_13->last_onscreen_entry = VAR_19 - 1;
               VAR_18 = 1;
            }
         }
      }


      if (VAR_17 &&
          !VAR_18 &&
          (VAR_13->pointer.type != VAR_2) &&
          !VAR_13->scrollbar.dragged)
      {
         int16_t VAR_28 = VAR_13->pointer.x;
         int16_t VAR_29 = VAR_13->pointer.y;




         if ((VAR_28 > VAR_13->landscape_entry_margin) &&
             (VAR_28 < VAR_9 - VAR_13->landscape_entry_margin - VAR_13->nav_bar_layout_width) &&
             (VAR_29 >= VAR_14) &&
             (VAR_29 <= VAR_10 - VAR_13->nav_bar_layout_height))
         {


            if ((VAR_29 > VAR_27) &&
                (VAR_29 < (VAR_27 + VAR_26->entry_height)))
            {

               FUNC_15(VAR_19);


               if (VAR_13->pointer.pressed && !VAR_13->pointer.dragged)
               {


                  if (VAR_13->touch_feedback_update_selection)
                  {

                     VAR_13->touch_feedback_selection = VAR_19;




                     if (VAR_13->pointer.press_duration >= VAR_1)
                     {
                        FUNC_17(VAR_19);




                        VAR_13->touch_feedback_update_selection = 0;
                     }
                  }
               }
            }
         }
      }




      if ((VAR_13->list_view_type != VAR_5) &&
          (VAR_13->list_view_type != VAR_6))
      {
         bool VAR_30 = VAR_17 && !VAR_18;

         if (VAR_13->secondary_thumbnail_enabled)
            FUNC_19(
               VAR_13->thumbnail_path_data, VAR_13->playlist, VAR_19,
               &VAR_26->thumbnails.primary, &VAR_26->thumbnails.secondary,
               VAR_30);
         else
            FUNC_18(
                  VAR_13->thumbnail_path_data, VAR_3,
                  VAR_13->playlist, VAR_19, &VAR_26->thumbnails.primary, VAR_30);
      }
      else if (VAR_18)
         break;
   }

   FUNC_11(VAR_0, &VAR_13->first_onscreen_entry);
}
