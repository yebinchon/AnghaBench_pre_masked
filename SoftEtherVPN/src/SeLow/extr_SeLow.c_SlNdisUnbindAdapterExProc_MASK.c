
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {int NumBoundAdapters; int AdapterList; } ;
struct TYPE_7__ {int Halt; int IsClosePending; int NumPendingOidRequests; int NumPendingSendPackets; int * UnbindContext; int Lock; int * AdapterHandle; TYPE_1__* Device; } ;
struct TYPE_6__ {int Halting; } ;
typedef TYPE_2__ SL_ADAPTER ;
typedef scalar_t__ NDIS_STATUS ;
typedef int * NDIS_HANDLE ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 TYPE_3__* VAR_2 ;

NDIS_STATUS FUNC_8(NDIS_HANDLE VAR_3, NDIS_HANDLE VAR_4)
{
 NDIS_STATUS VAR_5;
 SL_ADAPTER *VAR_6 = (SL_ADAPTER *)VAR_4;
 UINT VAR_7;
 NDIS_HANDLE VAR_8 = ((void*)0);

 if (VAR_6->Halt)
 {

 }

 VAR_8 = VAR_6->AdapterHandle;
 VAR_6->Halt = 1;
 if (VAR_6->Device != ((void*)0))
 {
  VAR_6->Device->Halting = 1;
 }
 VAR_6->AdapterHandle = ((void*)0);

 FUNC_3(VAR_6->Lock);
 {
 }
 FUNC_6(VAR_6->Lock);

 VAR_6->UnbindContext = VAR_3;
 VAR_6->IsClosePending = 1;


 FUNC_4(VAR_2->AdapterList);
 {
  FUNC_2(VAR_2->AdapterList, VAR_6);
 }
 FUNC_7(VAR_2->AdapterList);

 for (VAR_7 = 0;VAR_7 < 32;VAR_7++)
 {

  while (1)
  {
   UINT VAR_9;

   VAR_9 = VAR_6->NumPendingOidRequests;

   if (VAR_9 == 0)
   {
    break;
   }
   else
   {
    VAR_7 = 0;
   }


  }


  while (1)
  {
   UINT VAR_10;

   VAR_10 = VAR_6->NumPendingSendPackets;

   if (VAR_10 == 0)
   {
    break;
   }
   else
   {
    VAR_7 = 0;
   }


  }

 }

 VAR_5 = FUNC_1(VAR_8);

 if (VAR_5 != VAR_0)
 {
  VAR_6->IsClosePending = 0;
  FUNC_5(VAR_6);

  VAR_5 = VAR_1;

  FUNC_0(&VAR_2->NumBoundAdapters);
 }

 return VAR_5;
}
