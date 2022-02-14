
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_14__ {TYPE_6__* InformationBuffer; scalar_t__ InformationBufferLength; void* Oid; } ;
struct TYPE_13__ {scalar_t__ InformationBufferLength; void* InformationBuffer; void* Oid; } ;
struct TYPE_15__ {TYPE_3__ SET_INFORMATION; TYPE_2__ QUERY_INFORMATION; } ;
struct TYPE_12__ {int Size; int Revision; int Type; } ;
struct TYPE_17__ {TYPE_4__ DATA; int RequestType; TYPE_1__ Header; } ;
struct TYPE_16__ {int Halt; int NumPendingOidRequests; int * AdapterHandle; int Lock; } ;
typedef TYPE_5__ SL_ADAPTER ;
typedef scalar_t__ NDIS_STATUS ;
typedef TYPE_6__ NDIS_OID_REQUEST ;
typedef void* NDIS_OID ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int *,TYPE_6__*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* FUNC_3 (void*,scalar_t__) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 TYPE_6__* FUNC_7 (int) ;

void FUNC_8(SL_ADAPTER *VAR_6, bool VAR_7, NDIS_OID VAR_8, void *VAR_9, UINT VAR_10)
{
 NDIS_OID_REQUEST *VAR_11;
 NDIS_STATUS VAR_12;

 if (VAR_6 == ((void*)0) || VAR_9 == ((void*)0) || VAR_10 == 0)
 {
  return;
 }

 if (VAR_6->Halt == 0)
 {
  bool VAR_13 = 0;

  VAR_11 = FUNC_7(sizeof(NDIS_OID_REQUEST));

  VAR_11->Header.Type = VAR_0;
  VAR_11->Header.Revision = VAR_1;
  VAR_11->Header.Size = VAR_2;

  if (VAR_7 == 0)
  {
   VAR_11->RequestType = VAR_4;
   VAR_11->DATA.QUERY_INFORMATION.Oid = VAR_8;
   VAR_11->DATA.QUERY_INFORMATION.InformationBuffer = VAR_9;
   VAR_11->DATA.QUERY_INFORMATION.InformationBufferLength = VAR_10;
  }
  else
  {
   VAR_11->RequestType = VAR_5;
   VAR_11->DATA.SET_INFORMATION.Oid = VAR_8;
   VAR_11->DATA.SET_INFORMATION.InformationBuffer = FUNC_3(VAR_9, VAR_10);
   VAR_11->DATA.SET_INFORMATION.InformationBufferLength = VAR_10;
  }

  FUNC_5(VAR_6->Lock);
  {
   if (VAR_6->AdapterHandle != ((void*)0) && VAR_6->Halt == 0)
   {
    FUNC_1(&VAR_6->NumPendingOidRequests);
    VAR_13 = 1;
   }
  }
  FUNC_6(VAR_6->Lock);

  if (VAR_13)
  {
   VAR_12 = FUNC_2(VAR_6->AdapterHandle, VAR_11);

   if (VAR_12 != VAR_3)
   {
    FUNC_0(&VAR_6->NumPendingOidRequests);
    if (VAR_7)
    {
     FUNC_4(VAR_11->DATA.SET_INFORMATION.InformationBuffer);
    }
    FUNC_4(VAR_11);
   }
  }
  else
  {
   if (VAR_7)
   {
    FUNC_4(VAR_11->DATA.SET_INFORMATION.InformationBuffer);
   }
   FUNC_4(VAR_11);
  }
 }
}
