
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ FUNC_0 (int const) ;
 char FUNC_1 (int const) ;

int FUNC_2(const u8 * VAR_0, size_t VAR_1, int *VAR_2, unsigned int *VAR_3)
{
 int VAR_4 = 0;
 if (VAR_2 != 0 && VAR_3 != 0) {

  for (; *VAR_2 < VAR_1 && !FUNC_0(VAR_0[*VAR_2]); (*VAR_2)++) {
  }

  *VAR_3 = 0;
  for (; *VAR_2 < VAR_1 && FUNC_0(VAR_0[*VAR_2]); (*VAR_2)++) {
   char VAR_5 = FUNC_1(VAR_0[*VAR_2]);
   VAR_4 = 1;
   if ('0' <= VAR_5 && VAR_5 <= '9') {
    *VAR_3 = (*VAR_3 << 4) + (VAR_5 - '0');
   } else if ('a' <= VAR_5 && VAR_5 <= 'f') {
    *VAR_3 = (*VAR_3 << 4) + (VAR_5 - 'a' + 10);
   }
  }
 }
 return VAR_4;
}
