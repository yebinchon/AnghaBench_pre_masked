
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int bulk_send_key ;
typedef int bulk_recv_key ;
typedef int UINT64 ;
typedef void* UINT ;
typedef int UCHAR ;
struct TYPE_10__ {int Size; int Buf; } ;
struct TYPE_9__ {int NextSendSeqNo; int ServerMode; int Magic_Disconnect; int NextKeepAliveInterval; int Dns_TranId; int BulkNextSeqNo; int * BulkNextIv; void* BulkRecvKey; void* BulkSendKey; void* SendFifo; void* RecvFifo; int ReplyAckList; int * NextIv; int * Key_Recv; int * Key_Send; int * Key_Init; int * Magic_KeepAliveResponse; int * Magic_KeepAliveRequest; void* RecvSegmentList; void* SendSegmentList; void* LatestRecvMyTick; void* LastRecvTick; scalar_t__ LastSentTick; void* YourPort; int YourIp; void* MyPort; int MyIp; } ;
typedef TYPE_1__ RUDP_SESSION ;
typedef int IP ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 () ;
 void* FUNC_3 () ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_3 ;
 int FUNC_10 (int *,int ,int ) ;
 void* FUNC_11 () ;
 int FUNC_12 (TYPE_2__*,int *,int) ;
 int FUNC_13 (TYPE_2__*,char*) ;
 TYPE_1__* FUNC_14 (int) ;

RUDP_SESSION *FUNC_15(bool VAR_4, IP *VAR_5, UINT VAR_6, IP *VAR_7, UINT VAR_8, UCHAR *VAR_9)
{
 RUDP_SESSION *VAR_10;
 UCHAR VAR_11[VAR_3];
 UCHAR VAR_12[VAR_3];
 UCHAR VAR_13[VAR_3];
 UCHAR VAR_14[VAR_3];
 BUF *VAR_15;

 VAR_10 = FUNC_14(sizeof(RUDP_SESSION));

 FUNC_0(&VAR_10->MyIp, VAR_5, sizeof(IP));
 VAR_10->MyPort = VAR_6;

 FUNC_0(&VAR_10->YourIp, VAR_7, sizeof(IP));
 VAR_10->YourPort = VAR_8;

 FUNC_0(VAR_10->Key_Init, VAR_9, VAR_3);
 VAR_10->LastSentTick = 0;
 VAR_10->LastRecvTick = FUNC_11();
 VAR_10->LatestRecvMyTick = FUNC_11();

 VAR_10->NextSendSeqNo = 1;

 VAR_10->ServerMode = VAR_4;

 VAR_10->SendSegmentList = FUNC_5(VAR_0);
 VAR_10->RecvSegmentList = FUNC_5(VAR_0);


 VAR_15 = FUNC_2();
 FUNC_12(VAR_15, VAR_9, VAR_3);
 FUNC_13(VAR_15, "zurukko");
 FUNC_10(VAR_11, VAR_15->Buf, VAR_15->Size);
 FUNC_1(VAR_15);

 VAR_15 = FUNC_2();
 FUNC_12(VAR_15, VAR_9, VAR_3);
 FUNC_12(VAR_15, VAR_11, VAR_3);
 FUNC_13(VAR_15, "yasushineko");
 FUNC_10(VAR_12, VAR_15->Buf, VAR_15->Size);
 FUNC_1(VAR_15);


 VAR_15 = FUNC_2();
 FUNC_12(VAR_15, VAR_9, VAR_3);
 FUNC_13(VAR_15, "Magic_KeepAliveRequest");
 FUNC_10(VAR_10->Magic_KeepAliveRequest, VAR_15->Buf, VAR_15->Size);
 FUNC_1(VAR_15);
 VAR_15 = FUNC_2();
 FUNC_12(VAR_15, VAR_9, VAR_3);
 FUNC_13(VAR_15, "Magic_KeepAliveResponse");
 FUNC_10(VAR_10->Magic_KeepAliveResponse, VAR_15->Buf, VAR_15->Size);
 FUNC_1(VAR_15);

 if (VAR_4 == 0)
 {
  VAR_10->Magic_Disconnect = 0xffffffff00000000ULL | (UINT64)(FUNC_9());
 }

 FUNC_0(VAR_10->Key_Init, VAR_9, VAR_3);

 if (VAR_10->ServerMode)
 {
  FUNC_0(VAR_10->Key_Send, VAR_11, VAR_3);
  FUNC_0(VAR_10->Key_Recv, VAR_12, VAR_3);
 }
 else
 {
  FUNC_0(VAR_10->Key_Send, VAR_12, VAR_3);
  FUNC_0(VAR_10->Key_Recv, VAR_11, VAR_3);
 }

 FUNC_7(VAR_10->NextIv, sizeof(VAR_10->NextIv));

 VAR_10->ReplyAckList = FUNC_4(1);

 VAR_10->NextKeepAliveInterval = VAR_2 + (FUNC_9() % (VAR_1 - VAR_2));

 VAR_10->RecvFifo = FUNC_3();
 VAR_10->SendFifo = FUNC_3();

 VAR_10->Dns_TranId = FUNC_8() % 65535 + 1;


 FUNC_7(VAR_13, sizeof(VAR_13));
 FUNC_7(VAR_14, sizeof(VAR_14));

 VAR_10->BulkSendKey = FUNC_6(VAR_13, sizeof(VAR_13));
 VAR_10->BulkRecvKey = FUNC_6(VAR_14, sizeof(VAR_14));

 FUNC_7(VAR_10->BulkNextIv, sizeof(VAR_10->BulkNextIv));
 VAR_10->BulkNextSeqNo = 1;

 return VAR_10;
}
