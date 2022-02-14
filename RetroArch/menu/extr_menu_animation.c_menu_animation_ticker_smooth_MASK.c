
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* src_str; int dst_str_len; int field_width; int glyph_width; char* dst_str; unsigned int* dst_str_width; char* spacer; int type_enum; scalar_t__* x_offset; int idx; int font_scale; int font; int selected; } ;
typedef TYPE_1__ menu_animation_ctx_ticker_smooth_t ;




 int FUNC_0 (char*,char*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,char*,int) ;
 scalar_t__ FUNC_1 (size_t,int) ;
 int FUNC_2 (int ,char const*,int,int ) ;
 int FUNC_3 (unsigned int*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,unsigned int*,size_t,unsigned int,int,unsigned int*,unsigned int*,scalar_t__*,unsigned int*) ;
 int FUNC_6 (int ,unsigned int*,size_t,unsigned int*,size_t,unsigned int,unsigned int,int,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,scalar_t__*,unsigned int*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int) ;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_9 (char*,int,char*,unsigned int) ;
 size_t FUNC_10 (char*) ;
 char* FUNC_11 (char const*,unsigned int) ;

bool FUNC_12(menu_animation_ctx_ticker_smooth_t *VAR_2)
{
   size_t VAR_3;
   size_t VAR_4 = 0;
   size_t VAR_5 = 0;
   unsigned VAR_6 = 0;
   unsigned VAR_7 = 0;
   unsigned *VAR_8 = ((void*)0);
   unsigned *VAR_9 = ((void*)0);
   const char *VAR_10 = ((void*)0);
   bool VAR_11 = 0;
   bool VAR_12 = 0;


   if (FUNC_7(VAR_2->src_str) ||
       (VAR_2->dst_str_len < 1) ||
       (VAR_2->field_width < 1) ||
       (!VAR_2->font && (VAR_2->glyph_width < 1)))
      goto end;



   if (!VAR_2->font)
      return FUNC_4(VAR_2);



   VAR_4 = FUNC_10(VAR_2->src_str);
   if (VAR_4 < 1)
      goto end;

   VAR_8 = (unsigned*)FUNC_1(VAR_4, sizeof(unsigned));
   if (!VAR_8)
      goto end;

   VAR_10 = VAR_2->src_str;
   for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
   {
      int VAR_13 = FUNC_2(
            VAR_2->font, VAR_10, 1, VAR_2->font_scale);

      if (VAR_13 < 0)
         goto end;

      VAR_8[VAR_3] = (unsigned)VAR_13;
      VAR_6 += (unsigned)VAR_13;

      VAR_10 = FUNC_11(VAR_10, 1);
   }



   if (VAR_6 <= VAR_2->field_width)
   {
      FUNC_9(VAR_2->dst_str, VAR_2->dst_str_len, VAR_2->src_str, VAR_4);

      if (VAR_2->dst_str_width)
         *VAR_2->dst_str_width = VAR_6;
      *VAR_2->x_offset = 0;
      VAR_11 = 1;
      goto end;
   }



   if (!VAR_2->selected)
   {
      unsigned VAR_14;
      unsigned VAR_15 = 0;
      unsigned VAR_16 = 0;
      int VAR_17 =
            FUNC_2(VAR_2->font, ".", 1, VAR_2->font_scale);


      if (VAR_17 < 0)
         goto end;

      if (VAR_2->field_width < (3 * VAR_17))
         goto end;


      VAR_14 = VAR_2->field_width - (3 * VAR_17);
      while (1)
      {
         VAR_15 += VAR_8[VAR_16];

         if (VAR_15 > VAR_14)
         {


            VAR_15 -= VAR_8[VAR_16];
            break;
         }

         VAR_16++;
      }


      FUNC_9(VAR_2->dst_str, VAR_2->dst_str_len, VAR_2->src_str, VAR_16);
      FUNC_8(VAR_2->dst_str, "...", VAR_2->dst_str_len);

      if (VAR_2->dst_str_width)
         *VAR_2->dst_str_width = VAR_15 + (3 * VAR_17);
      *VAR_2->x_offset = 0;
      VAR_11 = 1;
      goto end;
   }





   if (!VAR_2->spacer)
      VAR_2->spacer = VAR_1;



   VAR_5 = FUNC_10(VAR_2->spacer);
   if (VAR_5 < 1)
      goto end;

   VAR_9 = (unsigned*)FUNC_1(VAR_5, sizeof(unsigned));
   if (!VAR_9)
      goto end;

   VAR_10 = VAR_2->spacer;
   for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++)
   {
      int VAR_18 = FUNC_2(
            VAR_2->font, VAR_10, 1, VAR_2->font_scale);

      if (VAR_18 < 0)
         goto end;

      VAR_9[VAR_3] = (unsigned)VAR_18;
      VAR_7 += (unsigned)VAR_18;

      VAR_10 = FUNC_11(VAR_10, 1);
   }


   switch (VAR_2->type_enum)
   {
      case 128:
      {
         unsigned VAR_19 = 0;
         unsigned VAR_20 = 0;
         unsigned VAR_21 = 0;
         unsigned VAR_22 = 0;
         unsigned VAR_23 = 0;
         unsigned VAR_24 = 0;

         FUNC_6(
               VAR_2->idx,
               VAR_8, VAR_4,
               VAR_9, VAR_5,
               VAR_6, VAR_7, VAR_2->field_width,
               &VAR_19, &VAR_20,
               &VAR_21, &VAR_22,
               &VAR_23, &VAR_24,
               VAR_2->x_offset, VAR_2->dst_str_width);

         FUNC_0(
               VAR_2->src_str, VAR_2->spacer,
               VAR_19, VAR_20,
               VAR_21, VAR_22,
               VAR_23, VAR_24,
               VAR_2->dst_str, VAR_2->dst_str_len);

         break;
      }
      case 129:
      default:
      {
         unsigned VAR_25 = 0;
         unsigned VAR_26 = 0;

         VAR_2->dst_str[0] = '\0';

         FUNC_5(
               VAR_2->idx,
               VAR_8, VAR_4, VAR_6, VAR_2->field_width,
               &VAR_25, &VAR_26, VAR_2->x_offset, VAR_2->dst_str_width);


         if (VAR_26 > 0)
         {
            FUNC_9(
                  VAR_2->dst_str, VAR_2->dst_str_len,
                  FUNC_11(VAR_2->src_str, VAR_25), VAR_26);
         }

         break;
      }
   }

   VAR_11 = 1;
   VAR_12 = 1;
   VAR_0 = 1;

end:

   if (VAR_8)
   {
      FUNC_3(VAR_8);
      VAR_8 = ((void*)0);
   }

   if (VAR_9)
   {
      FUNC_3(VAR_9);
      VAR_9 = ((void*)0);
   }

   if (!VAR_11)
   {
      *VAR_2->x_offset = 0;

      if (VAR_2->dst_str_len > 0)
         VAR_2->dst_str[0] = '\0';
   }

   return VAR_12;
}
