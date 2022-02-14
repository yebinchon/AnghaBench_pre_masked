
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int rxchainmask; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath9k_channel*) ;
 int FUNC_4 (struct ath_hw*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct ath_hw *VAR_1,
      struct ath9k_channel *VAR_2)
{
 int VAR_3;

 if (!FUNC_0(VAR_1) && !FUNC_2(VAR_1) && !FUNC_1(VAR_1))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!(VAR_1->rxchainmask & (1 << VAR_3)))
   continue;
  FUNC_4(VAR_1, VAR_3, FUNC_3(VAR_2));
 }
}
