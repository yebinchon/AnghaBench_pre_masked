
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static void FUNC_0(uint64_t VAR_0,
      size_t VAR_1, size_t VAR_2, size_t VAR_3,
      size_t *VAR_4, size_t *VAR_5,
      size_t *VAR_6, size_t *VAR_7,
      size_t *VAR_8, size_t *VAR_9)
{
   int VAR_10 = (int)(VAR_2 + VAR_3);
   int VAR_11 = VAR_0 % VAR_10;




   int VAR_12;
   int VAR_13;
   VAR_12 = (VAR_11 < (int)VAR_2) ? VAR_11 : 0;
   VAR_13 = (int)(VAR_2 - VAR_11);
   VAR_13 = (VAR_13 < 0) ? 0 : VAR_13;
   VAR_13 = (VAR_13 > (int)VAR_1) ? (int)VAR_1 : VAR_13;

   *VAR_4 = VAR_12;
   *VAR_5 = VAR_13;


   VAR_12 = (int)(VAR_11 - VAR_2);
   VAR_12 = VAR_12 < 0 ? 0 : VAR_12;
   VAR_13 = (int)(VAR_1 - *VAR_5);
   VAR_13 = (VAR_13 > (int)VAR_3) ? (int)VAR_3 : VAR_13;
   VAR_13 = VAR_13 - VAR_12;

   *VAR_6 = VAR_12;
   *VAR_7 = VAR_13;


   VAR_13 = (int)(VAR_1 - (*VAR_5 + *VAR_7));
   VAR_13 = VAR_13 < 0 ? 0 : VAR_13;




   *VAR_8 = 0;
   *VAR_9 = VAR_13;
}
