
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {int RFProgType; int rf_chip; int InitialGain; int InitialGainBackUp; scalar_t__ bTxPowerTrack; scalar_t__ bDigMechanism; int ReceiveConfig; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_1 ;


 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,int ,int ) ;

void
FUNC_6(
 struct net_device *VAR_2
 )
{
 struct r8180_priv *VAR_3 = (struct r8180_priv *)FUNC_3(VAR_2);
       FUNC_5(VAR_2, VAR_1, VAR_3->ReceiveConfig);
    VAR_3->RFProgType = FUNC_4(VAR_2, VAR_0) & 0x03;

 switch(VAR_3->rf_chip)
 {
 case 129:
 case 128:
  FUNC_2( VAR_2);
  break;
 }


 if(VAR_3->bDigMechanism)
 {
  if(VAR_3->InitialGain == 0)
   VAR_3->InitialGain = 4;

 }






 if(VAR_3->bTxPowerTrack)
  FUNC_0(VAR_2);


 VAR_3->InitialGainBackUp= VAR_3->InitialGain;
 FUNC_1(VAR_2);

 return;
}
