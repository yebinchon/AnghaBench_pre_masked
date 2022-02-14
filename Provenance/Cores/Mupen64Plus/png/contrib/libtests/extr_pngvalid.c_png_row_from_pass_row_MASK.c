
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;



__attribute__((used)) static png_uint_32
FUNC_0(png_uint_32 VAR_0, int VAR_1)
{

   switch (VAR_1)
   {
case 0: return VAR_0 * 8;
case 1: return VAR_0 * 8;
case 2: return VAR_0 * 8 + 4;
case 3: return VAR_0 * 4;
case 4: return VAR_0 * 4 + 2;
case 5: return VAR_0 * 2;
case 6: return VAR_0 * 2 + 1;
default: break;
   }

   return 0xff;
}
