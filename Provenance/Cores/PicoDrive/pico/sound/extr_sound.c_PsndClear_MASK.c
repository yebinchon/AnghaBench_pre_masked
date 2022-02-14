
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 short* VAR_4 ;
 int FUNC_0 (int*,int ,int) ;

void FUNC_1(void)
{
  int VAR_5 = VAR_2;
  if (VAR_3) VAR_5++;
  if (VAR_1 & VAR_0)
    FUNC_0((int *) VAR_4, 0, VAR_5);
  else {
    short *VAR_6 = VAR_4;
    if ((long)VAR_6 & 2) { *VAR_6++ = 0; VAR_5--; }
    FUNC_0((int *) VAR_6, 0, VAR_5/2);
    if (VAR_5 & 1) VAR_6[VAR_5-1] = 0;
  }
}
