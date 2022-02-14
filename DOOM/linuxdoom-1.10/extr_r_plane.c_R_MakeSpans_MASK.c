
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int) ;
 int* VAR_0 ;

void
FUNC_1
( int VAR_1,
  int VAR_2,
  int VAR_3,
  int VAR_4,
  int VAR_5 )
{
    while (VAR_2 < VAR_4 && VAR_2<=VAR_3)
    {
 FUNC_0 (VAR_2,VAR_0[VAR_2],VAR_1-1);
 VAR_2++;
    }
    while (VAR_3 > VAR_5 && VAR_3>=VAR_2)
    {
 FUNC_0 (VAR_3,VAR_0[VAR_3],VAR_1-1);
 VAR_3--;
    }

    while (VAR_4 < VAR_2 && VAR_4<=VAR_5)
    {
 VAR_0[VAR_4] = VAR_1;
 VAR_4++;
    }
    while (VAR_5 > VAR_3 && VAR_5>=VAR_4)
    {
 VAR_0[VAR_5] = VAR_1;
 VAR_5--;
    }
}
