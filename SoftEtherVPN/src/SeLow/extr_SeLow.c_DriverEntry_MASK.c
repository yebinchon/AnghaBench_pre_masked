
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int t ;
typedef int UNICODE_STRING ;
struct TYPE_22__ {int IsBasicDevice; } ;
struct TYPE_21__ {int (* DriverUnload ) (TYPE_4__*) ;TYPE_3__* MajorFunction; } ;
struct TYPE_18__ {int Size; int Revision; int Type; } ;
struct TYPE_20__ {int MajorNdisVersion; int MinorNdisVersion; TYPE_9__* BasicDevice; int * ProtocolHandle; int AdapterList; TYPE_4__* DriverObject; int SendNetBufferListsCompleteHandler; int ReceiveNetBufferListsHandler; int StatusHandlerEx; int OidRequestCompleteHandler; int UninstallHandler; int NetPnPEventHandler; int CloseAdapterCompleteHandlerEx; int OpenAdapterCompleteHandlerEx; int UnbindAdapterHandlerEx; int BindAdapterHandlerEx; int Name; TYPE_1__ Header; } ;
struct TYPE_19__ {int String; } ;
typedef TYPE_2__ SL_UNICODE ;
typedef int SL_CTX ;
typedef int NDIS_STATUS ;
typedef TYPE_3__ NDIS_PROTOCOL_DRIVER_CHARACTERISTICS ;
typedef int * NDIS_HANDLE ;
typedef TYPE_4__ DRIVER_OBJECT ;
typedef int DEVICE_OBJECT ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_3__*,int **) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_3__ VAR_12 ;
 TYPE_3__ VAR_13 ;
 TYPE_3__ VAR_14 ;
 TYPE_3__ VAR_15 ;
 TYPE_3__ VAR_16 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 TYPE_9__* FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 TYPE_2__* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_3__*,int) ;
 TYPE_3__* VAR_27 ;

NDIS_STATUS FUNC_8(DRIVER_OBJECT *VAR_28, UNICODE_STRING *VAR_29)
{
 NDIS_PROTOCOL_DRIVER_CHARACTERISTICS VAR_30;
 NDIS_STATUS VAR_31 = VAR_8;
 SL_UNICODE *VAR_32 = ((void*)0);
 NDIS_HANDLE VAR_33 = ((void*)0);
 SL_CTX *VAR_34 = ((void*)0);
 DEVICE_OBJECT *VAR_35 = ((void*)0);

 FUNC_7(VAR_27, sizeof(SL_CTX));


 VAR_32 = FUNC_5(VAR_11);
 if (VAR_32 == ((void*)0))
 {
  goto LABEL_CLEANUP;
 }

 FUNC_7(&VAR_30, sizeof(VAR_30));
 VAR_30.Header.Type = VAR_5;
 VAR_30.Header.Revision = VAR_6;
 VAR_30.Header.Size = VAR_7;
 VAR_30.MajorNdisVersion = 6;
 VAR_30.MinorNdisVersion = 20;
 VAR_30.Name = VAR_32->String;

 VAR_30.BindAdapterHandlerEx = VAR_17;
 VAR_30.UnbindAdapterHandlerEx = VAR_25;
 VAR_30.OpenAdapterCompleteHandlerEx = VAR_21;
 VAR_30.CloseAdapterCompleteHandlerEx = VAR_18;
 VAR_30.NetPnPEventHandler = VAR_19;
 VAR_30.UninstallHandler = VAR_26;
 VAR_30.OidRequestCompleteHandler = VAR_20;
 VAR_30.StatusHandlerEx = VAR_24;
 VAR_30.ReceiveNetBufferListsHandler = VAR_22;
 VAR_30.SendNetBufferListsCompleteHandler = VAR_23;


 VAR_27->DriverObject = VAR_28;
 VAR_27->AdapterList = FUNC_4();

 VAR_31 = FUNC_1(((void*)0), &VAR_30, &VAR_33);

 if (FUNC_0(VAR_31))
 {
  VAR_33 = ((void*)0);
  goto LABEL_CLEANUP;
 }

 FUNC_7(VAR_28->MajorFunction, sizeof(VAR_28->MajorFunction));
 VAR_28->MajorFunction[VAR_1] = VAR_14;
 VAR_28->MajorFunction[VAR_0] = VAR_12;
 VAR_28->MajorFunction[VAR_3] = VAR_15;
 VAR_28->MajorFunction[VAR_4] = VAR_16;
 VAR_28->MajorFunction[VAR_2] = VAR_13;
 VAR_28->DriverUnload = FUNC_6;


 VAR_27->ProtocolHandle = VAR_33;


 VAR_27->BasicDevice = FUNC_3(VAR_9, VAR_10);
 if (VAR_27->BasicDevice == ((void*)0))
 {
  VAR_31 = VAR_8;
  goto LABEL_CLEANUP;
 }
 VAR_27->BasicDevice->IsBasicDevice = 1;

LABEL_CLEANUP:

 FUNC_2(VAR_32);

 if (FUNC_0(VAR_31))
 {
  FUNC_6(VAR_28);
 }

 return VAR_31;
}
