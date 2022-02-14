
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;



__attribute__((used)) static char
FUNC_0(png_uint_32 VAR_0)
{






   if (VAR_0 & 32)
      return "!abcdefghijklmnopqrstuvwxyz56789"[(VAR_0-96)&31];

   else
      return "@ABCDEFGHIJKLMNOPQRSTUVWXYZ01234"[(VAR_0-64)&31];
}
