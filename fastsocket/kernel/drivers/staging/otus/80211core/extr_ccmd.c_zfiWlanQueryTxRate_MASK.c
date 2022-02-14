
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;
struct TYPE_7__ {scalar_t__ htCtrlBandwidth; TYPE_2__* oppositeInfo; } ;
struct TYPE_8__ {scalar_t__ wlanMode; int txMCS; int CurrentTxRateKbps; TYPE_3__ sta; } ;
struct TYPE_5__ {int flag; int* operationRateSet; int operationRateCount; size_t currentRateIndex; } ;
struct TYPE_6__ {TYPE_1__ rcCell; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

u32_t FUNC_5(zdev_t *VAR_5)
{
 u8_t VAR_6 = 0xff;
 FUNC_3(VAR_5);
 FUNC_1();


 if ((VAR_2->wlanMode == VAR_0) &&
      (FUNC_0(VAR_5))) {
  FUNC_2(VAR_5);

  if (VAR_2->txMCS == 0xff) {
   if ((VAR_2->sta.oppositeInfo[0].rcCell.flag &
       VAR_1) == 0)
    VAR_6 = VAR_2->sta.oppositeInfo[0].rcCell. operationRateSet[VAR_2->sta.oppositeInfo[0]. rcCell.operationRateCount-1];


   else
    VAR_6 = VAR_2->sta.oppositeInfo[0].rcCell. operationRateSet[VAR_2->sta.oppositeInfo[0]. rcCell.currentRateIndex];


  }
  FUNC_4(VAR_5);
 }

 if (VAR_6 != 0xff) {
  if (VAR_2->sta.htCtrlBandwidth)
   return VAR_4[VAR_6];
  else
   return VAR_3[VAR_6];
 } else
  return VAR_2->CurrentTxRateKbps;
}
