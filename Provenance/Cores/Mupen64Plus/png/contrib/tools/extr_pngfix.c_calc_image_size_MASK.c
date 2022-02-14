
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int udigit ;
struct file {int bit_depth; int color_type; int width; int height; scalar_t__ compression_method; scalar_t__ filter_method; int interlace_method; int image_digits; int image_bytes; } ;
typedef int png_uint_32 ;
typedef int png_uint_16 ;




 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct file*,char*) ;
 int FUNC_4 (int *,int,int) ;
 void* FUNC_5 (int ,int,int *,int,int) ;
 int FUNC_6 (int *,int ,int *,int ,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int,int) ;

__attribute__((used)) static int
FUNC_9(struct file *VAR_0)



{
   png_uint_16 VAR_1 = VAR_0->bit_depth;

   switch (VAR_0->color_type)
   {
      default:
         FUNC_3(VAR_0, "IHDR: colour type");

      invalid_bit_depth:
         FUNC_3(VAR_0, "IHDR: bit depth");

      case 0:
         if (VAR_1 != 1 && VAR_1 != 2 && VAR_1 != 4 && VAR_1 != 8 && VAR_1 != 16)
            goto invalid_bit_depth;
         break;

      case 3:
         if (VAR_1 != 1 && VAR_1 != 2 && VAR_1 != 4 && VAR_1 != 8)
            goto invalid_bit_depth;
         break;

      case 2:
         if (VAR_1 != 8 && VAR_1 != 16)
            goto invalid_bit_depth;

         VAR_1 = (png_uint_16)(VAR_1 * 3);
         break;

      case 4:
         if (VAR_1 != 8 && VAR_1 != 16)
            goto invalid_bit_depth;

         VAR_1 = (png_uint_16)(VAR_1 * 2);
         break;

      case 6:
         if (VAR_1 != 8 && VAR_1 != 16)
            goto invalid_bit_depth;

         VAR_1 = (png_uint_16)(VAR_1 * 4);
         break;
   }

   if (VAR_0->width < 1 || VAR_0->width > 0x7fffffff)
      FUNC_3(VAR_0, "IHDR: width");

   else if (VAR_0->height < 1 || VAR_0->height > 0x7fffffff)
      FUNC_3(VAR_0, "IHDR: height");

   else if (VAR_0->compression_method != 0)
      FUNC_3(VAR_0, "IHDR: compression method");

   else if (VAR_0->filter_method != 0)
      FUNC_3(VAR_0, "IHDR: filter method");

   else switch (VAR_0->interlace_method)
   {
      case 129:



         {
            int VAR_2;
            int VAR_3 = 0;
            udigit VAR_4[2], VAR_5[3];

            for (VAR_2=0; VAR_2<=6; ++VAR_2)
            {
               png_uint_32 VAR_6 = FUNC_0(VAR_0->width, VAR_2);

               if (VAR_6 > 0)
               {
                  int VAR_7;


                  VAR_7 = FUNC_6(VAR_5, FUNC_7(VAR_5, 7),
                     VAR_4, FUNC_7(VAR_4, VAR_6), VAR_1);
                  VAR_7 = FUNC_8(VAR_5, VAR_7, 3);
                  VAR_7 = FUNC_4(VAR_5, VAR_7, 1);



                  VAR_3 = FUNC_5(VAR_0->image_bytes, VAR_3,
                     VAR_5, VAR_7,
                     FUNC_1(VAR_0->height, VAR_2));
               }
            }

            VAR_0->image_digits = VAR_3;
         }
         break;

      case 128:
         {
            int VAR_8;
            udigit VAR_9[2], VAR_10[3];


            VAR_8 = FUNC_6(VAR_10, FUNC_7(VAR_10, 7),
               VAR_9, FUNC_7(VAR_9, VAR_0->width), VAR_1);
            VAR_8 = FUNC_8(VAR_10, VAR_8, 3);
            VAR_8 = FUNC_4(VAR_10, VAR_8, 1);


            VAR_0->image_digits = FUNC_5(VAR_0->image_bytes, 0,
               VAR_10, VAR_8, VAR_0->height);
         }
         break;

      default:
         FUNC_3(VAR_0, "IHDR: interlace method");
   }

   FUNC_2(VAR_0->image_digits >= 1 && VAR_0->image_digits <= 5);
   return 1;
}
