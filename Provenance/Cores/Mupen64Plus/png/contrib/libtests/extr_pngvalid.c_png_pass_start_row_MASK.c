
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;


 int** VAR_0 ;

__attribute__((used)) static png_uint_32
FUNC_0(int VAR_1)
{
   int VAR_2, VAR_3;
   ++VAR_1;
   for (VAR_3=0; VAR_3<8; ++VAR_3) for (VAR_2=0; VAR_2<8; ++VAR_2) if (VAR_0[VAR_3][VAR_2] == VAR_1)
      return VAR_3;
   return 0xf;
}
