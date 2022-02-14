
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct r8192_priv {TYPE_2__* ieee80211; } ;
struct TYPE_3__ {size_t SlotNum; scalar_t__* RxDataNum; scalar_t__* RxBcnNum; scalar_t__ NumRecvDataInPeriod; scalar_t__ NumRecvBcnInPeriod; int SlotIndex; } ;
struct TYPE_4__ {TYPE_1__ LinkDetectInfo; } ;



__attribute__((used)) static void FUNC_0(
 struct r8192_priv *VAR_0,
 u32* VAR_1,
 u32* VAR_2
)
{
 u16 VAR_3;
 u8 VAR_4;

 *VAR_1 = 0;
 *VAR_2 = 0;

 VAR_3 = (VAR_0->ieee80211->LinkDetectInfo.SlotIndex++)%(VAR_0->ieee80211->LinkDetectInfo.SlotNum);
 VAR_0->ieee80211->LinkDetectInfo.RxBcnNum[VAR_3] = VAR_0->ieee80211->LinkDetectInfo.NumRecvBcnInPeriod;
 VAR_0->ieee80211->LinkDetectInfo.RxDataNum[VAR_3] = VAR_0->ieee80211->LinkDetectInfo.NumRecvDataInPeriod;
 for( VAR_4=0; VAR_4<VAR_0->ieee80211->LinkDetectInfo.SlotNum; VAR_4++ ){
  *VAR_1 += VAR_0->ieee80211->LinkDetectInfo.RxBcnNum[VAR_4];
  *VAR_2 += VAR_0->ieee80211->LinkDetectInfo.RxDataNum[VAR_4];
 }
}
