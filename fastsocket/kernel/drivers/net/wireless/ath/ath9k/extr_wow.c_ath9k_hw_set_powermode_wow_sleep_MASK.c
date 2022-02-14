
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct ath_hw*,int ) ;
 int FUNC_3 (struct ath_hw*,int ,int ) ;
 int FUNC_4 (struct ath_hw*,int ,int) ;
 struct ath_common* FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*,int ,int ,int ,int ) ;
 int FUNC_7 (struct ath_common*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct ath_hw *VAR_10)
{
 struct ath_common *VAR_11 = FUNC_5(VAR_10);

 FUNC_3(VAR_10, VAR_8, VAR_9);


 FUNC_4(VAR_10, VAR_1, VAR_2);

 if (!FUNC_6(VAR_10, VAR_1, VAR_3, 0, VAR_0)) {
  FUNC_7(VAR_11, "Failed to stop Rx DMA in 10ms AR_CR=0x%08x AR_DIAG_SW=0x%08x\n",
   FUNC_2(VAR_10, VAR_1), FUNC_2(VAR_10, VAR_4));
  return;
 } else {
  if (!FUNC_1(VAR_10))
   FUNC_4(VAR_10, VAR_7, 0x0);
 }


 if (FUNC_0(VAR_10))
  return;

 FUNC_4(VAR_10, VAR_5, VAR_6);
}
