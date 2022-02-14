
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uarb ;
typedef int png_uint_32 ;


 int FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_2(uarb VAR_0, int VAR_1, png_uint_32 VAR_2)

{
   if (VAR_1 > 0)
   {
      VAR_1 = FUNC_0(VAR_0, VAR_1, VAR_2 & 0xffff);
      return FUNC_0(VAR_0+1, VAR_1-1, VAR_2 >> 16)+1;
   }

   return FUNC_1(VAR_0, VAR_2);
}
