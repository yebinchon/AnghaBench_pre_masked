
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * png_const_charp ;
typedef int * png_charp ;


 int * FUNC_0 (scalar_t__) ;
 int * FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static png_charp
FUNC_3(png_const_charp VAR_0)
{



   if (VAR_0 != ((void*)0))
   {
      png_charp VAR_1 = FUNC_0(FUNC_2(VAR_0)+1);
      return FUNC_1(VAR_1, VAR_0);
   }

   return ((void*)0);
}
