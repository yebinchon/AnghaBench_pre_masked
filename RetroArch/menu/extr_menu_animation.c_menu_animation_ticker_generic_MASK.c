
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static void FUNC_0(uint64_t VAR_0,
      size_t VAR_1, size_t *VAR_2, size_t *VAR_3)
{
   int VAR_4 = (int)(2 * (*VAR_3 - VAR_1) + 4);
   int VAR_5 = VAR_0 % VAR_4;

   int VAR_6 = 2;
   int VAR_7 = (int)(VAR_6 + (*VAR_3 - VAR_1));
   int VAR_8 = VAR_7 + 2;

   int VAR_9 = VAR_5 - VAR_6;
   int VAR_10 = (int)((*VAR_3 - VAR_1) - (VAR_5 - VAR_8));

   if (VAR_5 < VAR_6)
      *VAR_2 = 0;
   else if (VAR_5 < VAR_7)
      *VAR_2 = VAR_9;
   else if (VAR_5 < VAR_8)
      *VAR_2 = *VAR_3 - VAR_1;
   else
      *VAR_2 = VAR_10;

   *VAR_3 = VAR_1;
}
