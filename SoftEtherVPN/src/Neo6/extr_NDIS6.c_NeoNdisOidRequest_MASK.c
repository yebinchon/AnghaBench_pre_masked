
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_7__ {int BytesNeeded; int InformationBufferLength; int InformationBuffer; int Oid; } ;
struct TYPE_6__ {int BytesNeeded; int BytesWritten; int InformationBufferLength; int InformationBuffer; int Oid; } ;
struct TYPE_8__ {TYPE_2__ SET_INFORMATION; TYPE_1__ QUERY_INFORMATION; } ;
struct TYPE_9__ {int RequestType; TYPE_3__ DATA; } ;
typedef TYPE_4__* PNDIS_OID_REQUEST ;
typedef int NDIS_STATUS ;
typedef int NDIS_HANDLE ;


 int VAR_0 ;



 int FUNC_0 (int ,int ,int ,int ,int *,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int *,int *) ;
 int VAR_1 ;

NDIS_STATUS FUNC_2(NDIS_HANDLE VAR_2,
         PNDIS_OID_REQUEST VAR_3)
{
 NDIS_STATUS VAR_4 = VAR_1;
 ULONG VAR_5 = 0;

 switch (VAR_3->RequestType)
 {
 case 130:
 case 129:
  VAR_4 = FUNC_0(VAR_2,
   VAR_3->DATA.QUERY_INFORMATION.Oid,
   VAR_3->DATA.QUERY_INFORMATION.InformationBuffer,
   VAR_3->DATA.QUERY_INFORMATION.InformationBufferLength,
   &VAR_3->DATA.QUERY_INFORMATION.BytesWritten,
   &VAR_3->DATA.QUERY_INFORMATION.BytesNeeded);
  break;

 case 128:
  VAR_4 = FUNC_1(VAR_2,
   VAR_3->DATA.SET_INFORMATION.Oid,
   VAR_3->DATA.SET_INFORMATION.InformationBuffer,
   VAR_3->DATA.SET_INFORMATION.InformationBufferLength,
   &VAR_5,
   &VAR_3->DATA.SET_INFORMATION.BytesNeeded);
  break;

 default:
  VAR_4 = VAR_0;
  break;
 }

 return VAR_4;
}
