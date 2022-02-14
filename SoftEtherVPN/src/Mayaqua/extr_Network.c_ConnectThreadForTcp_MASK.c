
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int hostname ;
struct TYPE_10__ {int Delay; int* CancelFlag; int Tcp_InNegotiation; int Ok; int Finished; int FinishEvent; int FinishedTick; TYPE_1__* Result_Tcp_Sock; int CancelLock; TYPE_1__* CancelDisconnectSock; int Hostname; scalar_t__ Tcp_TryStartSsl; int Timeout; int Port; int Ip; } ;
struct TYPE_9__ {int ref; } ;
typedef int THREAD ;
typedef TYPE_1__ SOCK ;
typedef TYPE_2__ CONNECT_TCP_RUDP_PARAM ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (char*,int ,int ,int*,int *,int *,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_5 (char*,int,int *) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,int *,int *,int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int,int*) ;

void FUNC_14(THREAD *VAR_2, void *VAR_3)
{
 SOCK *VAR_4;
 char VAR_5[VAR_1];
 CONNECT_TCP_RUDP_PARAM *VAR_6 = (CONNECT_TCP_RUDP_PARAM *)VAR_3;
 if (VAR_2 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return;
 }


 if (VAR_6->Delay >= 1)
 {
  FUNC_13(((void*)0), VAR_6->Delay, VAR_6->CancelFlag);
 }


 FUNC_5(VAR_5, sizeof(VAR_5), &VAR_6->Ip);
 VAR_4 = FUNC_1(VAR_5, VAR_6->Port, VAR_6->Timeout, VAR_6->CancelFlag, ((void*)0), ((void*)0), 0, 1);

 if (VAR_4 != ((void*)0) && VAR_6->Tcp_TryStartSsl)
 {
  bool VAR_7 = 0;

  VAR_6->Tcp_InNegotiation = 1;


  FUNC_6(VAR_6->CancelLock);
  {
   if ((*VAR_6->CancelFlag) == 0)
   {
    VAR_6->CancelDisconnectSock = VAR_4;
    FUNC_0(VAR_4->ref);
   }
   else
   {
    FUNC_2("User Cancel to StartSSL.\n");
    goto LABEL_CANCEL;
   }
  }
  FUNC_12(VAR_6->CancelLock);


  VAR_7 = FUNC_10(VAR_4, ((void*)0), ((void*)0), 0, VAR_6->Hostname);

  if (VAR_7)
  {

   FUNC_9(VAR_4, (10 * 1000));
   VAR_7 = FUNC_3(VAR_4);
   FUNC_9(VAR_4, VAR_0);

   if (VAR_7 == 0)
   {
    FUNC_2("DetectIsServerSoftEtherVPN Error.\n");
   }
  }

  FUNC_6(VAR_6->CancelLock);
  {
   FUNC_7(VAR_6->CancelDisconnectSock);
   VAR_6->CancelDisconnectSock = ((void*)0);
  }
LABEL_CANCEL:
  FUNC_12(VAR_6->CancelLock);

  if (VAR_7 == 0)
  {

   FUNC_4(VAR_4);
   FUNC_7(VAR_4);

   FUNC_2("Fail to StartSSL.\n");

   VAR_4 = ((void*)0);
  }
 }

 VAR_6->Result_Tcp_Sock = VAR_4;
 VAR_6->Ok = (VAR_6->Result_Tcp_Sock == ((void*)0) ? 0 : 1);
 VAR_6->FinishedTick = FUNC_11();
 VAR_6->Finished = 1;
 VAR_6->Tcp_InNegotiation = 0;

 FUNC_8(VAR_6->FinishEvent);
}
