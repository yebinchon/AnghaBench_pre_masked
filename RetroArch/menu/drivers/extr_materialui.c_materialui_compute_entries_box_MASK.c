
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_19__ {int path_enabled; int label_enabled; int rich_label_enabled; int value_enabled; } ;
typedef TYPE_6__ menu_entry_t ;
struct TYPE_20__ {float text_height; float entry_height; float y; size_t icon_texture_index; scalar_t__ has_icon; } ;
typedef TYPE_7__ materialui_node_t ;
struct TYPE_17__ {unsigned int font_height; scalar_t__ glyph_width; } ;
struct TYPE_16__ {float font_height; } ;
struct TYPE_18__ {TYPE_4__ hint; TYPE_3__ list; } ;
struct TYPE_15__ {scalar_t__* list; } ;
struct TYPE_14__ {scalar_t__ width; } ;
struct TYPE_21__ {int margin; int landscape_entry_margin; scalar_t__ list_view_type; scalar_t__ thumbnail_height_max; int dip_base_unit_size; float content_height; TYPE_5__ font_data; scalar_t__ icon_size; TYPE_2__ textures; scalar_t__ thumbnail_width_max; scalar_t__ secondary_thumbnail_enabled; TYPE_1__ scrollbar; scalar_t__ is_portrait; scalar_t__ nav_bar_layout_width; } ;
typedef TYPE_8__ materialui_handle_t ;
typedef int file_list_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,unsigned int) ;
 unsigned int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_8__*,unsigned int,unsigned int,unsigned int) ;
 int * FUNC_3 (int ) ;
 size_t FUNC_4 () ;
 int FUNC_5 (TYPE_6__*,int ,unsigned int,int *,int) ;
 int FUNC_6 (TYPE_6__*,char const**) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char*,char const*,int,int,int ) ;

__attribute__((used)) static void FUNC_10(
      materialui_handle_t* VAR_4,
      unsigned VAR_5, unsigned VAR_6, unsigned VAR_7)
{
   unsigned VAR_8;
   int VAR_9 =
            (int)VAR_5 - (int)(VAR_4->margin * 2) - (int)(VAR_4->landscape_entry_margin * 2) - (int)VAR_4->nav_bar_layout_width;
   file_list_t *VAR_10 = FUNC_3(0);
   float VAR_11 = 0;
   size_t VAR_12 = FUNC_4();





   if (VAR_4->list_view_type == VAR_3)
   {

      float VAR_13 = (float)VAR_4->font_data.list.font_height;

      float VAR_14 =
            VAR_13 + (float)VAR_4->thumbnail_height_max +
            ((float)VAR_4->dip_base_unit_size / 5.0f);

      for (VAR_8 = 0; VAR_8 < VAR_12; VAR_8++)
      {
         materialui_node_t *VAR_15 = (materialui_node_t*)
                  FUNC_0(VAR_10, VAR_8);

         VAR_15->text_height = VAR_13;
         VAR_15->entry_height = VAR_14;
         VAR_15->y = VAR_11;
         VAR_11 += VAR_14;
      }

      VAR_4->content_height = VAR_11;


      FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);

      return;
   }




   if ((VAR_4->list_view_type != VAR_1) &&
       (VAR_4->list_view_type != VAR_2))
   {
      int VAR_16 = 0;


      if (VAR_4->is_portrait)
      {
         if (VAR_4->secondary_thumbnail_enabled)
            VAR_16 = (int)VAR_4->scrollbar.width;
      }

      else
         if (VAR_4->landscape_entry_margin < VAR_4->margin)
            VAR_16 = (int)(VAR_4->margin - VAR_4->landscape_entry_margin);

      VAR_9 -= VAR_4->thumbnail_width_max + VAR_16;


      if (VAR_4->secondary_thumbnail_enabled)
         VAR_9 -= VAR_4->thumbnail_width_max + VAR_16;



      else if (VAR_4->landscape_entry_margin > 0)
         VAR_9 += (VAR_4->margin > VAR_4->landscape_entry_margin) ?
               (int)VAR_4->landscape_entry_margin : (int)VAR_4->margin;
   }

   for (VAR_8 = 0; VAR_8 < VAR_12; VAR_8++)
   {
      menu_entry_t VAR_17;
      char VAR_18[VAR_0];
      const char *VAR_19 = ((void*)0);
      unsigned VAR_20 = 0;
      materialui_node_t *VAR_21 = (materialui_node_t*)
         FUNC_0(VAR_10, VAR_8);

      VAR_18[0] = '\0';

      FUNC_7(&VAR_17);
      VAR_17.path_enabled = 0;
      VAR_17.label_enabled = 0;
      VAR_17.rich_label_enabled = 0;
      VAR_17.value_enabled = 0;
      FUNC_5(&VAR_17, 0, VAR_8, ((void*)0), 1);

      FUNC_6(&VAR_17, &VAR_19);

      if (!FUNC_8(VAR_19))
      {
         int VAR_22 = VAR_9;



         if (VAR_4->list_view_type == VAR_1)
            if (VAR_21->has_icon)
               if (VAR_4->textures.list[VAR_21->icon_texture_index])
                  VAR_22 -= (int)VAR_4->icon_size;

         FUNC_9(
               VAR_18, VAR_19,
               VAR_22 / (int)VAR_4->font_data.hint.glyph_width,
               0, 0);

         VAR_20 = FUNC_1(VAR_18);
      }

      VAR_21->text_height = VAR_4->font_data.list.font_height +
            (VAR_20 * VAR_4->font_data.hint.font_height);

      VAR_21->entry_height = VAR_21->text_height +
            VAR_4->dip_base_unit_size / 10;




      if ((VAR_4->list_view_type != VAR_1) &&
          (VAR_4->list_view_type != VAR_2))
         VAR_21->entry_height = (VAR_21->entry_height < VAR_4->thumbnail_height_max) ?
               VAR_4->thumbnail_height_max : VAR_21->entry_height;

      VAR_21->entry_height += VAR_4->dip_base_unit_size / 10;
      VAR_21->y = VAR_11;
      VAR_11 += VAR_21->entry_height;
   }

   VAR_4->content_height = VAR_11;


   FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);
}
