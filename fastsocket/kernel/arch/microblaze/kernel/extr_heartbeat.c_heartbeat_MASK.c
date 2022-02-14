
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;

void FUNC_1(void)
{
 static unsigned int VAR_3, VAR_4, VAR_5;

 if (VAR_2) {
  if (VAR_3 == 0 || VAR_3 == VAR_5)
   FUNC_0(VAR_2, 1);
  else if (VAR_3 == 7 || VAR_3 == VAR_5 + 7)
   FUNC_0(VAR_2, 0);

  if (++VAR_3 > VAR_4) {
   VAR_3 = 0;






   VAR_4 = ((672 << VAR_0) / (5 * VAR_1[0] +
      (7 << VAR_0))) + 30;
   VAR_5 = VAR_4 / 4;
  }
 }
}
