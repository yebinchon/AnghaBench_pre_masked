
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8180_priv {int AdRxSignalStrength; int AdAuxAntennaRxOkCnt; int AdMainAntennaRxOkCnt; scalar_t__ LastRxPktAntenna; int AdRxOkCnt; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;

void
FUNC_1(
 struct net_device *VAR_0,
 u8 VAR_1
 )
{
 struct r8180_priv *VAR_2 = (struct r8180_priv *)FUNC_0(VAR_0);



 VAR_2->AdRxOkCnt++;

 if( VAR_2->AdRxSignalStrength != -1)
 {
  VAR_2->AdRxSignalStrength = ((VAR_2->AdRxSignalStrength*7) + (VAR_1*3)) / 10;
 }
 else
 {
  VAR_2->AdRxSignalStrength = VAR_1;
 }

 if( VAR_2->LastRxPktAntenna )
  VAR_2->AdMainAntennaRxOkCnt++;
 else
  VAR_2->AdAuxAntennaRxOkCnt++;


}
