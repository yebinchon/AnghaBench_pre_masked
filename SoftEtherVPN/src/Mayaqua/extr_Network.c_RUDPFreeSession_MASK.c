
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int BulkRecvKey; int BulkSendKey; int SendFifo; int RecvFifo; int ReplyAckList; int * TcpSock; int RecvSegmentList; int SendSegmentList; } ;
typedef TYPE_1__ RUDP_SESSION ;
typedef TYPE_1__ RUDP_SEGMENT ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

void FUNC_10(RUDP_SESSION *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0("RUDPFreeSession %X\n", VAR_0);

 for (VAR_1 = 0;VAR_1 < FUNC_4(VAR_0->SendSegmentList);VAR_1++)
 {
  RUDP_SEGMENT *VAR_2 = FUNC_3(VAR_0->SendSegmentList, VAR_1);

  FUNC_2(VAR_2);
 }

 FUNC_7(VAR_0->SendSegmentList);

 for (VAR_1 = 0;VAR_1 < FUNC_4(VAR_0->RecvSegmentList);VAR_1++)
 {
  RUDP_SEGMENT *VAR_3 = FUNC_3(VAR_0->RecvSegmentList, VAR_1);

  FUNC_2(VAR_3);
 }

 FUNC_7(VAR_0->RecvSegmentList);

 if (VAR_0->TcpSock != ((void*)0))
 {
  FUNC_1(VAR_0->TcpSock);
  FUNC_9(VAR_0->TcpSock);
 }

 FUNC_6(VAR_0->ReplyAckList);

 FUNC_5(VAR_0->RecvFifo);
 FUNC_5(VAR_0->SendFifo);

 FUNC_8(VAR_0->BulkSendKey);
 FUNC_8(VAR_0->BulkRecvKey);

 FUNC_2(VAR_0);
}
