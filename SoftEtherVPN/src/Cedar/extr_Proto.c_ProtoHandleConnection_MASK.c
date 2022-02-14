
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_24__ {TYPE_1__* Server; } ;
struct TYPE_23__ {TYPE_4__* impl; } ;
struct TYPE_22__ {int (* SupportedModes ) () ;int (* Init ) (void**,TYPE_6__*,int *,int *) ;int (* ProcessData ) (void*,TYPE_2__*,int *) ;int (* IsOk ) (void*) ;scalar_t__ (* EstablishedSessions ) (void*) ;int (* Free ) (void*) ;int (* BufferLimit ) (void*,int) ;int (* Name ) () ;} ;
struct TYPE_21__ {int LocalPort; int LocalIP; int RemotePort; int RemoteIP; } ;
struct TYPE_20__ {int Data; } ;
struct TYPE_19__ {int DisableOpenVPNServer; } ;
typedef TYPE_2__ TCP_RAW_DATA ;
typedef int SOCK_EVENT ;
typedef TYPE_3__ SOCK ;
typedef TYPE_4__ PROTO_IMPL ;
typedef TYPE_5__ PROTO ;
typedef int INTERRUPT_MANAGER ;
typedef int FIFO ;
typedef TYPE_6__ CEDAR ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 int * FUNC_9 (int ) ;
 int * FUNC_10 () ;
 int * FUNC_11 () ;
 int * FUNC_12 () ;
 TYPE_2__* FUNC_13 (int *,int ,int *,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (int *,int *,scalar_t__ const) ;
 scalar_t__ FUNC_16 (TYPE_3__*,int *,int ,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ const VAR_4 ;
 scalar_t__ FUNC_19 (TYPE_3__*,int ,int,int) ;
 int FUNC_20 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_21 (int ,char*) ;
 int VAR_5 ;
 scalar_t__ const FUNC_22 () ;
 int VAR_6 ;
 int FUNC_23 (int *,scalar_t__) ;
 int FUNC_24 (int ,int *,scalar_t__ const) ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 int FUNC_27 (void**,TYPE_6__*,int *,int *) ;
 int FUNC_28 () ;
 int FUNC_29 (void*,TYPE_2__*,int *) ;
 int FUNC_30 (void*,int) ;
 int FUNC_31 (void*) ;
 scalar_t__ FUNC_32 (void*) ;
 int FUNC_33 (void*) ;

bool FUNC_34(CEDAR *VAR_7, SOCK *VAR_8)
{
 void *VAR_9;
 const PROTO_IMPL *VAR_10;
 const PROTO *VAR_11;

 UCHAR *VAR_12;
 TCP_RAW_DATA *VAR_13;
 FIFO *VAR_14;
 INTERRUPT_MANAGER *VAR_15;
 SOCK_EVENT *VAR_16;

 const UINT64 VAR_17 = FUNC_22() + (UINT64)VAR_1;

 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0))
 {
  return 0;
 }

 VAR_11 = FUNC_14(VAR_8);

 if (VAR_11 == ((void*)0))
 {
  FUNC_0("ProtoHandleConnection(): unrecognized protocol\n");
  return 0;
 }

 VAR_10 = VAR_11->impl;

 if (FUNC_21(VAR_10->Name(), "OpenVPN") == 0 && VAR_7->Server->DisableOpenVPNServer == 1)
 {
  FUNC_0("ProtoHandleConnection(): OpenVPN detected, but it's disabled\n");
  return 0;
 }

 if ((VAR_10->SupportedModes() & VAR_2) == 0)
 {
  return 0;
 }

 VAR_15 = FUNC_11();
 VAR_16 = FUNC_12();

 if (VAR_10->Init != ((void*)0) && VAR_10->Init(&VAR_9, VAR_7, VAR_15, VAR_16) == 0)
 {
  FUNC_0("ProtoHandleConnection(): failed to initialize %s\n", VAR_10->Name());
  FUNC_4(VAR_15);
  FUNC_18(VAR_16);
  return 0;
 }

 FUNC_20(VAR_8, VAR_5);
 FUNC_7(VAR_8, VAR_16);

 VAR_13 = FUNC_13(&VAR_8->RemoteIP, VAR_8->RemotePort, &VAR_8->LocalIP, VAR_8->LocalPort);
 VAR_14 = FUNC_10();

 VAR_12 = FUNC_9(VAR_3);

 FUNC_0("ProtoHandleConnection(): entering main loop\n");


 while (1)
 {
  UINT VAR_18;
  bool VAR_19 = 0;

  while (1)
  {
   const UINT VAR_20 = FUNC_16(VAR_8, VAR_12, VAR_3, 0);

   if (VAR_20 == VAR_4)
   {

    break;
   }
   else if (VAR_20 == 0)
   {

    VAR_19 = 1;
    break;
   }
   else
   {

    FUNC_24(VAR_13->Data, VAR_12, VAR_20);
   }
  }

  if (VAR_10->ProcessData(VAR_9, VAR_13, VAR_14) == 0)
  {
   VAR_19 = 1;
  }


  while (FUNC_2(VAR_14) >= 1)
  {
   const UINT VAR_21 = FUNC_19(VAR_8, FUNC_1(VAR_14), FUNC_2(VAR_14), 0);

   if (VAR_21 == VAR_4)
   {

    break;
   }
   else if (VAR_21 == 0)
   {

    VAR_19 = 1;
    break;
   }
   else
   {

    FUNC_15(VAR_14, ((void*)0), VAR_21);
   }
  }

  VAR_10->BufferLimit(VAR_9, FUNC_2(VAR_14) > VAR_0);

  if (VAR_10->IsOk(VAR_9) == 0)
  {
   if (VAR_10->EstablishedSessions(VAR_9) == 0)
   {
    if (FUNC_22() >= VAR_17)
    {
     FUNC_0("ProtoHandleConnection(): I waited too much for the session to start, I give up!\n");
     VAR_19 = 1;
    }
   }
   else
   {
    FUNC_0("ProtoHandleConnection(): implementation not OK, stopping the server\n");
    VAR_19 = 1;
   }
  }

  if (VAR_19)
  {

   FUNC_0("ProtoHandleConnection(): breaking main loop\n");
   break;
  }


  VAR_18 = FUNC_6(VAR_15);
  VAR_18 = FUNC_8(VAR_18, VAR_6);
  FUNC_23(VAR_16, VAR_18);
 }

 VAR_10->Free(VAR_9);

 FUNC_4(VAR_15);
 FUNC_18(VAR_16);
 FUNC_5(VAR_13);
 FUNC_17(VAR_14);
 FUNC_3(VAR_12);

 return 1;
}
