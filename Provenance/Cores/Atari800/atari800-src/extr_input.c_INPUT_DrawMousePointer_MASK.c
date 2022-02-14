
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_1(void)
{
 if ((VAR_2 == VAR_1 || VAR_2 == VAR_0) && VAR_6) {
  int VAR_9 = VAR_7 >> VAR_3;
  int VAR_10 = VAR_8 >> VAR_3;
  if (VAR_9 >= 0 && VAR_9 <= 167 && VAR_10 >= 0 && VAR_10 <= 119) {
   UWORD *VAR_11 = & ((UWORD *) VAR_5)[12 + VAR_9 + VAR_4 * VAR_10];
   FUNC_0(-2, 0);
   FUNC_0(-1, 0);
   FUNC_0(1, 0);
   FUNC_0(2, 0);
   if (VAR_10 >= 1) {
    FUNC_0(0, -1);
    if (VAR_10 >= 2)
     FUNC_0(0, -2);
   }
   if (VAR_10 <= 118) {
    FUNC_0(0, 1);
    if (VAR_10 <= 117)
     FUNC_0(0, 2);
   }
  }
 }
}
