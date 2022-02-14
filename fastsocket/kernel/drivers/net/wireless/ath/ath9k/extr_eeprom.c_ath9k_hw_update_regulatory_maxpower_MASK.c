
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_regulatory {int max_power_level; } ;
struct ath_hw {int txchainmask; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 struct ath_regulatory* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_common*,int ,char*) ;

void FUNC_4(struct ath_hw *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_1(VAR_3);
 struct ath_regulatory *VAR_5 = FUNC_2(VAR_3);

 switch (FUNC_0(VAR_3->txchainmask)) {
 case 1:
  break;
 case 2:
  VAR_5->max_power_level += VAR_2;
  break;
 case 3:
  VAR_5->max_power_level += VAR_1;
  break;
 default:
  FUNC_3(VAR_4, VAR_0, "Invalid chainmask configuration\n");
  break;
 }
}
