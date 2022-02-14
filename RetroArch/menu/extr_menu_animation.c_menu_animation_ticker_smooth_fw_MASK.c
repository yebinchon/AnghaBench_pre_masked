
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int glyph_width; unsigned int field_width; char* dst_str; scalar_t__ dst_str_len; unsigned int* dst_str_width; int type_enum; scalar_t__* x_offset; scalar_t__ src_str; int idx; scalar_t__ spacer; int selected; } ;
typedef TYPE_1__ menu_animation_ctx_ticker_smooth_t ;




 int FUNC_0 (scalar_t__,scalar_t__,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,char*,scalar_t__) ;
 int FUNC_1 (int ,unsigned int,size_t,unsigned int,unsigned int,unsigned int*,unsigned int*,scalar_t__*) ;
 int FUNC_2 (int ,unsigned int,size_t,unsigned int,size_t,unsigned int,unsigned int,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,scalar_t__*) ;
 int FUNC_3 (char*,char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char*,scalar_t__,scalar_t__,unsigned int) ;
 size_t FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,unsigned int) ;

bool FUNC_7(menu_animation_ctx_ticker_smooth_t *VAR_2)
{
   size_t VAR_3 = 0;
   size_t VAR_4 = 0;
   unsigned VAR_5 = VAR_2->glyph_width;
   unsigned VAR_6 = 0;
   unsigned VAR_7 = 0;
   bool VAR_8 = 0;
   bool VAR_9 = 0;






   VAR_3 = FUNC_5(VAR_2->src_str);
   if (VAR_3 < 1)
      goto end;

   VAR_6 = VAR_3 * VAR_5;



   if (VAR_6 <= VAR_2->field_width)
   {
      FUNC_4(VAR_2->dst_str, VAR_2->dst_str_len, VAR_2->src_str, VAR_3);

      if (VAR_2->dst_str_width)
         *VAR_2->dst_str_width = VAR_6;
      *VAR_2->x_offset = 0;
      VAR_8 = 1;
      goto end;
   }



   if (!VAR_2->selected)
   {
      unsigned VAR_10 = 0;
      unsigned VAR_11 = 3;
      unsigned VAR_12 = VAR_11 * VAR_5;


      if (VAR_2->field_width < VAR_12)
         goto end;


      VAR_10 = (VAR_2->field_width - VAR_12) / VAR_5;


      FUNC_4(VAR_2->dst_str, VAR_2->dst_str_len, VAR_2->src_str, VAR_10);
      FUNC_3(VAR_2->dst_str, "...", VAR_2->dst_str_len);

      if (VAR_2->dst_str_width)
         *VAR_2->dst_str_width = (VAR_10 * VAR_5) + VAR_12;
      *VAR_2->x_offset = 0;
      VAR_8 = 1;
      goto end;
   }





   if (!VAR_2->spacer)
      VAR_2->spacer = VAR_1;


   VAR_4 = FUNC_5(VAR_2->spacer);
   if (VAR_4 < 1)
      goto end;

   VAR_7 = VAR_4 * VAR_5;


   switch (VAR_2->type_enum)
   {
      case 128:
      {
         unsigned VAR_13 = 0;
         unsigned VAR_14 = 0;
         unsigned VAR_15 = 0;
         unsigned VAR_16 = 0;
         unsigned VAR_17 = 0;
         unsigned VAR_18 = 0;

         FUNC_2(
               VAR_2->idx,
               VAR_6, VAR_3, VAR_7, VAR_4,
               VAR_5, VAR_2->field_width,
               &VAR_13, &VAR_14,
               &VAR_15, &VAR_16,
               &VAR_17, &VAR_18,
               VAR_2->x_offset);

         FUNC_0(
               VAR_2->src_str, VAR_2->spacer,
               VAR_13, VAR_14,
               VAR_15, VAR_16,
               VAR_17, VAR_18,
               VAR_2->dst_str, VAR_2->dst_str_len);

         if (VAR_2->dst_str_width)
            *VAR_2->dst_str_width = (VAR_14 + VAR_16 + VAR_18) * VAR_5;

         break;
      }
      case 129:
      default:
      {
         unsigned VAR_19 = 0;
         unsigned VAR_20 = 0;

         VAR_2->dst_str[0] = '\0';

         FUNC_1(
               VAR_2->idx,
               VAR_6, VAR_3, VAR_5, VAR_2->field_width,
               &VAR_19, &VAR_20, VAR_2->x_offset);


         if (VAR_20 > 0)
         {
            FUNC_4(
                  VAR_2->dst_str, VAR_2->dst_str_len,
                  FUNC_6(VAR_2->src_str, VAR_19), VAR_20);
         }

         if (VAR_2->dst_str_width)
            *VAR_2->dst_str_width = VAR_20 * VAR_5;

         break;
      }
   }

   VAR_8 = 1;
   VAR_9 = 1;
   VAR_0 = 1;

end:

   if (!VAR_8)
   {
      *VAR_2->x_offset = 0;

      if (VAR_2->dst_str_len > 0)
         VAR_2->dst_str[0] = '\0';
   }

   return VAR_9;
}
