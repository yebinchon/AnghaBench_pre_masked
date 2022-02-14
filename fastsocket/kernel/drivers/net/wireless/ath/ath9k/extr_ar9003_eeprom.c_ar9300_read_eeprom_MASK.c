
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*,int,int *) ;
 int FUNC_1 (struct ath_hw*,int,int *) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_common*,int ,char*,...) ;

__attribute__((used)) static bool FUNC_4(struct ath_hw *VAR_2, int VAR_3, u8 *VAR_4,
          int VAR_5)
{
 struct ath_common *VAR_6 = FUNC_2(VAR_2);
 int VAR_7;

 if ((VAR_3 < 0) || ((VAR_3 + VAR_5) / 2 > VAR_0 - 1)) {
  FUNC_3(VAR_6, VAR_1, "eeprom address not in range\n");
  return 0;
 }






 if (VAR_3 % 2 == 0) {
  if (!FUNC_0(VAR_2, VAR_3--, VAR_4++))
   goto error;

  VAR_5--;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5 / 2; VAR_7++) {
  if (!FUNC_1(VAR_2, VAR_3, VAR_4))
   goto error;

  VAR_3 -= 2;
  VAR_4 += 2;
 }

 if (VAR_5 % 2)
  if (!FUNC_0(VAR_2, VAR_3, VAR_4))
   goto error;

 return 1;

error:
 FUNC_3(VAR_6, VAR_1, "unable to read eeprom region at offset %d\n",
  VAR_3);
 return 0;
}
