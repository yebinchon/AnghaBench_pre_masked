
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;



__attribute__((used)) static unsigned int
FUNC_0(png_uint_32 VAR_0)
{

   unsigned int VAR_1 = 0;

   if (VAR_0 & 0xffff0000U) VAR_1 += 16U, VAR_0 >>= 16;
   if (VAR_0 & 0xff00U) VAR_1 += 8U, VAR_0 >>= 8;
   if (VAR_0 & 0xf0U) VAR_1 += 4U, VAR_0 >>= 4;
   if (VAR_0 & 0xcU) VAR_1 += 2U, VAR_0 >>= 2;
   if (VAR_0 & 0x2U) ++VAR_1, VAR_0 >>= 1;
   if (VAR_0) ++VAR_1;

   return VAR_1;
}
