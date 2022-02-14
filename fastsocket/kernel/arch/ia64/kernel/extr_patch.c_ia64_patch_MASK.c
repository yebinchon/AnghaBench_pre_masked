
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



void
FUNC_0 (u64 VAR_0, u64 VAR_1, u64 VAR_2)
{
 u64 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, *VAR_9 = (u64 *) (VAR_0 & -16);

 unsigned long VAR_10;

 VAR_7 = VAR_9[0]; VAR_8 = VAR_9[1];
 VAR_10 = 5 + 41 * (VAR_0 % 16);
 if (VAR_10 >= 64) {
  VAR_4 = VAR_1 << (VAR_10 - 64);
  VAR_6 = VAR_2 << (VAR_10 - 64);
 } else {
  VAR_3 = VAR_1 << VAR_10; VAR_4 = VAR_1 >> (64 - VAR_10);
  VAR_5 = VAR_2 << VAR_10; VAR_6 = VAR_2 >> (64 - VAR_10);
  VAR_9[0] = (VAR_7 & ~VAR_3) | (VAR_5 & VAR_3);
 }
 VAR_9[1] = (VAR_8 & ~VAR_4) | (VAR_6 & VAR_4);
}
