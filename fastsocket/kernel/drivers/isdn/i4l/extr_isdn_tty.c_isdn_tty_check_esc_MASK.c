
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int u_char ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(const u_char * VAR_4, u_char VAR_5, int VAR_6, int *VAR_7,
     u_long *VAR_8)
{
 if (VAR_5 > 127)
  return;
 if (VAR_6 > 3) {
  VAR_4 += VAR_6 - 3;
  VAR_6 = 3;
  *VAR_7 = 0;
 }
 while (VAR_6 > 0) {
  if (*(VAR_4++) == VAR_5) {
   if ((*VAR_7)++) {

    if (FUNC_1(VAR_3, *VAR_8 + VAR_1))
     *VAR_7 = 1;
   } else {

    if (FUNC_2(VAR_3, *VAR_8 + VAR_2))
     *VAR_7 = 0;
   }
   if ((*VAR_7 == 3) && (VAR_6 == 1))
    FUNC_0(VAR_0, 1);
   if (*VAR_7 > 3)
    *VAR_7 = 1;
  } else
   *VAR_7 = 0;
  *VAR_8 = VAR_3;
  VAR_6--;
 }
}
