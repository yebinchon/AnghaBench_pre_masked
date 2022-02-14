
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int video_frame_info_t ;
typedef int menu_entry_t ;
struct TYPE_12__ {int secondary; int primary; } ;
struct TYPE_16__ {float y; TYPE_1__ thumbnails; } ;
typedef TYPE_5__ materialui_node_t ;
struct TYPE_15__ {int divider; int list_text; int list_text_highlighted; } ;
struct TYPE_13__ {int glyph_width; scalar_t__ font_height; int font; } ;
struct TYPE_14__ {TYPE_2__ list; } ;
struct TYPE_19__ {int selected; char* s; size_t len; char const* str; } ;
struct TYPE_18__ {int selected; unsigned int field_width; char const* src_str; char* dst_str; int dst_str_len; int font; } ;
struct TYPE_17__ {int margin; int landscape_entry_margin; float scroll_y; int ticker_str_width; TYPE_4__ colors; int entry_divider_width; TYPE_3__ font_data; scalar_t__ dip_base_unit_size; scalar_t__ thumbnail_height_max; scalar_t__ ticker_x_offset; TYPE_8__ ticker; TYPE_7__ ticker_smooth; scalar_t__ use_smooth_ticker; scalar_t__ thumbnail_width_max; scalar_t__ nav_bar_layout_width; } ;
typedef TYPE_6__ materialui_handle_t ;
typedef int label_buf ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,int *,int *,float,float,unsigned int,unsigned int,float) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (int *,float,float,unsigned int,int ,unsigned int,unsigned int,int ) ;
 int FUNC_4 (int ,char*,float,float,unsigned int,unsigned int,int ,int ,float,int,int ,int) ;
 int FUNC_5 (int *,char const**) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(
      materialui_handle_t *VAR_1,
      video_frame_info_t *VAR_2,
      materialui_node_t *VAR_3,
      menu_entry_t *VAR_4,
      bool VAR_5,
      bool VAR_6,
      unsigned VAR_7,
      unsigned VAR_8, unsigned VAR_9,
      int VAR_10)
{
   const char *VAR_11 = ((void*)0);
   int VAR_12 =
         (int)VAR_8 - (int)(VAR_1->margin * 2) -
         (int)(VAR_1->landscape_entry_margin * 2) - (int)VAR_1->nav_bar_layout_width;
   float VAR_13 = (float)VAR_7 - VAR_1->scroll_y + VAR_3->y;
   float VAR_14;



   if (VAR_1->use_smooth_ticker)
   {
      VAR_1->ticker_smooth.font = VAR_1->font_data.list.font;
      VAR_1->ticker_smooth.selected = VAR_5;
   }
   else
      VAR_1->ticker.selected = VAR_5;


   FUNC_5(VAR_4, &VAR_11);




   VAR_14 =
         VAR_13 + ((float)VAR_1->dip_base_unit_size / 10.0f);


   FUNC_0(
         VAR_1,
         VAR_2,
         &VAR_3->thumbnails.primary,
         (float)(VAR_10 + (int)VAR_1->margin + (int)VAR_1->landscape_entry_margin),
         VAR_14,
         VAR_8,
         VAR_9,
         1.0f);


   FUNC_0(
         VAR_1,
         VAR_2,
         &VAR_3->thumbnails.secondary,
         (float)(VAR_10 + (int)VAR_8 - (int)VAR_1->margin - (int)VAR_1->landscape_entry_margin -
               (int)VAR_1->nav_bar_layout_width - (int)VAR_1->thumbnail_width_max),
         VAR_14,
         VAR_8,
         VAR_9,
         1.0f);


   if (!FUNC_6(VAR_11))
   {
      float VAR_15 = 0.0f;


      float VAR_16 =
            VAR_14 + (float)VAR_1->thumbnail_height_max +
            ((float)VAR_1->dip_base_unit_size / 10.0f) +
            (9.0f * (float)VAR_1->font_data.list.font_height / 20.0f);

      bool VAR_17 = (VAR_10 != 0);
      char VAR_18[255];

      VAR_18[0] = '\0';

      if (VAR_12 > 0)
      {

         if (VAR_1->use_smooth_ticker)
         {

            VAR_1->ticker_smooth.field_width = (unsigned)VAR_12;
            VAR_1->ticker_smooth.src_str = VAR_11;
            VAR_1->ticker_smooth.dst_str = VAR_18;
            VAR_1->ticker_smooth.dst_str_len = sizeof(VAR_18);


            if (!FUNC_2(&VAR_1->ticker_smooth))
               VAR_15 = (float)(VAR_12 - VAR_1->ticker_str_width) / 2.0f;
         }
         else
         {

            VAR_1->ticker.s = VAR_18;
            VAR_1->ticker.len = (size_t)(VAR_12 / VAR_1->font_data.list.glyph_width);
            VAR_1->ticker.str = VAR_11;


            if (!FUNC_1(&VAR_1->ticker))
            {
               int VAR_19 = (int)(FUNC_7(VAR_18) *
                  VAR_1->font_data.list.glyph_width);

               VAR_15 = (float)(VAR_12 - VAR_19) / 2.0f;
            }
         }

         VAR_15 += (float)(VAR_10 + (int)VAR_1->ticker_x_offset +
               (int)VAR_1->margin + (int)VAR_1->landscape_entry_margin);


         FUNC_4(VAR_1->font_data.list.font, VAR_18,
               VAR_15,
               VAR_16,
               VAR_8, VAR_9,
               (VAR_5 || VAR_6) ?
                     VAR_1->colors.list_text_highlighted : VAR_1->colors.list_text,
               VAR_0, 1.0f, 0, 0, VAR_17);
      }
   }


   if (VAR_12 > 0)
      FUNC_3(
            VAR_2,
            (float)(VAR_10 + (int)VAR_1->margin + (int)VAR_1->landscape_entry_margin),
            VAR_14 + (float)VAR_1->thumbnail_height_max +
                  ((float)VAR_1->dip_base_unit_size / 10.0f) +
                  (float)VAR_1->font_data.list.font_height,
            (unsigned)VAR_12,
            VAR_1->entry_divider_width,
            VAR_8,
            VAR_9,
            VAR_1->colors.divider);
}
