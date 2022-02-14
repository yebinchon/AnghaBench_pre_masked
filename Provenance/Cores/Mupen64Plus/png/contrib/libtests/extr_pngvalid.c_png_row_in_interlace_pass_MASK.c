
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;


 int** VAR_0 ;

__attribute__((used)) static int
FUNC_0(png_uint_32 VAR_1, int VAR_2)
{

   int VAR_3;
   VAR_1 &= 7;
   ++VAR_2;
   for (VAR_3=0; VAR_3<8; ++VAR_3) if (VAR_0[VAR_1][VAR_3] == VAR_2)
      return 1;

   return 0;
}
