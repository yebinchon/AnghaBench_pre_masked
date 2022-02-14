
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __le16 ;


 int FUNC_0 (int) ;
 int* VAR_0 ;
 int FUNC_1 (int) ;

void
FUNC_2(int VAR_1, __le16 *VAR_2, __le16 *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_1 = FUNC_1(VAR_1);
 *VAR_2 = FUNC_0(
  (VAR_1 % 60) / 2 + (((VAR_1 / 60) % 60) << 5) +
  (((VAR_1 / 3600) % 24) << 11));
 VAR_4 = VAR_1 / 86400 - 3652;
 VAR_5 = VAR_4 / 365;
 if ((VAR_5 + 3) / 4 + 365 * VAR_5 > VAR_4)
  VAR_5--;
 VAR_4 -= (VAR_5 + 3) / 4 + 365 * VAR_5;
 if (VAR_4 == 59 && !(VAR_5 & 3)) {
  VAR_6 = VAR_4;
  VAR_7 = 2;
 } else {
  VAR_6 = (VAR_5 & 3) || VAR_4 <= 59 ? VAR_4 : VAR_4 - 1;
  for (VAR_7 = 1; VAR_7 < 12; VAR_7++)
   if (VAR_0[VAR_7] > VAR_6)
    break;
 }
 *VAR_3 = FUNC_0(VAR_6 - VAR_0[VAR_7 - 1] + 1 + (VAR_7 << 5) + (VAR_5 << 9));
}
