
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t FUNC_0(char *VAR_0, size_t VAR_1, size_t VAR_2,
   const char *VAR_3)
{
   while (VAR_2 < VAR_1 && VAR_3 != ((void*)0) && *VAR_3 != 0)
      VAR_0[VAR_2++] = *VAR_3++;

   if (VAR_2 >= VAR_1)
      VAR_2 = VAR_1-1;

   VAR_0[VAR_2] = 0;
   return VAR_2;
}
