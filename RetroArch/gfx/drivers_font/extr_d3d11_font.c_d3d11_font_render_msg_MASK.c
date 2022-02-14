
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int width; unsigned int height; float font_msg_pos_x; float font_msg_pos_y; int font_msg_color_r; int font_msg_color_g; int font_msg_color_b; } ;
typedef TYPE_1__ video_frame_info_t ;
struct font_params {float x; float y; float scale; int text_align; int drop_x; int drop_y; float drop_mod; float drop_alpha; int color; } ;
typedef enum text_alignment { ____Placeholder_text_alignment } text_alignment ;
typedef int d3d11_font_t ;


 unsigned int FUNC_0 (unsigned int,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*,int *,char const*,float,unsigned int,float,float,int) ;

__attribute__((used)) static void FUNC_6(
      video_frame_info_t* VAR_1, void* VAR_2,
      const char* VAR_3, const struct font_params *VAR_4)
{
   float VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
   int VAR_10, VAR_11;
   enum text_alignment VAR_12;
   unsigned VAR_13, VAR_14, VAR_15, VAR_16, VAR_17,
                             VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
   d3d11_font_t* VAR_23 = (d3d11_font_t*)VAR_2;
   unsigned VAR_24 = VAR_1->width;
   unsigned VAR_25 = VAR_1->height;

   if (!VAR_23 || !VAR_3 || !*VAR_3)
      return;

   if (VAR_4)
   {
      VAR_5 = VAR_4->x;
      VAR_6 = VAR_4->y;
      VAR_7 = VAR_4->scale;
      VAR_12 = VAR_4->text_align;
      VAR_10 = VAR_4->drop_x;
      VAR_11 = VAR_4->drop_y;
      VAR_8 = VAR_4->drop_mod;
      VAR_9 = VAR_4->drop_alpha;

      VAR_15 = FUNC_4(VAR_4->color);
      VAR_16 = FUNC_3(VAR_4->color);
      VAR_17 = FUNC_2(VAR_4->color);
      VAR_18 = FUNC_1(VAR_4->color);

      VAR_13 = FUNC_0(VAR_15, VAR_16, VAR_17, VAR_18);
   }
   else
   {
      VAR_5 = VAR_1->font_msg_pos_x;
      VAR_6 = VAR_1->font_msg_pos_y;
      VAR_7 = 1.0f;
      VAR_12 = VAR_0;

      VAR_15 = (VAR_1->font_msg_color_r * 255);
      VAR_16 = (VAR_1->font_msg_color_g * 255);
      VAR_17 = (VAR_1->font_msg_color_b * 255);
      VAR_18 = 255;
      VAR_13 = FUNC_0(VAR_15, VAR_16, VAR_17, VAR_18);

      VAR_10 = -2;
      VAR_11 = -2;
      VAR_8 = 0.3f;
      VAR_9 = 1.0f;
   }

   if (VAR_10 || VAR_11)
   {
      VAR_19 = VAR_15 * VAR_8;
      VAR_20 = VAR_16 * VAR_8;
      VAR_21 = VAR_17 * VAR_8;
      VAR_22 = VAR_18 * VAR_9;
      VAR_14 = FUNC_0(VAR_19, VAR_20, VAR_21, VAR_22);

      FUNC_5(
            VAR_1, VAR_23, VAR_3, VAR_7, VAR_14,
            VAR_5 + VAR_7 * VAR_10 / VAR_24,
            VAR_6 + VAR_7 * VAR_11 / VAR_25, VAR_12);
   }

   FUNC_5(VAR_1, VAR_23, VAR_3, VAR_7,
         VAR_13, VAR_5, VAR_6, VAR_12);
}
