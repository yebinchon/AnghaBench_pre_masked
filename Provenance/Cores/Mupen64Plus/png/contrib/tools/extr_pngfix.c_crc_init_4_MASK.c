
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;


 int* VAR_0 ;

__attribute__((used)) static png_uint_32
FUNC_0(png_uint_32 VAR_1)
{







   png_uint_32 VAR_2 = VAR_0[(~VAR_1 >> 24)] ^ 0xffffff;

   VAR_2 = VAR_0[(VAR_2 ^ (VAR_1 >> 16)) & 0xff] ^ (VAR_2 >> 8);
   VAR_2 = VAR_0[(VAR_2 ^ (VAR_1 >> 8)) & 0xff] ^ (VAR_2 >> 8);
   return VAR_0[(VAR_2 ^ VAR_1) & 0xff] ^ (VAR_2 >> 8);
}
