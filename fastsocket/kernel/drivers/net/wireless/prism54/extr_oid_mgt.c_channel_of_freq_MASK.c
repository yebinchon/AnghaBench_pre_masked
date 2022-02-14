
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

int
FUNC_0(int VAR_1)
{
 int VAR_2 = 0;

 if ((VAR_1 >= 2412) && (VAR_1 <= 2484)) {
  while ((VAR_2 < 14) && (VAR_1 != VAR_0[VAR_2]))
   VAR_2++;
  return (VAR_2 >= 14) ? 0 : ++VAR_2;
 } else if ((VAR_1 >= (int) 5000) && (VAR_1 <= (int) 6000)) {
  return ( (VAR_1 - 5000) / 5 );
 } else
  return 0;
}
