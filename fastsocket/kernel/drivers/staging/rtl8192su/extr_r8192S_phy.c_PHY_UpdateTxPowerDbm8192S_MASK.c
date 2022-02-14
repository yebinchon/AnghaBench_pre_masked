
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct r8192_priv {scalar_t__ LegacyHTTxPowerDiff; int chan; scalar_t__** RfTxPwrLevelOfdm2T; scalar_t__** RfTxPwrLevelOfdm1T; scalar_t__** RfTxPwrLevelCck; scalar_t__* TxPowerLevelOFDM24G_C; scalar_t__* TxPowerLevelOFDM24G_A; scalar_t__* TxPowerLevelOFDM24G; scalar_t__* TxPowerLevelCCK_C; scalar_t__* TxPowerLevelCCK_A; scalar_t__* TxPowerLevelCCK; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*,int ,long) ;

bool FUNC_3(struct net_device* VAR_3, long VAR_4)
{
 struct r8192_priv *VAR_5 = FUNC_1(VAR_3);
 u8 VAR_6;
 u8 VAR_7;


 u8 VAR_8 = FUNC_2(VAR_3, VAR_1, VAR_4);
 u8 VAR_9 = FUNC_2(VAR_3, VAR_2, VAR_4);

 if(VAR_9 - VAR_5->LegacyHTTxPowerDiff > 0)
  VAR_9 -= VAR_5->LegacyHTTxPowerDiff;
 else
  VAR_9 = 0;

 for(VAR_6 = 0; VAR_6 < 14; VAR_6++)
 {
  VAR_5->TxPowerLevelCCK[VAR_6] = VAR_8;
  VAR_5->TxPowerLevelCCK_A[VAR_6] = VAR_8;
  VAR_5->TxPowerLevelCCK_C[VAR_6] = VAR_8;
  VAR_5->TxPowerLevelOFDM24G[VAR_6] = VAR_9;
  VAR_5->TxPowerLevelOFDM24G_A[VAR_6] = VAR_9;
  VAR_5->TxPowerLevelOFDM24G_C[VAR_6] = VAR_9;

  for (VAR_7 = 0; VAR_7 < 2; VAR_7++)
  {
   VAR_5->RfTxPwrLevelCck[VAR_7][VAR_6] = VAR_8;
   VAR_5->RfTxPwrLevelOfdm1T[VAR_7][VAR_6] = VAR_5->RfTxPwrLevelOfdm2T[VAR_7][VAR_6] = VAR_9;

  }
 }

 FUNC_0(VAR_3, VAR_5->chan);

 return VAR_0;
}
