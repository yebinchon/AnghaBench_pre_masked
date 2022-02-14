
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct string_list {size_t size; } ;
struct TYPE_3__ {char* src_str; int field_width; int field_height; char* dst_str; float* y_offset; char* top_fade_str; char* bottom_fade_str; float* top_fade_y_offset; float* bottom_fade_y_offset; float* top_fade_alpha; float* bottom_fade_alpha; int type_enum; int bottom_fade_str_len; int top_fade_str_len; scalar_t__ fade_enabled; int dst_str_len; int idx; int font_scale; int font; } ;
typedef TYPE_1__ menu_animation_ctx_line_ticker_smooth_t ;




 int FUNC_0 (int,size_t,struct string_list*,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,scalar_t__,size_t,size_t,size_t,size_t,size_t*,size_t*,float*,int*,size_t*,float*,float*,size_t*,float*,float*) ;
 int FUNC_6 (int ,scalar_t__,size_t,size_t,size_t,size_t,size_t*,size_t*,float*,int*,size_t*,float*,float*,size_t*,float*,float*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (struct string_list*) ;
 struct string_list* FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*,int ) ;
 int FUNC_11 (char*) ;
 int VAR_0 ;
 int FUNC_12 (char*,char*,int,int,int ) ;

bool FUNC_13(menu_animation_ctx_line_ticker_smooth_t *VAR_1)
{
   char *VAR_2 = ((void*)0);
   struct string_list *VAR_3 = ((void*)0);
   int VAR_4 = 0;
   int VAR_5 = 0;
   size_t VAR_6 = 0;
   size_t VAR_7 = 0;
   size_t VAR_8 = 0;
   size_t VAR_9 = 0;
   size_t VAR_10 = 0;
   size_t VAR_11 = 0;
   bool VAR_12 = 0;
   bool VAR_13 = 0;
   bool VAR_14 = 0;


   if (!VAR_1)
      return 0;

   if (!VAR_1->font ||
       FUNC_7(VAR_1->src_str) ||
       (VAR_1->field_width < 1) ||
       (VAR_1->field_height < 1))
      goto end;
   VAR_4 = FUNC_2(
         VAR_1->font, "a", 1, VAR_1->font_scale);

   if (VAR_4 < 0)
      goto end;


   VAR_5 = FUNC_1(
         VAR_1->font, VAR_1->font_scale);

   if (VAR_5 < 0)
      goto end;


   VAR_6 = (size_t)(VAR_1->field_width / VAR_4);
   VAR_7 = (size_t)(VAR_1->field_height / VAR_5);

   if ((VAR_6 < 1) || (VAR_7 < 1))
      goto end;


   VAR_2 = (char*)FUNC_4((FUNC_11(VAR_1->src_str) + 1) * sizeof(char));
   if (!VAR_2)
      goto end;

   FUNC_12(
         VAR_2,
         VAR_1->src_str,
         (int)VAR_6,
         1, 0);

   if (FUNC_7(VAR_2))
      goto end;


   VAR_3 = FUNC_9(VAR_2, "\n");
   if (!VAR_3)
      goto end;



   if (VAR_3->size <= VAR_7)
   {
      FUNC_10(VAR_1->dst_str, VAR_2, VAR_1->dst_str_len);
      *VAR_1->y_offset = 0.0f;


      if (VAR_1->fade_enabled)
      {
         if (VAR_1->top_fade_str_len > 0)
            VAR_1->top_fade_str[0] = '\0';

         if (VAR_1->bottom_fade_str_len > 0)
            VAR_1->bottom_fade_str[0] = '\0';

         *VAR_1->top_fade_y_offset = 0.0f;
         *VAR_1->bottom_fade_y_offset = 0.0f;

         *VAR_1->top_fade_alpha = 0.0f;
         *VAR_1->bottom_fade_alpha = 0.0f;
      }

      VAR_13 = 1;
      goto end;
   }



   switch (VAR_1->type_enum)
   {
      case 128:
      {
         FUNC_6(
               VAR_1->idx,
               VAR_1->fade_enabled,
               VAR_6, (size_t)VAR_5,
               VAR_7, VAR_3->size,
               &VAR_8, &VAR_9, VAR_1->y_offset,
               &VAR_12,
               &VAR_10, VAR_1->top_fade_y_offset, VAR_1->top_fade_alpha,
               &VAR_11, VAR_1->bottom_fade_y_offset, VAR_1->bottom_fade_alpha);

         break;
      }
      case 129:
      default:
      {
         FUNC_5(
               VAR_1->idx,
               VAR_1->fade_enabled,
               VAR_6, (size_t)VAR_5,
               VAR_7, VAR_3->size,
               &VAR_8, &VAR_9, VAR_1->y_offset,
               &VAR_12,
               &VAR_10, VAR_1->top_fade_y_offset, VAR_1->top_fade_alpha,
               &VAR_11, VAR_1->bottom_fade_y_offset, VAR_1->bottom_fade_alpha);

         break;
      }
   }


   FUNC_0(
         VAR_8, VAR_9, VAR_3,
         VAR_1->dst_str, VAR_1->dst_str_len);


   if (VAR_12)
   {



      FUNC_0(
            1, VAR_10, VAR_3,
            VAR_1->top_fade_str, VAR_1->top_fade_str_len);

      FUNC_0(
            1, VAR_11, VAR_3,
            VAR_1->bottom_fade_str, VAR_1->bottom_fade_str_len);
   }

   VAR_13 = 1;
   VAR_14 = 1;
   VAR_0 = 1;

end:

   if (VAR_2)
   {
      FUNC_3(VAR_2);
      VAR_2 = ((void*)0);
   }

   if (VAR_3)
   {
      FUNC_8(VAR_3);
      VAR_3 = ((void*)0);
   }

   if (!VAR_13)
   {
      if (VAR_1->dst_str_len > 0)
         VAR_1->dst_str[0] = '\0';

      if (VAR_1->fade_enabled)
      {
         if (VAR_1->top_fade_str_len > 0)
            VAR_1->top_fade_str[0] = '\0';

         if (VAR_1->bottom_fade_str_len > 0)
            VAR_1->bottom_fade_str[0] = '\0';

         *VAR_1->top_fade_alpha = 0.0f;
         *VAR_1->bottom_fade_alpha = 0.0f;
      }
   }

   return VAR_14;
}
