
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef size_t UINT ;
struct TYPE_14__ {int* addr; } ;
struct TYPE_13__ {size_t InterfaceID; size_t Metric; scalar_t__ InnerScore; size_t OldIfMetric; int PPPConnection; TYPE_3__ DestMask; TYPE_3__ GatewayIP; TYPE_3__ DestIP; int LocalRouting; } ;
struct TYPE_12__ {size_t NumEntry; TYPE_2__** Entry; } ;
typedef TYPE_1__ ROUTE_TABLE ;
typedef TYPE_2__ ROUTE_ENTRY ;
typedef TYPE_3__ IP ;


 int FUNC_0 (TYPE_3__*,TYPE_3__*,int) ;
 size_t FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 () ;
 TYPE_2__* FUNC_4 (int) ;

ROUTE_ENTRY *FUNC_5(ROUTE_TABLE *VAR_0, IP *VAR_1, UINT VAR_2)
{
 UINT VAR_3;
 ROUTE_ENTRY *VAR_4 = ((void*)0);
 ROUTE_ENTRY *VAR_5 = ((void*)0);
 UINT64 VAR_6 = 0;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 if (FUNC_2(VAR_1))
 {

  return ((void*)0);
 }




 for (VAR_3 = 0;VAR_3 < VAR_0->NumEntry;VAR_3++)
 {
  ROUTE_ENTRY *VAR_7 = VAR_0->Entry[VAR_3];
  UINT VAR_8, VAR_9, VAR_10;

  VAR_8 = FUNC_1(VAR_1);
  VAR_9 = FUNC_1(&VAR_7->DestIP);
  VAR_10 = FUNC_1(&VAR_7->DestMask);

  if (VAR_2 != 0)
  {
   if (VAR_7->InterfaceID == VAR_2)
   {
    continue;
   }
  }


  if ((VAR_8 & VAR_10) == (VAR_9 & VAR_10))
  {

   UINT VAR_11 = VAR_10;
   UINT VAR_12 = 0xFFFFFFFF - VAR_7->Metric;
   UINT64 VAR_13 = (UINT64)VAR_11 * (UINT64)0x80000000 * (UINT64)2 + (UINT64)VAR_12;
   if (VAR_13 == 0)
   {
    VAR_13 = 1;
   }

   VAR_7->InnerScore = VAR_13;
  }
 }

 VAR_5 = ((void*)0);


 for (VAR_3 = 0;VAR_3 < VAR_0->NumEntry;VAR_3++)
 {
  ROUTE_ENTRY *VAR_14 = VAR_0->Entry[VAR_3];

  if (VAR_14->InnerScore != 0)
  {
   if (VAR_14->InnerScore >= VAR_6)
   {
    VAR_5 = VAR_14;
    VAR_6 = VAR_14->InnerScore;
   }
  }
 }

 if (VAR_5 != ((void*)0))
 {
  UINT VAR_15, VAR_16, VAR_17;


  VAR_4 = FUNC_4(sizeof(ROUTE_ENTRY));

  FUNC_0(&VAR_4->DestIP, VAR_1, sizeof(IP));
  VAR_4->DestMask.addr[0] = 255;
  VAR_4->DestMask.addr[1] = 255;
  VAR_4->DestMask.addr[2] = 255;
  VAR_4->DestMask.addr[3] = 255;
  FUNC_0(&VAR_4->GatewayIP, &VAR_5->GatewayIP, sizeof(IP));
  VAR_4->InterfaceID = VAR_5->InterfaceID;
  VAR_4->LocalRouting = VAR_5->LocalRouting;
  VAR_4->OldIfMetric = VAR_5->Metric;
  VAR_4->Metric = 1;
  VAR_4->PPPConnection = VAR_5->PPPConnection;


  VAR_15 = FUNC_1(&VAR_5->DestIP);
  VAR_16 = FUNC_1(&VAR_5->GatewayIP);
  VAR_17 = FUNC_1(&VAR_5->DestMask);
  if ((VAR_15 & VAR_17) == (VAR_16 & VAR_17))
  {







  }
 }

 return VAR_4;
}
