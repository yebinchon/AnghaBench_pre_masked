
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UCHAR ;



void FUNC_0(UCHAR *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_1 - 1;
 while (VAR_2 >= 0) {
  VAR_0[VAR_2]++;
  if (VAR_0[VAR_2] != 0)
   break;
  VAR_2--;
 }
}
