
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;



__attribute__((used)) static int
FUNC_0(png_uint_32 VAR_0)
{



   unsigned int VAR_1;

   for (VAR_1=0; VAR_1<4; ++VAR_1)
   {
      unsigned int VAR_2 = VAR_0 & 0xffU;

      if (!((VAR_2 >= 65U && VAR_2 <= 90U) || (VAR_2 >= 97U && VAR_2 <= 122U)))
         return 0;

      VAR_0 >>= 8;
   }

   return 1;
}
