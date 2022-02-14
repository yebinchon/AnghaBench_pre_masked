
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct font_params {float x; float y; float scale; float drop_mod; float drop_x; float drop_y; int color; int full_screen; int text_align; float drop_alpha; } ;
typedef int font_data_t ;
typedef enum text_alignment { ____Placeholder_text_alignment } text_alignment ;


 int FUNC_0 (char const*,struct font_params*,void*) ;

void FUNC_1(
      const font_data_t *VAR_0, const char *VAR_1,
      float VAR_2, float VAR_3, int VAR_4, int VAR_5,
      uint32_t VAR_6, enum text_alignment VAR_7,
      float VAR_8, bool VAR_9, float VAR_10,
      bool VAR_11)
{
   struct font_params VAR_12;

   if ((VAR_6 & 0x000000FF) == 0)
      return;


   if (!VAR_11 &&
           ((VAR_2 < -64 || VAR_2 > VAR_4 + 64)
         || (VAR_3 < -64 || VAR_3 > VAR_5 + 64))
      )
      return;

   VAR_12.x = VAR_2 / VAR_4;
   VAR_12.y = 1.0f - VAR_3 / VAR_5;
   VAR_12.scale = VAR_8;
   VAR_12.drop_mod = 0.0f;
   VAR_12.drop_x = 0.0f;
   VAR_12.drop_y = 0.0f;
   VAR_12.color = VAR_6;
   VAR_12.full_screen = 1;
   VAR_12.text_align = VAR_7;

   if (VAR_9)
   {
      VAR_12.drop_x = VAR_10;
      VAR_12.drop_y = -VAR_10;
      VAR_12.drop_alpha = 0.35f;
   }

   FUNC_0(VAR_1, &VAR_12, (void*)VAR_0);
}
