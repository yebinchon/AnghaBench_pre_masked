
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;

void FUNC_0(int *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4, int *VAR_5, int *VAR_6)
{
 long VAR_7 = VAR_0;

 *VAR_1 = *VAR_2 = *VAR_3 = 1;
 *VAR_4 = (VAR_7 >> 24) % 24;
 *VAR_5 = (VAR_7 >> 16) % 60;
 *VAR_6 = VAR_7 % 60;
}
