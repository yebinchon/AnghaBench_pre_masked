
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8192_priv {int* TxPowerLevelCCK; int* TxPowerLevelOFDM24G; int rf_chip; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int) ;



 int FUNC_4 (int ,char*) ;
 struct r8192_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_2, u8 VAR_3)
{
 struct r8192_priv *VAR_4 = FUNC_5(VAR_2);
 u8 VAR_5 = VAR_4->TxPowerLevelCCK[VAR_3-1];
 u8 VAR_6 = VAR_4->TxPowerLevelOFDM24G[VAR_3-1];

 switch(VAR_4->rf_chip)
 {
 case 130:




  break;

 case 129:
  FUNC_2(VAR_2, VAR_5);
  FUNC_3(VAR_2, VAR_6);
  break;

 case 128:
  break;
 default:
  FUNC_4(VAR_1, "unknown rf chip ID in rtl8192_SetTxPowerLevel()\n");
  break;
 }
 return;
}
