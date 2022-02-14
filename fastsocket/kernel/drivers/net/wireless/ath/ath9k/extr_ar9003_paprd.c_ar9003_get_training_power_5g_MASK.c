
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int txchainmask; scalar_t__ paprd_target_power; struct ath9k_channel* curchan; } ;
struct ath_common {int dummy; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ath9k_channel*) ;
 unsigned int FUNC_1 (struct ath_hw*,int ,int ) ;
 unsigned int FUNC_2 (int) ;
 unsigned int FUNC_3 (struct ath_hw*,struct ath9k_channel*) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_common*,int ,char*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct ath_hw *VAR_5)
{
 struct ath_common *VAR_6 = FUNC_4(VAR_5);
 struct ath9k_channel *VAR_7 = VAR_5->curchan;
 unsigned int VAR_8, VAR_9, VAR_10;

 VAR_9 = FUNC_3(VAR_5, VAR_7);

 if (FUNC_0(VAR_7))
  VAR_8 = FUNC_1(VAR_5, VAR_2,
   VAR_3);
 else
  VAR_8 = FUNC_1(VAR_5, VAR_0,
   VAR_1);

 VAR_8 += VAR_9;
 VAR_10 = FUNC_2((int) VAR_5->paprd_target_power - (int) VAR_8);
 if (VAR_10 > VAR_9)
  return -1;

 switch (FUNC_6(VAR_5->txchainmask)) {
 case 1:
  VAR_10 = 6;
  break;
 case 2:
  VAR_10 = 4;
  break;
 case 3:
  VAR_10 = 2;
  break;
 default:
  VAR_10 = 0;
  FUNC_5(VAR_6, VAR_4, "Invalid tx-chainmask: %u\n",
   VAR_5->txchainmask);
 }

 VAR_8 += VAR_10;
 return VAR_8;
}
