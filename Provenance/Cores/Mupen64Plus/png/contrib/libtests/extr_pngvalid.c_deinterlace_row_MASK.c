
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ png_uint_32 ;
typedef int png_const_bytep ;
typedef int png_bytep ;


 unsigned int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__,int ,scalar_t__,unsigned int,int) ;

__attribute__((used)) static void
FUNC_3(png_bytep VAR_0, png_const_bytep VAR_1,
   unsigned int VAR_2, png_uint_32 VAR_3, int VAR_4, int VAR_5)
{





   png_uint_32 VAR_6, VAR_7, VAR_8;

   VAR_7 = FUNC_1(VAR_4);
   VAR_8 = 1U<<FUNC_0(VAR_4);

   for (VAR_6=0; VAR_7<VAR_3; VAR_7+=VAR_8)
   {
      FUNC_2(VAR_0, VAR_7, VAR_1, VAR_6, VAR_2, VAR_5);
      ++VAR_6;
   }
}
