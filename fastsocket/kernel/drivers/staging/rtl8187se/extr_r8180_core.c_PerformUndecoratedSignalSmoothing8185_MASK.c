
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {int bCurCCKPkt; int UndecoratedSmoothedSS; int SignalStrength; int UndercorateSmoothedRxPower; int RxPower; scalar_t__ CurCCKRSSI; scalar_t__ RSSI; } ;



void FUNC_0(struct r8180_priv *VAR_0,
        bool VAR_1)
{

 VAR_0->bCurCCKPkt = VAR_1;

 if (VAR_0->UndecoratedSmoothedSS >= 0)
  VAR_0->UndecoratedSmoothedSS = ( (VAR_0->UndecoratedSmoothedSS * 5) + (VAR_0->SignalStrength * 10) ) / 6;
 else
  VAR_0->UndecoratedSmoothedSS = VAR_0->SignalStrength * 10;

 VAR_0->UndercorateSmoothedRxPower = ( (VAR_0->UndercorateSmoothedRxPower * 50) + (VAR_0->RxPower* 11)) / 60;

 if (VAR_1)
  VAR_0->CurCCKRSSI = VAR_0->RSSI;
 else
  VAR_0->CurCCKRSSI = 0;
}
