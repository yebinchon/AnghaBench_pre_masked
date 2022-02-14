
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* uarb ;
typedef scalar_t__ png_uint_16 ;
typedef int png_alloc_size_t ;



__attribute__((used)) static int
FUNC_0(uarb VAR_0, png_alloc_size_t VAR_1)



{
   int VAR_2 = 0;

   while (VAR_1 > 0)
   {
      VAR_0[VAR_2++] = (png_uint_16)(VAR_1 & 0xffff);
      VAR_1 >>= 16;
   }

   return VAR_2;
}
