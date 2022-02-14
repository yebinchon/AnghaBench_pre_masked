
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * png_const_charp ;
typedef scalar_t__* png_charp ;


 scalar_t__* FUNC_0 (size_t) ;
 int FUNC_1 (scalar_t__*,int ,size_t) ;
 size_t FUNC_2 (int * const) ;

__attribute__((used)) static png_charp
FUNC_3(const png_const_charp *VAR_0)
{
   size_t VAR_1 = 0;
   png_charp VAR_2, VAR_3;
   const png_const_charp *VAR_4 = VAR_0;

   while (*VAR_4 != ((void*)0))
      VAR_1 += FUNC_2(*VAR_4++);

   VAR_2 = VAR_3 = FUNC_0(VAR_1+1);

   VAR_4 = VAR_0;
   while (*VAR_4 != ((void*)0))
   {
      VAR_1 = FUNC_2(*VAR_4);
      FUNC_1(VAR_3, *VAR_4++, VAR_1);
      VAR_3 += VAR_1;
   }

   *VAR_3 = 0;
   return VAR_2;
}
