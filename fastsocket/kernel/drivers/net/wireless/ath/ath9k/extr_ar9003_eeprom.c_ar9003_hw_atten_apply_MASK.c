
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ath_hw {int rxchainmask; int txchainmask; } ;
struct ath9k_channel {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ath_hw*,unsigned long,int ,int ) ;
 int FUNC_3 (struct ath_hw*,int,struct ath9k_channel*) ;
 int FUNC_4 (struct ath_hw*,int,struct ath9k_channel*) ;

__attribute__((used)) static void FUNC_5(struct ath_hw *VAR_5, struct ath9k_channel *VAR_6)
{
 int VAR_7;
 u16 VAR_8;
 unsigned long VAR_9[3] = {VAR_0,
       VAR_1,
       VAR_2,
      };

 if ((FUNC_0(VAR_5)) && (VAR_5->rxchainmask == 0x2)) {
  VAR_8 = FUNC_3(VAR_5, 1, VAR_6);
  FUNC_2(VAR_5, VAR_9[0],
         VAR_3, VAR_8);

  VAR_8 = FUNC_4(VAR_5, 1, VAR_6);
  FUNC_2(VAR_5, VAR_9[0],
         VAR_4,
         VAR_8);
 }


 for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  if (VAR_5->txchainmask & FUNC_1(VAR_7)) {
   VAR_8 = FUNC_3(VAR_5, VAR_7, VAR_6);
   FUNC_2(VAR_5, VAR_9[VAR_7],
          VAR_3, VAR_8);

   VAR_8 = FUNC_4(VAR_5, VAR_7, VAR_6);
   FUNC_2(VAR_5, VAR_9[VAR_7],
          VAR_4,
          VAR_8);
  }
 }
}
