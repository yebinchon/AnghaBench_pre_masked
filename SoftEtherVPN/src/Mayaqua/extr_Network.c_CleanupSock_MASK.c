
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ socket; int disconnect_lock; int ssl_lock; int lock; struct TYPE_9__* WaitToUseCipher; struct TYPE_9__* CipherName; int * LocalX; int * RemoteX; int * hAcceptEvent; struct TYPE_9__* RemoteHostname; int SendBuf; int * R_UDP_Stack; int * InProcRecvFifo; int * BulkRecvKey; int * BulkSendKey; int * BulkSendTube; int * BulkRecvTube; int * RecvTube; int * SendTube; int * ReverseAcceptEvent; int * ReverseAcceptQueue; int * InProcAcceptEvent; int * InProcAcceptQueue; } ;
typedef TYPE_1__ SOCK ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__) ;
 int VAR_1 ;

void FUNC_20(SOCK *VAR_2)
{

 if (VAR_2 == ((void*)0))
 {
  return;
 }


 FUNC_3(VAR_2);

 if (VAR_2->InProcAcceptQueue != ((void*)0))
 {
  while (1)
  {
   SOCK *VAR_3 = FUNC_8(VAR_2->InProcAcceptQueue);
   if (VAR_3 == ((void*)0))
   {
    break;
   }

   FUNC_3(VAR_3);
   FUNC_13(VAR_3);
  }

  FUNC_11(VAR_2->InProcAcceptQueue);
 }

 if (VAR_2->InProcAcceptEvent != ((void*)0))
 {
  FUNC_9(VAR_2->InProcAcceptEvent);
 }

 if (VAR_2->ReverseAcceptQueue != ((void*)0))
 {
  while (1)
  {
   SOCK *VAR_4 = FUNC_8(VAR_2->ReverseAcceptQueue);
   if (VAR_4 == ((void*)0))
   {
    break;
   }

   FUNC_3(VAR_4);
   FUNC_13(VAR_4);
  }

  FUNC_11(VAR_2->ReverseAcceptQueue);
 }

 if (VAR_2->ReverseAcceptEvent != ((void*)0))
 {
  FUNC_9(VAR_2->ReverseAcceptEvent);
 }

 if (VAR_2->SendTube != ((void*)0))
 {
  FUNC_15(VAR_2->SendTube);
  FUNC_14(VAR_2->SendTube);
 }

 if (VAR_2->RecvTube != ((void*)0))
 {
  FUNC_15(VAR_2->RecvTube);
  FUNC_14(VAR_2->RecvTube);
 }

 if (VAR_2->BulkRecvTube != ((void*)0))
 {
  FUNC_15(VAR_2->BulkRecvTube);
  FUNC_14(VAR_2->BulkRecvTube);
 }

 if (VAR_2->BulkSendTube != ((void*)0))
 {
  FUNC_15(VAR_2->BulkSendTube);
  FUNC_14(VAR_2->BulkSendTube);
 }

 if (VAR_2->BulkSendKey != ((void*)0))
 {
  FUNC_12(VAR_2->BulkSendKey);
 }

 if (VAR_2->BulkRecvKey != ((void*)0))
 {
  FUNC_12(VAR_2->BulkRecvKey);
 }

 if (VAR_2->InProcRecvFifo != ((void*)0))
 {
  FUNC_10(VAR_2->InProcRecvFifo);
 }

 if (VAR_2->R_UDP_Stack != ((void*)0))
 {
  FUNC_6(VAR_2->R_UDP_Stack);
 }




 FUNC_16(VAR_2);


 FUNC_5(VAR_2->SendBuf);
 if (VAR_2->socket != VAR_0)
 {



  FUNC_18(VAR_2->socket);

 }
 FUNC_4(VAR_2->RemoteHostname);
 if (VAR_2->RemoteX != ((void*)0))
 {
  FUNC_7(VAR_2->RemoteX);
  VAR_2->RemoteX = ((void*)0);
 }
 if (VAR_2->LocalX != ((void*)0))
 {
  FUNC_7(VAR_2->LocalX);
  VAR_2->LocalX = ((void*)0);
 }


 if (VAR_2->CipherName != ((void*)0))
 {
  FUNC_4(VAR_2->CipherName);
  VAR_2->CipherName = ((void*)0);
 }

 FUNC_4(VAR_2->WaitToUseCipher);
 FUNC_2(VAR_2->lock);
 FUNC_2(VAR_2->ssl_lock);
 FUNC_2(VAR_2->disconnect_lock);

 FUNC_1(VAR_1);

 FUNC_4(VAR_2);
}
