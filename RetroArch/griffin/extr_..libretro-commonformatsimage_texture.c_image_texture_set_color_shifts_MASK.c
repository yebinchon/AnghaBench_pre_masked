
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct texture_image {scalar_t__ supports_rgba; } ;



bool FUNC_0(
      unsigned *VAR_0, unsigned *VAR_1, unsigned *VAR_2,
      unsigned *VAR_3,
      struct texture_image *VAR_4
      )
{
   *VAR_3 = 24;
   *VAR_0 = 16;
   *VAR_1 = 8;
   *VAR_2 = 0;

   if (VAR_4->supports_rgba)
   {
      *VAR_0 = 0;
      *VAR_2 = 16;
      return 1;
   }

   return 0;
}
