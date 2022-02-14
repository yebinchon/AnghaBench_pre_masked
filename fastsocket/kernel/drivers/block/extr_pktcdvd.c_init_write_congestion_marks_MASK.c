
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(int* VAR_0, int* VAR_1)
{
 if (*VAR_1 > 0) {
  *VAR_1 = FUNC_0(*VAR_1, 500);
  *VAR_1 = FUNC_1(*VAR_1, 1000000);
  if (*VAR_0 <= 0)
   *VAR_0 = *VAR_1 - 100;
  else {
   *VAR_0 = FUNC_1(*VAR_0, *VAR_1 - 100);
   *VAR_0 = FUNC_0(*VAR_0, 100);
  }
 } else {
  *VAR_1 = -1;
  *VAR_0 = -1;
 }
}
