
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* uarbc ;
typedef int png_uint_16 ;



__attribute__((used)) static int
FUNC_0(uarbc VAR_0, int VAR_1)

{
   png_uint_16 VAR_2;

   if (VAR_1 > 1)
      return 15;

   VAR_2 = VAR_0[0];

   if (VAR_2 > 16384) return 15;
   if (VAR_2 > 8192) return 14;
   if (VAR_2 > 4096) return 13;
   if (VAR_2 > 2048) return 12;
   if (VAR_2 > 1024) return 11;
   if (VAR_2 > 512) return 10;
   if (VAR_2 > 256) return 9;
   return 8;
}
