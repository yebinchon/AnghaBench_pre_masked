
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_5__ {int Size; int Revision; int Type; } ;
struct TYPE_6__ {int CancelOidRequestHandler; int ShutdownHandlerEx; int DevicePnPEventNotifyHandler; int CancelSendHandler; int ReturnNetBufferListsHandler; int RestartHandler; int PauseHandler; int SetOptionsHandler; int SendNetBufferListsHandler; int UnloadHandler; int CheckForHangHandlerEx; int ResetHandlerEx; int OidRequestHandler; int HaltHandlerEx; int InitializeHandlerEx; int MinorNdisVersion; int MajorNdisVersion; TYPE_1__ Header; } ;
typedef int NDIS_STATUS ;
typedef TYPE_2__ NDIS_MINIPORT_DRIVER_CHARACTERISTICS ;
typedef int DRIVER_OBJECT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *,TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int*,int*,int *,int *) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

NDIS_STATUS FUNC_5(DRIVER_OBJECT *VAR_25, UNICODE_STRING *VAR_26)
{
 NDIS_MINIPORT_DRIVER_CHARACTERISTICS VAR_27;
 ULONG VAR_28 = 0, VAR_29 = 0;
 NDIS_STATUS VAR_30;


 if (FUNC_2() == VAR_0)
 {

  return VAR_22;
 }

 VAR_23 = 0;


 FUNC_4(&VAR_28, &VAR_29, ((void*)0), ((void*)0));

 if (VAR_28 >= 7 || (VAR_28 == 6 && VAR_29 >= 2))
 {

  VAR_23 = 1;
 }


 FUNC_3(&VAR_27, sizeof(NDIS_MINIPORT_DRIVER_CHARACTERISTICS));

 VAR_27.Header.Type = VAR_2;
 VAR_27.Header.Revision = VAR_1;
 VAR_27.Header.Size = VAR_3;

 VAR_27.MajorNdisVersion = VAR_4;
 VAR_27.MinorNdisVersion = VAR_5;


 VAR_27.InitializeHandlerEx = VAR_12;
 VAR_27.HaltHandlerEx = VAR_11;
 VAR_27.OidRequestHandler = VAR_13;
 VAR_27.ResetHandlerEx = VAR_15;
 VAR_27.CheckForHangHandlerEx = VAR_8;
 VAR_27.UnloadHandler = VAR_10;
 VAR_27.SendNetBufferListsHandler = VAR_18;

 VAR_27.SetOptionsHandler = VAR_19;
 VAR_27.PauseHandler = VAR_14;
 VAR_27.RestartHandler = VAR_16;
 VAR_27.ReturnNetBufferListsHandler = VAR_17;
 VAR_27.CancelSendHandler = VAR_7;
 VAR_27.DevicePnPEventNotifyHandler = VAR_9;
 VAR_27.ShutdownHandlerEx = VAR_20;
 VAR_27.CancelOidRequestHandler = VAR_6;

 VAR_30 = FUNC_1(VAR_25, VAR_26,
  ((void*)0), &VAR_27, &VAR_24);

 if (FUNC_0(VAR_30))
 {

  return VAR_22;
 }


 return VAR_21;
}
