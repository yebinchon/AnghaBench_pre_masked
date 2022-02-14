
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* battery_percent_str; char* timedate_str; scalar_t__ timedate_width; scalar_t__ battery_percent_width; } ;
struct TYPE_12__ {int glyph_width; int * font; void* font_height; } ;
struct TYPE_14__ {int glyph_width; int * font; void* font_height; } ;
struct TYPE_13__ {int glyph_width; int * font; void* font_height; } ;
struct TYPE_15__ {TYPE_3__ hint; TYPE_5__ list; TYPE_4__ title; } ;
struct TYPE_11__ {int width; unsigned int divider_width; int selection_marker_width; int location; } ;
struct TYPE_16__ {int is_portrait; scalar_t__ last_height; scalar_t__ last_width; int cursor_size; int dip_base_unit_size; int sys_bar_height; int title_bar_height; int header_shadow_height; int margin; int icon_size; int sys_bar_margin; int sys_bar_icon_size; unsigned int entry_divider_width; float last_scale_factor; int nav_bar_layout_width; int nav_bar_layout_height; int need_compute; TYPE_1__ sys_bar_cache; TYPE_6__ font_data; TYPE_2__ nav_bar; scalar_t__ last_auto_rotate_nav_bar; } ;
typedef TYPE_7__ materialui_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *,float) ;
 unsigned int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (TYPE_7__*) ;
 void* FUNC_3 (int ,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static void FUNC_6(materialui_handle_t *VAR_3, bool VAR_4)
{
   int VAR_5;
   int VAR_6;
   int VAR_7;
   unsigned VAR_8;

   VAR_3->is_portrait = VAR_3->last_height >= VAR_3->last_width;

   VAR_3->cursor_size = VAR_3->dip_base_unit_size / 3;

   VAR_3->sys_bar_height = VAR_3->dip_base_unit_size / 7;
   VAR_3->title_bar_height = VAR_3->dip_base_unit_size / 3;
   VAR_8 = VAR_3->sys_bar_height + VAR_3->title_bar_height;

   VAR_5 = VAR_3->dip_base_unit_size / 7;
   VAR_6 = VAR_3->dip_base_unit_size / 9;
   VAR_7 = VAR_3->dip_base_unit_size / 11;

   VAR_3->header_shadow_height = VAR_3->dip_base_unit_size / 36;

   VAR_3->margin = VAR_3->dip_base_unit_size / 9;
   VAR_3->icon_size = VAR_3->dip_base_unit_size / 3;

   VAR_3->sys_bar_margin = VAR_3->dip_base_unit_size / 12;
   VAR_3->sys_bar_icon_size = VAR_3->dip_base_unit_size / 7;

   VAR_3->entry_divider_width = (VAR_3->last_scale_factor > 1.0f) ?
         (unsigned)(VAR_3->last_scale_factor + 0.5f) : 1;
   VAR_3->nav_bar.width = VAR_3->dip_base_unit_size / 3;
   VAR_3->nav_bar.divider_width = VAR_3->entry_divider_width;
   VAR_3->nav_bar.selection_marker_width = VAR_3->nav_bar.width / 16;

   if (!VAR_3->is_portrait && VAR_3->last_auto_rotate_nav_bar)
   {
      VAR_3->nav_bar.location = VAR_2;
      VAR_3->nav_bar_layout_width = VAR_3->nav_bar.width;
      VAR_3->nav_bar_layout_height = 0;
   }
   else
   {
      VAR_3->nav_bar.location = VAR_1;
      VAR_3->nav_bar_layout_width = 0;
      VAR_3->nav_bar_layout_height = VAR_3->nav_bar.width;
   }


   VAR_3->font_data.title.glyph_width = (int)((VAR_5 * (3.0f / 4.0f)) + 0.5f);
   VAR_3->font_data.list.glyph_width = (int)((VAR_6 * (3.0f / 4.0f)) + 0.5f);
   VAR_3->font_data.hint.glyph_width = (int)((VAR_7 * (3.0f / 4.0f)) + 0.5f);

   FUNC_5(VAR_8);

   if (VAR_3->font_data.title.font)
   {
      FUNC_4(VAR_3->font_data.title.font);
      VAR_3->font_data.title.font = ((void*)0);
   }
   if (VAR_3->font_data.list.font)
   {
      FUNC_4(VAR_3->font_data.list.font);
      VAR_3->font_data.list.font = ((void*)0);
   }
   if (VAR_3->font_data.hint.font)
   {
      FUNC_4(VAR_3->font_data.hint.font);
      VAR_3->font_data.hint.font = ((void*)0);
   }

   VAR_3->font_data.title.font = FUNC_3(
         VAR_0,
         VAR_5, VAR_4);

   VAR_3->font_data.list.font = FUNC_3(
         VAR_0,
         VAR_6, VAR_4);

   VAR_3->font_data.hint.font = FUNC_3(
         VAR_0,
         VAR_7, VAR_4);

   if (VAR_3->font_data.title.font)
   {

      unsigned VAR_9 =
         FUNC_1(VAR_3->font_data.title.font, "a", 1, 1);

      if (VAR_9)
         VAR_3->font_data.title.glyph_width = VAR_9;


      VAR_3->font_data.title.font_height = FUNC_0(VAR_3->font_data.title.font, 1.0f);
   }

   if (VAR_3->font_data.list.font)
   {

      unsigned VAR_10 =
         FUNC_1(VAR_3->font_data.list.font, "a", 1, 1);

      if (VAR_10)
         VAR_3->font_data.list.glyph_width = VAR_10;


      VAR_3->font_data.list.font_height = FUNC_0(VAR_3->font_data.list.font, 1.0f);
   }

   if (VAR_3->font_data.hint.font)
   {

      unsigned VAR_11 =
         FUNC_1(VAR_3->font_data.hint.font, "t", 1, 1);

      if (VAR_11)
         VAR_3->font_data.hint.glyph_width = VAR_11;


      VAR_3->font_data.hint.font_height = FUNC_0(VAR_3->font_data.hint.font, 1.0f);
   }




   VAR_3->sys_bar_cache.battery_percent_str[0] = '\0';
   VAR_3->sys_bar_cache.battery_percent_width = 0;
   VAR_3->sys_bar_cache.timedate_str[0] = '\0';
   VAR_3->sys_bar_cache.timedate_width = 0;

   FUNC_2(VAR_3);

   VAR_3->need_compute = 1;
}
