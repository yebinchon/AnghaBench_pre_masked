
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int wrap; scalar_t__ height; scalar_t__ position_y; } ;
typedef TYPE_3__ ozone_node_t ;
struct TYPE_15__ {int entry_icon_padding; scalar_t__ thumbnail_bar_width; scalar_t__ sidebar_width; scalar_t__ entry_spacing; scalar_t__ entry_height; } ;
struct TYPE_14__ {int entries_sublabel; } ;
struct TYPE_17__ {int empty_playlist; scalar_t__* icons_textures; int depth; int sublabel_font_glyph_width; size_t selection; scalar_t__ entries_height; TYPE_2__ dimensions; scalar_t__ show_thumbnail_bar; scalar_t__ is_playlist; TYPE_1__ fonts; } ;
typedef TYPE_4__ ozone_handle_t ;
typedef scalar_t__ menu_texture_item ;
struct TYPE_18__ {int path_enabled; int label_enabled; int rich_label_enabled; int value_enabled; int type; int enum_idx; } ;
typedef TYPE_5__ menu_entry_t ;
typedef int file_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int *,size_t) ;
 unsigned int FUNC_1 (int ,float) ;
 int FUNC_2 (int ,size_t*) ;
 int * FUNC_3 (int ) ;
 size_t FUNC_4 () ;
 int FUNC_5 (TYPE_5__*,int ,unsigned int,int *,int) ;
 int FUNC_6 (TYPE_5__*,char const**) ;
 int FUNC_7 (TYPE_5__*) ;
 size_t FUNC_8 () ;
 unsigned int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (TYPE_4__*,int ,int ,int) ;
 int FUNC_11 (TYPE_4__*,int) ;
 int FUNC_12 (TYPE_4__*,int,TYPE_3__*) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (unsigned int*,unsigned int*) ;
 int FUNC_15 (char*,char const*,int,int,int ) ;

void FUNC_16(ozone_handle_t *VAR_3)
{

   unsigned VAR_4;
   unsigned VAR_5;
   unsigned VAR_6;
   size_t VAR_7, VAR_8;

   file_list_t *VAR_9 = ((void*)0);
   int VAR_10 = FUNC_11(VAR_3, 0);
   unsigned VAR_11 = FUNC_1(VAR_3->fonts.entries_sublabel, 1.0f);

   FUNC_2(VAR_0, &VAR_7);

   VAR_8 = FUNC_4();
   VAR_9 = FUNC_3(0);

   FUNC_14(&VAR_5, &VAR_4);

   VAR_3->entries_height = 0;

   for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
   {

      menu_entry_t VAR_12;
      ozone_node_t *VAR_13 = ((void*)0);
      const char *VAR_14 = ((void*)0);

      FUNC_7(&VAR_12);
      VAR_12.path_enabled = 0;
      VAR_12.label_enabled = 0;
      VAR_12.rich_label_enabled = 0;
      VAR_12.value_enabled = 0;
      FUNC_5(&VAR_12, 0, (unsigned)VAR_7, ((void*)0), 1);




      if (VAR_3->is_playlist && VAR_8 == 1)
      {
         menu_texture_item VAR_15 = FUNC_10(VAR_3, VAR_12.enum_idx, VAR_12.type, 0);
         VAR_3->empty_playlist = VAR_15 == VAR_3->icons_textures[VAR_2];
      }
      else
      {
         VAR_3->empty_playlist = 0;
      }


      VAR_13 = (ozone_node_t*)FUNC_0(VAR_9, VAR_7);

      if (!VAR_13)
         continue;

      VAR_13->height = VAR_3->dimensions.entry_height;
      VAR_13->wrap = 0;

      FUNC_6(&VAR_12, &VAR_14);

      if (!FUNC_13(VAR_14))
      {
         int VAR_16;
         char VAR_17[VAR_1];
         VAR_17[0] = '\0';

         VAR_13->height += VAR_3->dimensions.entry_spacing + 40;

         VAR_16 = VAR_5 -
            VAR_10 * 2 - VAR_3->dimensions.entry_icon_padding * 2;

         if (VAR_3->depth == 1)
            VAR_16 -= (unsigned) VAR_3->dimensions.sidebar_width;

         if (VAR_3->show_thumbnail_bar)
            VAR_16 -= VAR_3->dimensions.thumbnail_bar_width;

         FUNC_15(VAR_17, VAR_14, VAR_16 / VAR_3->sublabel_font_glyph_width, 0, 0);

         VAR_6 = FUNC_9(VAR_17);

         if (VAR_6 > 1)
         {
            VAR_13->height += (VAR_6 - 1) * VAR_11;
            VAR_13->wrap = 1;
         }
      }

      VAR_13->position_y = VAR_3->entries_height;

      VAR_3->entries_height += VAR_13->height;
   }


   VAR_3->selection = FUNC_8();
   FUNC_12(VAR_3, 0, (ozone_node_t*) FUNC_0(VAR_9, VAR_3->selection));
}
