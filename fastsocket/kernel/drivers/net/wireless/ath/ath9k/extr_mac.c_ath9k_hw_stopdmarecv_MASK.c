
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_common*,char*,int,int,int,int) ;
 int FUNC_5 (int) ;

bool FUNC_6(struct ath_hw *VAR_12, bool *VAR_13)
{

 struct ath_common *VAR_14 = FUNC_3(VAR_12);
 u32 VAR_15, VAR_16 = 0;
 int VAR_17;


 FUNC_2(VAR_12, VAR_7,
    ((VAR_8 << VAR_9) |
     (VAR_10 <<
      VAR_11)));

 FUNC_2(VAR_12, VAR_2, VAR_3);


 for (VAR_17 = 10000 / VAR_1; VAR_17 != 0; VAR_17--) {
  if ((FUNC_1(VAR_12, VAR_2) & VAR_4) == 0)
   break;

  if (!FUNC_0(VAR_12)) {
   VAR_15 = FUNC_1(VAR_12, VAR_6) & 0x7f0;
   if (VAR_15 == 0x1c0 && VAR_15 == VAR_16) {
    *VAR_13 = 1;
    break;
   }

   VAR_16 = VAR_15;
  }

  FUNC_5(VAR_1);
 }

 if (VAR_17 == 0) {
  FUNC_4(VAR_14,
   "DMA failed to stop in %d ms AR_CR=0x%08x AR_DIAG_SW=0x%08x DMADBG_7=0x%08x\n",
   10000 / 1000,
   FUNC_1(VAR_12, VAR_2),
   FUNC_1(VAR_12, VAR_5),
   FUNC_1(VAR_12, VAR_6));
  return 0;
 } else {
  return 1;
 }


}
