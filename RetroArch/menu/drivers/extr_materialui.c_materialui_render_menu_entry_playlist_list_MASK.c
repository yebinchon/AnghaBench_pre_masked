
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int video_frame_info_t ;
typedef int menu_entry_t ;
struct TYPE_20__ {int secondary; int primary; } ;
struct TYPE_21__ {unsigned int y; scalar_t__ entry_height; TYPE_6__ thumbnails; scalar_t__ text_height; } ;
typedef TYPE_7__ materialui_node_t ;
struct TYPE_16__ {int divider; int list_hint_text; int list_hint_text_highlighted; int list_text; int list_text_highlighted; } ;
struct TYPE_15__ {int glyph_width; int font; } ;
struct TYPE_17__ {int glyph_width; scalar_t__ font_height; int font; } ;
struct TYPE_18__ {TYPE_1__ hint; TYPE_3__ list; } ;
struct TYPE_14__ {int selected; char* s; size_t len; char const* str; } ;
struct TYPE_23__ {int selected; unsigned int field_width; char const* src_str; char* dst_str; int dst_str_len; int font; } ;
struct TYPE_19__ {scalar_t__ width; } ;
struct TYPE_22__ {unsigned int scroll_y; int margin; int landscape_entry_margin; scalar_t__ list_view_type; TYPE_2__ colors; int entry_divider_width; TYPE_4__ font_data; scalar_t__ ticker_x_offset; TYPE_10__ ticker; TYPE_9__ ticker_smooth; scalar_t__ use_smooth_ticker; scalar_t__ thumbnail_width_max; scalar_t__ nav_bar_layout_width; scalar_t__ secondary_thumbnail_enabled; TYPE_5__ scrollbar; scalar_t__ is_portrait; scalar_t__ thumbnail_height_max; } ;
typedef TYPE_8__ materialui_handle_t ;
typedef int label_buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_8__*,int *,int *,float,float,unsigned int,unsigned int,float) ;
 int FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (int *,float,int,unsigned int,int ,unsigned int,unsigned int,int ) ;
 int FUNC_4 (int ,char*,int,int,unsigned int,unsigned int,int ,int ,float,int,int ,int) ;
 int FUNC_5 (int *,char const**) ;
 int FUNC_6 (int *,char const**) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*,char const*,int,int,int ) ;

__attribute__((used)) static void FUNC_9(
      materialui_handle_t *VAR_5,
      video_frame_info_t *VAR_6,
      materialui_node_t *VAR_7,
      menu_entry_t *VAR_8,
      bool VAR_9,
      bool VAR_10,
      unsigned VAR_11,
      unsigned VAR_12, unsigned VAR_13,
      int VAR_14)
{
   const char *VAR_15 = ((void*)0);
   const char *VAR_16 = ((void*)0);
   int VAR_17 = VAR_11 - VAR_5->scroll_y + VAR_7->y;
   int VAR_18 = (int)VAR_5->margin + (int)VAR_5->landscape_entry_margin;
   int VAR_19 =
         (int)VAR_12 - (int)(VAR_5->margin * 2) - (int)(VAR_5->landscape_entry_margin * 2) - (int)VAR_5->nav_bar_layout_width;







   int VAR_20 =
         VAR_17 + ((float)(VAR_7->entry_height - VAR_7->text_height) / 2.0f) +
         (13.0f * (float)VAR_5->font_data.list.font_height / 20.0f);
   bool VAR_21 = (VAR_14 != 0);




   if (VAR_5->use_smooth_ticker)
   {
      VAR_5->ticker_smooth.font = VAR_5->font_data.list.font;
      VAR_5->ticker_smooth.selected = VAR_9;
   }
   else
      VAR_5->ticker.selected = VAR_9;


   FUNC_5(VAR_8, &VAR_15);
   FUNC_6(VAR_8, &VAR_16);





   if (VAR_5->list_view_type != VAR_1)
   {
      int VAR_22 = 0;
      float VAR_23 =
            (float)VAR_17 + ((float)VAR_7->entry_height / 2.0f) - ((float)VAR_5->thumbnail_height_max / 2.0f);






      if (VAR_5->is_portrait)
      {
         if (VAR_5->secondary_thumbnail_enabled)
            VAR_22 = (int)VAR_5->scrollbar.width;
      }






      else
         if (VAR_5->landscape_entry_margin < VAR_5->margin)
            VAR_22 = (int)(VAR_5->margin - VAR_5->landscape_entry_margin);


      FUNC_0(
            VAR_5,
            VAR_6,
            &VAR_7->thumbnails.primary,
            (float)(VAR_14 + VAR_22 + (int)VAR_5->landscape_entry_margin),
            VAR_23,
            VAR_12,
            VAR_13,
            1.0f);

      VAR_18 += VAR_5->thumbnail_width_max + VAR_22;
      VAR_19 -= VAR_5->thumbnail_width_max + VAR_22;


      if (VAR_5->secondary_thumbnail_enabled)
      {
         FUNC_0(
               VAR_5,
               VAR_6,
               &VAR_7->thumbnails.secondary,
               (float)(VAR_14 + (int)VAR_12 - VAR_22 - (int)VAR_5->landscape_entry_margin -
                     (int)VAR_5->nav_bar_layout_width - (int)VAR_5->thumbnail_width_max),
               VAR_23,
               VAR_12,
               VAR_13,
               1.0f);

         VAR_19 -= VAR_5->thumbnail_width_max + VAR_22;
      }





      else if (VAR_5->landscape_entry_margin > 0)
         VAR_19 += (VAR_5->margin > VAR_5->landscape_entry_margin) ?
               (int)VAR_5->landscape_entry_margin : (int)VAR_5->margin;
   }


   if (!FUNC_7(VAR_15))
   {
      char VAR_24[255];

      VAR_24[0] = '\0';

      if (VAR_19 > 0)
      {

         if (VAR_5->use_smooth_ticker)
         {

            VAR_5->ticker_smooth.field_width = (unsigned)VAR_19;
            VAR_5->ticker_smooth.src_str = VAR_15;
            VAR_5->ticker_smooth.dst_str = VAR_24;
            VAR_5->ticker_smooth.dst_str_len = sizeof(VAR_24);

            FUNC_2(&VAR_5->ticker_smooth);
         }
         else
         {

            VAR_5->ticker.s = VAR_24;
            VAR_5->ticker.len = (size_t)(VAR_19 / VAR_5->font_data.list.glyph_width);
            VAR_5->ticker.str = VAR_15;

            FUNC_1(&VAR_5->ticker);
         }


         FUNC_4(VAR_5->font_data.list.font, VAR_24,
               VAR_14 + (int)VAR_5->ticker_x_offset + VAR_18,
               VAR_20,
               VAR_12, VAR_13,
               (VAR_9 || VAR_10) ?
                     VAR_5->colors.list_text_highlighted : VAR_5->colors.list_text,
               VAR_4, 1.0f, 0, 0, VAR_21);
      }
   }


   if (!FUNC_7(VAR_16))
   {
      int VAR_25 = VAR_20 + (int)VAR_5->font_data.list.font_height;
      char VAR_26[VAR_0];

      VAR_26[0] = '\0';


      FUNC_8(VAR_26, VAR_16,
            (int)(VAR_19 / VAR_5->font_data.hint.glyph_width),
            1, 0);







      FUNC_4(VAR_5->font_data.hint.font, VAR_26,
            VAR_14 + VAR_18,
            VAR_25,
            VAR_12, VAR_13,
            (VAR_9 || VAR_10) ?
                  VAR_5->colors.list_hint_text_highlighted : VAR_5->colors.list_hint_text,
            VAR_4, 1.0f, 0, 0, VAR_21 || (VAR_25 < 0));
   }
   if ((VAR_5->list_view_type == VAR_3) ||
       (VAR_5->list_view_type == VAR_2))
   {
      if (VAR_19 > 0)
         FUNC_3(
               VAR_6,
               (float)(VAR_14 + VAR_18),
               VAR_17 + (float)VAR_7->entry_height,
               (unsigned)VAR_19,
               VAR_5->entry_divider_width,
               VAR_12,
               VAR_13,
               VAR_5->colors.divider);
   }
}
