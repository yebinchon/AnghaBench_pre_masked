
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u32_t ;
struct TYPE_4__ {int RxMacStatus; } ;
struct TYPE_5__ {TYPE_1__ Data; } ;
struct zsAdditionInfo {int* PlcpHeader; TYPE_2__ Tail; } ;
struct TYPE_6__ {int modulationType; int rateField; int rxInfo; int CurrentRxRateUpdated; scalar_t__ CurrentRxRateKbps; } ;


 TYPE_3__* VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t *VAR_1, struct zsAdditionInfo *VAR_2)
{
 u32_t VAR_3;
 FUNC_1(VAR_1);
 if ((VAR_2->Tail.Data.RxMacStatus & 0x10) == 0) {

  VAR_0->modulationType = VAR_2->Tail.Data.RxMacStatus & 0x03;
  switch (VAR_0->modulationType) {

  case 0x0:
   VAR_0->rateField = VAR_2->PlcpHeader[0] & 0xff;
   VAR_0->rxInfo = 0;
   break;

  case 0x1:
   VAR_0->rateField = VAR_2->PlcpHeader[0] & 0x0f;
   VAR_0->rxInfo = 0;
   break;

  case 0x2:
   VAR_0->rateField = VAR_2->PlcpHeader[3];
   VAR_0->rxInfo = VAR_2->PlcpHeader[6];
   break;
  default:
   break;
  }

  VAR_3 = FUNC_0(VAR_1);
  if (VAR_0->CurrentRxRateUpdated == 1) {
   if (VAR_3 > VAR_0->CurrentRxRateKbps)
    VAR_0->CurrentRxRateKbps = VAR_3;
  } else {
   VAR_0->CurrentRxRateKbps = VAR_3;
   VAR_0->CurrentRxRateUpdated = 1;
  }
 }
}
