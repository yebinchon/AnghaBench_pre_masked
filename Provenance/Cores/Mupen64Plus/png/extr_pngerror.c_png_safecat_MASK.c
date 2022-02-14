
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* png_const_charp ;
typedef char* png_charp ;



size_t
FUNC_0(png_charp VAR_0, size_t VAR_1, size_t VAR_2,
    png_const_charp VAR_3)
{
   if (VAR_0 != ((void*)0) && VAR_2 < VAR_1)
   {
      if (VAR_3 != ((void*)0))
         while (*VAR_3 != '\0' && VAR_2 < VAR_1-1)
           VAR_0[VAR_2++] = *VAR_3++;

      VAR_0[VAR_2] = '\0';
   }

   return VAR_2;
}
