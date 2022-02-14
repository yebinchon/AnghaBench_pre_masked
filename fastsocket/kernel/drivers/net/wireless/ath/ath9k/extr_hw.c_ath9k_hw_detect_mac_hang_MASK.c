
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ath_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct ath_hw*,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (int ,int ,char*,...) ;

__attribute__((used)) static bool FUNC_4(struct ath_hw *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10 = VAR_0;
 u32 VAR_11, VAR_12, VAR_13, VAR_14 = 6;

 VAR_9 = FUNC_0(VAR_7, VAR_2);

 if ((VAR_9 & VAR_4) != VAR_3) {
  FUNC_3(FUNC_2(VAR_7), VAR_6,
   "MAC Hang signature not found at DCU complete\n");
  return 0;
 }

 VAR_8 = FUNC_0(VAR_7, VAR_10);
 if (FUNC_1(VAR_8, VAR_14, &VAR_13, &VAR_12))
  goto hang_check_iter;

 VAR_10 = VAR_1;
 VAR_14 = 4;
 VAR_8 = FUNC_0(VAR_7, VAR_10);
 if (FUNC_1(VAR_8, VAR_14, &VAR_13, &VAR_12))
  goto hang_check_iter;

 FUNC_3(FUNC_2(VAR_7), VAR_6,
  "MAC Hang signature 1 not found\n");
 return 0;

hang_check_iter:
 FUNC_3(FUNC_2(VAR_7), VAR_6,
  "DCU registers: chain %08x complete %08x Hang: state %d pos %d\n",
  VAR_8, VAR_9, VAR_13, VAR_12);

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  VAR_8 = FUNC_0(VAR_7, VAR_10);
  VAR_8 = (VAR_8 >> (5 * VAR_12)) & 0x1f;
  VAR_9 = FUNC_0(VAR_7, VAR_2);

  if (((VAR_9 & VAR_4) !=
     VAR_3) ||
      (VAR_8 != VAR_13))
   return 0;
 }

 FUNC_3(FUNC_2(VAR_7), VAR_6, "MAC Hang signature 1 found\n");

 return 1;
}
