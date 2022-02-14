
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int png_store ;
typedef int png_byte ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int * const,int const,int ,int ,int,int,int) ;

__attribute__((used)) static void
FUNC_2(png_store* const VAR_2, png_byte const VAR_3, int VAR_4,
    int const VAR_5)
{
   for (; VAR_4 <= VAR_5; ++VAR_4)
   {
      png_uint_32 VAR_6;

      for (VAR_6 = 1; VAR_6 <= 16; ++VAR_6)
      {
         png_uint_32 VAR_7;

         for (VAR_7 = 1; VAR_7 <= 16; ++VAR_7)
         {




            FUNC_1(VAR_2, VAR_3, FUNC_0(VAR_4), VAR_1,
               VAR_6, VAR_7, 0);
            FUNC_1(VAR_2, VAR_3, FUNC_0(VAR_4), VAR_1,
               VAR_6, VAR_7, 1);
         }
      }
   }
}
