
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int IsEnumCompleted; } ;
struct TYPE_5__ {scalar_t__ NetEvent; } ;
struct TYPE_6__ {TYPE_1__ NetPnPEvent; } ;
typedef int SL_ADAPTER ;
typedef TYPE_2__ NET_PNP_EVENT_NOTIFICATION ;
typedef int NDIS_STATUS ;
typedef scalar_t__ NDIS_HANDLE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;

NDIS_STATUS FUNC_0(NDIS_HANDLE VAR_3, NET_PNP_EVENT_NOTIFICATION *VAR_4)
{
 SL_ADAPTER *VAR_5 = (SL_ADAPTER *)VAR_3;

 if (VAR_4 != ((void*)0))
 {
  if (VAR_4->NetPnPEvent.NetEvent == VAR_1)
  {
   VAR_2->IsEnumCompleted = 1;
  }
 }

 return VAR_0;
}
