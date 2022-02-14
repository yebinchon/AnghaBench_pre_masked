
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_16__ {int ServerMode; int ConnectingSocks; TYPE_3__* Session; int CurrentNumConnection; TYPE_2__* Tcp; scalar_t__ Halt; } ;
struct TYPE_15__ {scalar_t__ Direction; scalar_t__ DisconnectTick; } ;
struct TYPE_14__ {int SessionTimeOuted; int Cancel1; scalar_t__ HalfConnection; TYPE_1__* ClientOption; } ;
struct TYPE_13__ {int TcpSockList; } ;
struct TYPE_12__ {int ConnectionDisconnectSpan; } ;
typedef int THREAD ;
typedef TYPE_4__ TCPSOCK ;
typedef int SOCK ;
typedef int PACK ;
typedef TYPE_5__ CONNECTION ;


 int FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int *) ;
 int FUNC_4 (TYPE_5__*,int *) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 TYPE_4__* FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,char*) ;
 int FUNC_16 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_17 () ;
 int FUNC_18 (int ) ;

bool FUNC_19(CONNECTION *VAR_3, THREAD *VAR_4)
{
 SOCK *VAR_5;
 PACK *VAR_6;
 TCPSOCK *VAR_7;
 UINT VAR_8;
 UINT VAR_9;


 if (VAR_3 == ((void*)0))
 {
  return 0;
 }


 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 == ((void*)0))
 {

  return 0;
 }

 if (VAR_3->Halt)
 {
  goto CLEANUP;
 }


 FUNC_7("Uploading Signature...\n");
 if (FUNC_5(VAR_5) == 0)
 {
  goto CLEANUP;
 }

 if (VAR_3->Halt)
 {

  goto CLEANUP;
 }


 FUNC_7("Downloading Hello...\n");
 if (FUNC_3(VAR_3, VAR_5) == 0)
 {
  goto CLEANUP;
 }

 if (VAR_3->Halt)
 {

  goto CLEANUP;
 }


 if (FUNC_4(VAR_3, VAR_5) == 0)
 {

  goto CLEANUP;
 }


 VAR_6 = FUNC_12(VAR_5);
 if (VAR_6 == ((void*)0))
 {

  goto CLEANUP;
 }

 VAR_8 = FUNC_11(VAR_6);
 VAR_9 = FUNC_15(VAR_6, "direction");

 FUNC_10(VAR_6);
 VAR_6 = ((void*)0);

 if (VAR_8 != 0)
 {

  FUNC_7("Additional Connect Error: %u\n", VAR_8);
  if (VAR_8 == VAR_1 || VAR_8 == VAR_0)
  {

   VAR_3->Session->SessionTimeOuted = 1;
  }
  goto CLEANUP;
 }

 FUNC_7("Additional Connect Succeed!\n");



 VAR_7 = FUNC_14(VAR_5);

 if (VAR_3->ServerMode == 0)
 {
  if (VAR_3->Session->ClientOption->ConnectionDisconnectSpan != 0)
  {
   VAR_7->DisconnectTick = FUNC_17() + VAR_3->Session->ClientOption->ConnectionDisconnectSpan * (UINT64)1000;
  }
 }

 FUNC_13(VAR_3->Tcp->TcpSockList);
 {
  VAR_7->Direction = VAR_9;
  FUNC_0(VAR_3->Tcp->TcpSockList, VAR_7);
 }
 FUNC_18(VAR_3->Tcp->TcpSockList);
 FUNC_7("TCP Connection Incremented: %u\n", FUNC_6(VAR_3->CurrentNumConnection));

 if (VAR_3->Session->HalfConnection)
 {
  FUNC_7("New Half Connection: %s\n",
   VAR_9 == VAR_2 ? "TCP_SERVER_TO_CLIENT" : "TCP_CLIENT_TO_SERVER"
   );
 }


 FUNC_1(VAR_3->Session->Cancel1);


 FUNC_13(VAR_3->ConnectingSocks);
 {
  if (FUNC_8(VAR_3->ConnectingSocks, VAR_5))
  {
   FUNC_16(VAR_5);
  }
 }
 FUNC_18(VAR_3->ConnectingSocks);
 FUNC_16(VAR_5);
 return 1;

CLEANUP:

 FUNC_9(VAR_5);
 FUNC_13(VAR_3->ConnectingSocks);
 {
  if (FUNC_8(VAR_3->ConnectingSocks, VAR_5))
  {
   FUNC_16(VAR_5);

  }
 }
 FUNC_18(VAR_3->ConnectingSocks);
 FUNC_16(VAR_5);
 return 0;
}
