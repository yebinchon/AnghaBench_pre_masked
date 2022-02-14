
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_image_read_control ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,unsigned int,unsigned int,unsigned int,int,int ) ;

__attribute__((used)) static int
FUNC_1(png_image_read_control *VAR_1)
{
   unsigned int VAR_2, VAR_3;


   for (VAR_2=VAR_3=0; VAR_3<6; ++VAR_3)
   {
      unsigned int VAR_4;

      for (VAR_4=0; VAR_4<6; ++VAR_4)
      {
         unsigned int VAR_5;

         for (VAR_5=0; VAR_5<6; ++VAR_5)
            FUNC_0(VAR_1, VAR_2++, VAR_3*51, VAR_4*51, VAR_5*51, 255,
                VAR_0);
      }
   }

   return (int)VAR_2;
}
