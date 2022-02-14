
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_14__ {size_t texture_index; scalar_t__ active; } ;
typedef TYPE_6__ materialui_nav_bar_menu_tab_t ;
struct TYPE_13__ {int * list; } ;
struct TYPE_12__ {float* nav_bar_background; float* divider; float* nav_bar_icon_passive; float* nav_bar_icon_disabled; float* nav_bar_icon_active; } ;
struct TYPE_10__ {size_t texture_index; scalar_t__ enabled; } ;
struct TYPE_9__ {size_t texture_index; scalar_t__ enabled; } ;
struct TYPE_11__ {unsigned int width; unsigned int num_menu_tabs; unsigned int selection_marker_width; unsigned int divider_width; TYPE_6__* menu_tabs; TYPE_2__ resume_tab; TYPE_1__ back_tab; } ;
struct TYPE_15__ {scalar_t__ icon_size; TYPE_5__ textures; TYPE_4__ colors; TYPE_3__ nav_bar; } ;
typedef TYPE_7__ materialui_handle_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int ,int,float,unsigned int,unsigned int,int ,int,float*) ;
 int FUNC_1 (int *,int,int,unsigned int,unsigned int,unsigned int,unsigned int,float*) ;

__attribute__((used)) static void FUNC_2(
      materialui_handle_t *VAR_1, video_frame_info_t *VAR_2,
      unsigned VAR_3, unsigned VAR_4)
{
   unsigned VAR_5 = VAR_1->nav_bar.width;
   unsigned VAR_6 = VAR_4;
   int VAR_7 = (int)VAR_3 - (int)VAR_1->nav_bar.width;
   int VAR_8 = 0;
   unsigned VAR_9 = VAR_1->nav_bar.num_menu_tabs + VAR_0;
   float VAR_10 = (float)VAR_4 / (float)VAR_9;
   unsigned VAR_11 = (unsigned)(VAR_10 + 0.5f);
   unsigned VAR_12 = VAR_1->nav_bar.selection_marker_width;
   unsigned VAR_13 = VAR_11;
   int VAR_14 = (int)VAR_3 - (int)VAR_1->nav_bar.selection_marker_width;
   unsigned VAR_15;




   FUNC_1(
         VAR_2,
         VAR_7,
         VAR_8,
         VAR_5,
         VAR_6,
         VAR_3,
         VAR_4,
         VAR_1->colors.nav_bar_background);


   FUNC_1(
         VAR_2,
         VAR_7,
         VAR_8,
         VAR_1->nav_bar.divider_width,
         VAR_6,
         VAR_3,
         VAR_4,
         VAR_1->colors.divider);




   FUNC_0(VAR_2,
         VAR_1->icon_size,
         VAR_1->textures.list[VAR_1->nav_bar.back_tab.texture_index],
         VAR_7,
         (int)((((float)VAR_9 - 0.5f) * VAR_10) - ((float)VAR_1->icon_size / 2.0f)),
         VAR_3,
         VAR_4,
         0,
         1,
         VAR_1->nav_bar.back_tab.enabled ?
               VAR_1->colors.nav_bar_icon_passive : VAR_1->colors.nav_bar_icon_disabled);


   FUNC_0(VAR_2,
         VAR_1->icon_size,
         VAR_1->textures.list[VAR_1->nav_bar.resume_tab.texture_index],
         VAR_7,
         (int)((0.5f * VAR_10) - ((float)VAR_1->icon_size / 2.0f)),
         VAR_3,
         VAR_4,
         0,
         1,
         VAR_1->nav_bar.resume_tab.enabled ?
               VAR_1->colors.nav_bar_icon_passive : VAR_1->colors.nav_bar_icon_disabled);


   for (VAR_15 = 0; VAR_15 < VAR_1->nav_bar.num_menu_tabs; VAR_15++)
   {
      materialui_nav_bar_menu_tab_t *VAR_16 = &VAR_1->nav_bar.menu_tabs[VAR_15];
      float *VAR_17 = VAR_16->active ?
            VAR_1->colors.nav_bar_icon_active : VAR_1->colors.nav_bar_icon_passive;


      FUNC_0(VAR_2,
            VAR_1->icon_size,
            VAR_1->textures.list[VAR_16->texture_index],
            VAR_7,
            (((float)VAR_15 + 1.5f) * VAR_10) - ((float)VAR_1->icon_size / 2.0f),
            VAR_3,
            VAR_4,
            0,
            1,
            VAR_17);


      FUNC_1(
            VAR_2,
            VAR_14,
            (int)((VAR_15 + 1) * VAR_11),
            VAR_12,
            VAR_13,
            VAR_3,
            VAR_4,
            VAR_17);
   }
}
