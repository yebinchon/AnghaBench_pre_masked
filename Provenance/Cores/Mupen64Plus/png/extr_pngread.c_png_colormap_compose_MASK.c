
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int png_image_read_control ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static png_uint_32
FUNC_2(png_image_read_control *VAR_1,
    png_uint_32 VAR_2, int VAR_3, png_uint_32 VAR_4,
    png_uint_32 VAR_5, int VAR_6)
{





   png_uint_32 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3);
   png_uint_32 VAR_8 = FUNC_1(VAR_1, VAR_5, VAR_6);




   VAR_7 = VAR_7 * VAR_4 + VAR_8 * (255-VAR_4);

   if (VAR_6 == VAR_0)
   {



      VAR_7 *= 257;
      VAR_7 += VAR_7 >> 16;
      VAR_7 = (VAR_7+32768) >> 16;
   }

   else
      VAR_7 = FUNC_0(VAR_7);

   return VAR_7;
}
