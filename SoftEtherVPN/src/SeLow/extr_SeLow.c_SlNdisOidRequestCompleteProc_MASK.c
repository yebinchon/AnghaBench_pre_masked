
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_5__* InformationBuffer; } ;
struct TYPE_8__ {scalar_t__ Oid; } ;
struct TYPE_10__ {TYPE_2__ SET_INFORMATION; TYPE_1__ QUERY_INFORMATION; } ;
struct TYPE_12__ {scalar_t__ RequestType; TYPE_3__ DATA; } ;
struct TYPE_11__ {int NumPendingOidRequests; } ;
typedef TYPE_4__ SL_ADAPTER ;
typedef int NDIS_STATUS ;
typedef TYPE_5__ NDIS_OID_REQUEST ;
typedef scalar_t__ NDIS_HANDLE ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_5__*) ;

void FUNC_2(NDIS_HANDLE VAR_2, NDIS_OID_REQUEST *VAR_3, NDIS_STATUS VAR_4)
{
 SL_ADAPTER *VAR_5 = (SL_ADAPTER *)VAR_2;
 bool VAR_6 = 0;


 if (VAR_3->RequestType == VAR_0)
 {
  if (VAR_3->DATA.QUERY_INFORMATION.Oid == VAR_1)
  {
   VAR_6 = 1;
  }
 }


 if (VAR_6 == 0)
 {
  FUNC_1(VAR_3->DATA.SET_INFORMATION.InformationBuffer);
 }

 FUNC_1(VAR_3);


 FUNC_0(&VAR_5->NumPendingOidRequests);
}
