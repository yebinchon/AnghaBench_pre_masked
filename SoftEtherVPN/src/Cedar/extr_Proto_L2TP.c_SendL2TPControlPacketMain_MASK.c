
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ SrcPort; scalar_t__ Data; } ;
typedef TYPE_2__ UDPPACKET ;
typedef int UCHAR ;
struct TYPE_12__ {TYPE_1__* Buf; } ;
struct TYPE_11__ {scalar_t__ LastNr; int ClientPort; int ClientIp; int ServerPort; int ServerIp; } ;
struct TYPE_9__ {int Size; int Buf; } ;
typedef TYPE_3__ L2TP_TUNNEL ;
typedef int L2TP_SERVER ;
typedef TYPE_4__ L2TP_QUEUE ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int *,int ,int *,int ,int ,int ) ;
 int FUNC_3 (int *,scalar_t__) ;

void FUNC_4(L2TP_SERVER *VAR_1, L2TP_TUNNEL *VAR_2, L2TP_QUEUE *VAR_3)
{
 UDPPACKET *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_4 = FUNC_2(&VAR_2->ServerIp, VAR_2->ServerPort, &VAR_2->ClientIp, VAR_2->ClientPort,
  FUNC_0(VAR_3->Buf->Buf, VAR_3->Buf->Size), VAR_3->Buf->Size);


 FUNC_3(((UCHAR *)VAR_4->Data) + (VAR_4->SrcPort == VAR_0 ? 14 : 10), VAR_2->LastNr + 1);

 FUNC_1(VAR_1, VAR_4);
}
