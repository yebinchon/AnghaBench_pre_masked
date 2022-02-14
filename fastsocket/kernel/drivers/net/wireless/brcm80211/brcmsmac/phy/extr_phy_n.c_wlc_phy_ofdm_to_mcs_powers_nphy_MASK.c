
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



void
FUNC_0(u8 *VAR_0, u8 VAR_1,
    u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4, VAR_5;

 VAR_5 = VAR_3;
 for (VAR_4 = VAR_1; VAR_4 <= VAR_2 - 1; VAR_4++) {
  VAR_0[VAR_4] = VAR_0[VAR_5];
  VAR_5 += (VAR_4 == VAR_1) ? 2 : 1;
 }
 VAR_0[VAR_2] = VAR_0[VAR_2 - 1];
}
