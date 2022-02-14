
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;


typedef int video_frame_info_t ;
typedef int value_buf ;
struct TYPE_27__ {int checked; } ;
typedef TYPE_6__ menu_entry_t ;
struct TYPE_28__ {unsigned int y; int has_icon; size_t icon_texture_index; float entry_height; } ;
typedef TYPE_7__ materialui_node_t ;
struct TYPE_26__ {int list_text; int list_text_highlighted; int list_switch_on; int list_hint_text; int list_hint_text_highlighted; int list_icon; } ;
struct TYPE_24__ {float font_height; unsigned int glyph_width; int font; } ;
struct TYPE_22__ {int glyph_width; int font; } ;
struct TYPE_25__ {TYPE_3__ list; TYPE_1__ hint; } ;
struct TYPE_21__ {int selected; char* s; size_t len; char const* str; } ;
struct TYPE_20__ {int selected; unsigned int field_width; char const* src_str; char* dst_str; int dst_str_len; int font; } ;
struct TYPE_23__ {uintptr_t* list; } ;
struct TYPE_29__ {unsigned int scroll_y; int margin; int landscape_entry_margin; float icon_size; float dip_base_unit_size; unsigned int ticker_x_offset; unsigned int ticker_str_width; TYPE_5__ colors; TYPE_4__ font_data; TYPE_14__ ticker; TYPE_13__ ticker_smooth; scalar_t__ use_smooth_ticker; scalar_t__ nav_bar_layout_width; TYPE_2__ textures; } ;
typedef TYPE_8__ materialui_handle_t ;
typedef int label_buf ;
typedef enum msg_file_type { ____Placeholder_msg_file_type } msg_file_type ;
typedef enum materialui_entry_value_type { ____Placeholder_materialui_entry_value_type } materialui_entry_value_type ;




 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;



 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,float,uintptr_t,int,int,unsigned int,unsigned int,int ,int,int ) ;
 int FUNC_1 (TYPE_8__*,char const*,int ,unsigned int,int) ;
 int FUNC_2 (TYPE_8__*,int *,int,unsigned int,unsigned int,int,int) ;
 int FUNC_3 (TYPE_14__*) ;
 int FUNC_4 (TYPE_13__*) ;
 int FUNC_5 (int ,char*,int,int,unsigned int,unsigned int,int ,int ,float,int,int ,int) ;
 int FUNC_6 (TYPE_6__*,char const**) ;
 int FUNC_7 (TYPE_6__*,char const**) ;
 unsigned int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*,char const**) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char const*) ;
 size_t FUNC_13 (char const*) ;
 int FUNC_14 (char*,char const*,int,int,int ) ;

__attribute__((used)) static void FUNC_15(
      materialui_handle_t *VAR_10,
      video_frame_info_t *VAR_11,
      materialui_node_t *VAR_12,
      menu_entry_t *VAR_13,
      bool VAR_14,
      bool VAR_15,
      unsigned VAR_16,
      unsigned VAR_17, unsigned VAR_18,
      int VAR_19)
{
   const char *VAR_20 = ((void*)0);
   const char *VAR_21 = ((void*)0);
   const char *VAR_22 = ((void*)0);
   unsigned VAR_23 = 0;
   enum materialui_entry_value_type VAR_24 = VAR_4;
   unsigned VAR_25 = 0;
   enum msg_file_type VAR_26 = VAR_0;
   int VAR_27 = VAR_16 - VAR_10->scroll_y + VAR_12->y;
   int VAR_28 = (int)VAR_10->margin + (int)VAR_10->landscape_entry_margin;
   int VAR_29 =
         (int)VAR_17 - (int)(VAR_10->margin * 2) - (int)(VAR_10->landscape_entry_margin * 2) - (int)VAR_10->nav_bar_layout_width;
   int VAR_30 = 0;
   int VAR_31 = 0;
   uintptr_t VAR_32 = 0;
   bool VAR_33 = (VAR_19 != 0);




   if (VAR_10->use_smooth_ticker)
   {
      VAR_10->ticker_smooth.font = VAR_10->font_data.list.font;
      VAR_10->ticker_smooth.selected = VAR_14;
   }
   else
      VAR_10->ticker.selected = VAR_14;


   FUNC_6(VAR_13, &VAR_21);
   FUNC_9(VAR_13, &VAR_20);
   FUNC_7(VAR_13, &VAR_22);
   VAR_23 = FUNC_8(VAR_13);

   VAR_26 = FUNC_11(FUNC_10(VAR_20));
   VAR_24 = FUNC_1(
         VAR_10, VAR_20, VAR_13->checked, VAR_23, VAR_26);




   if (VAR_12->has_icon)
   {
      if (VAR_13->checked &&
          ((VAR_23 >= VAR_1) &&
           (VAR_23 <= VAR_2)))
         VAR_12->has_icon = 0;
      else
         VAR_32 = VAR_10->textures.list[VAR_12->icon_texture_index];
   }
   else
   {
      switch (VAR_26)
      {
         case 133:
            VAR_32 = VAR_10->textures.list[VAR_5];
            break;
         case 132:
            VAR_32 = VAR_10->textures.list[VAR_7];
            break;
         default:
            break;
      }
   }

   if (VAR_32)
   {
      FUNC_0(VAR_11,
            VAR_10->icon_size,
            (uintptr_t)VAR_32,
            VAR_19 + (int)VAR_10->landscape_entry_margin,
            VAR_27 + (VAR_12->entry_height / 2.0f) - (VAR_10->icon_size / 2.0f),
            VAR_17,
            VAR_18,
            0,
            1,
            VAR_10->colors.list_icon);

      VAR_28 += VAR_10->icon_size;
      VAR_29 -= VAR_10->icon_size;
   }




   if (!FUNC_12(VAR_22))
   {
      int VAR_34 =
            VAR_27 + (int)(VAR_10->dip_base_unit_size / 5.0f) +
                  (int)VAR_10->font_data.list.font_height;
      char VAR_35[VAR_3];

      VAR_35[0] = '\0';


      FUNC_14(VAR_35, VAR_22,
            (int)(VAR_29 / VAR_10->font_data.hint.glyph_width),
            1, 0);







      FUNC_5(VAR_10->font_data.hint.font, VAR_35,
            VAR_19 + VAR_28,
            VAR_34,
            VAR_17, VAR_18,
            (VAR_14 || VAR_15) ?
                  VAR_10->colors.list_hint_text_highlighted : VAR_10->colors.list_hint_text,
            VAR_8, 1.0f, 0, 0, VAR_33 || (VAR_34 < 0));



      VAR_30 = VAR_27 + (int)(VAR_10->dip_base_unit_size / 5.0f);
      VAR_31 = VAR_27 + (int)((VAR_10->dip_base_unit_size / 6.0f) - (VAR_10->icon_size / 2.0f));
   }
   else
   {






      VAR_30 = VAR_27 + (int)((VAR_12->entry_height / 2.0f) + (VAR_10->font_data.list.font_height / 5.0f));
      VAR_31 = VAR_27 + (int)((VAR_12->entry_height / 2.0f) - (VAR_10->icon_size / 2.0f));
   }


   switch (VAR_24)
   {
      case 128:
         {
            int VAR_36 = 0;
            unsigned VAR_37 = (VAR_29 / 2) - VAR_10->margin;
            char VAR_38[255];

            VAR_38[0] = '\0';


            if (VAR_10->use_smooth_ticker)
            {
               VAR_10->ticker_smooth.field_width = VAR_37;
               VAR_10->ticker_smooth.src_str = VAR_20;
               VAR_10->ticker_smooth.dst_str = VAR_38;
               VAR_10->ticker_smooth.dst_str_len = sizeof(VAR_38);

               if (FUNC_4(&VAR_10->ticker_smooth))
               {


                  VAR_25 = VAR_37;



                  VAR_36 =
                        (int)(VAR_10->ticker_x_offset + VAR_10->ticker_str_width) -
                              (int)VAR_37;
               }



               else
                  VAR_25 = VAR_10->ticker_str_width;
            }
            else
            {
               size_t VAR_39 = FUNC_13(VAR_20);
               size_t VAR_40 =
                     (size_t)(VAR_37 / VAR_10->font_data.list.glyph_width);


               VAR_40 = (VAR_40 > 0) ?
                     VAR_40 - 1 : VAR_40;
               VAR_39 = (VAR_39 > VAR_40) ?
                     VAR_40 : VAR_39;

               VAR_10->ticker.s = VAR_38;
               VAR_10->ticker.len = VAR_39;
               VAR_10->ticker.str = VAR_20;

               FUNC_3(&VAR_10->ticker);







               VAR_25 = (VAR_39 + 1) * VAR_10->font_data.list.glyph_width;
            }


            FUNC_5(VAR_10->font_data.list.font, VAR_38,
                  VAR_19 + VAR_36 + (int)VAR_17 - (int)VAR_10->margin - (int)VAR_10->landscape_entry_margin - (int)VAR_10->nav_bar_layout_width,
                  VAR_30,
                  VAR_17, VAR_18,
                  (VAR_14 || VAR_15) ?
                        VAR_10->colors.list_text_highlighted : VAR_10->colors.list_text,
                  VAR_9, 1.0f, 0, 0, VAR_33);
         }
         break;
      case 129:
         {
            FUNC_2(
                  VAR_10, VAR_11, VAR_31, VAR_17, VAR_18, VAR_19, 1);
            VAR_25 = VAR_10->icon_size;
         }
         break;
      case 130:
         {
            FUNC_2(
                  VAR_10, VAR_11, VAR_31, VAR_17, VAR_18, VAR_19, 0);
            VAR_25 = VAR_10->icon_size;
         }
         break;
      case 131:
         {

            if (VAR_10->textures.list[VAR_6])
               FUNC_0(VAR_11,
                     VAR_10->icon_size,
                     VAR_10->textures.list[VAR_6],
                     VAR_19 + (int)VAR_17 - (int)VAR_10->margin - (int)VAR_10->landscape_entry_margin - (int)VAR_10->nav_bar_layout_width - (int)VAR_10->icon_size,
                     VAR_31,
                     VAR_17,
                     VAR_18,
                     0,
                     1,
                     VAR_10->colors.list_switch_on);

            VAR_25 = VAR_10->icon_size;
         }
         break;
      default:
         VAR_25 = 0;
         break;
   }


   if (!FUNC_12(VAR_21))
   {
      int VAR_41 = VAR_29;
      char VAR_42[255];

      VAR_42[0] = '\0';




      VAR_41 = (VAR_25 > 0) ?
            VAR_41 - (int)(VAR_25 + VAR_10->margin) : VAR_41;

      if (VAR_41 > 0)
      {

         if (VAR_10->use_smooth_ticker)
         {

            VAR_10->ticker_smooth.field_width = (unsigned)VAR_41;
            VAR_10->ticker_smooth.src_str = VAR_21;
            VAR_10->ticker_smooth.dst_str = VAR_42;
            VAR_10->ticker_smooth.dst_str_len = sizeof(VAR_42);

            FUNC_4(&VAR_10->ticker_smooth);
         }
         else
         {

            VAR_10->ticker.s = VAR_42;
            VAR_10->ticker.len = (size_t)(VAR_41 / VAR_10->font_data.list.glyph_width);
            VAR_10->ticker.str = VAR_21;

            FUNC_3(&VAR_10->ticker);
         }


         FUNC_5(VAR_10->font_data.list.font, VAR_42,
               VAR_19 + (int)VAR_10->ticker_x_offset + VAR_28,
               VAR_30,
               VAR_17, VAR_18,
               (VAR_14 || VAR_15) ?
                     VAR_10->colors.list_text_highlighted : VAR_10->colors.list_text,
               VAR_8, 1.0f, 0, 0, VAR_33);
      }
   }
}
