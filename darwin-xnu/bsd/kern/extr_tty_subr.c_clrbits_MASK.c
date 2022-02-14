
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;

void
FUNC_1(u_char *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8;
 u_char VAR_9;

 if(VAR_3==1) {
  FUNC_0(VAR_1, VAR_2);
  return;
 }

 VAR_4 = VAR_2 / VAR_0;
 VAR_5 = VAR_2 % VAR_0;
 VAR_6 = (VAR_2+VAR_3) / VAR_0;
 VAR_7 = (VAR_2+VAR_3) % VAR_0;
 if (VAR_4 == VAR_6) {
  VAR_9 = ((1 << (VAR_7 - VAR_5)) - 1) << VAR_5;
  VAR_1[VAR_4] &= ~VAR_9;
 } else {
  VAR_9 = (1<<VAR_5) - 1;
  VAR_1[VAR_4++] &= VAR_9;

  VAR_9 = (1<<VAR_7) - 1;

  if (VAR_9)
   VAR_1[VAR_6] &= ~VAR_9;

  for (VAR_8 = VAR_4; VAR_8 < VAR_6; VAR_8++)
   VAR_1[VAR_8] = 0x00;
 }
}
