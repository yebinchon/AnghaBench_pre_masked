
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;


 int* VAR_0 ;

__attribute__((used)) static png_uint_32
FUNC_0(png_uint_32 VAR_1, int VAR_2)
{
   return VAR_0[(VAR_1 ^ VAR_2) & 0xff] ^ (VAR_1 >> 8);
}
