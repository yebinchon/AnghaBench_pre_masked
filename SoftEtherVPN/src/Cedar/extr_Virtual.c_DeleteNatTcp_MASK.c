
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int NatTable; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT ;
struct TYPE_11__ {int NatTcpCancelFlag; int lock; int * RecvFifo; int * SendFifo; int * TcpRecvList; int * TcpRecvWindow; int * Sock; int * NatTcpConnectThread; int Id; } ;
typedef TYPE_2__ NAT_ENTRY ;
typedef TYPE_2__ IP_PART ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;

void FUNC_13(VH *VAR_1, NAT_ENTRY *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_7(VAR_1, "LH_NAT_TCP_DELETED", VAR_2->Id);


 if (VAR_2->NatTcpConnectThread != ((void*)0))
 {
  VAR_2->NatTcpCancelFlag = 1;

  FUNC_12(VAR_2->NatTcpConnectThread, VAR_0);
  FUNC_11(VAR_2->NatTcpConnectThread);
  VAR_2->NatTcpConnectThread = ((void*)0);
 }
 if (VAR_2->Sock != ((void*)0))
 {

  FUNC_3(VAR_2->Sock);
  FUNC_10(VAR_2->Sock);
  VAR_2->Sock = ((void*)0);
 }


 if (VAR_2->TcpRecvWindow != ((void*)0))
 {
  FUNC_8(VAR_2->TcpRecvWindow);
  VAR_2->TcpRecvWindow = ((void*)0);
 }


 if (VAR_2->TcpRecvList != ((void*)0))
 {
  UINT VAR_3;
  for (VAR_3 = 0;VAR_3 < FUNC_6(VAR_2->TcpRecvList);VAR_3++)
  {
   IP_PART *VAR_4 = FUNC_5(VAR_2->TcpRecvList, VAR_3);
   FUNC_4(VAR_4);
  }
  FUNC_9(VAR_2->TcpRecvList);
  VAR_2->TcpRecvList = ((void*)0);
 }


 FUNC_8(VAR_2->SendFifo);
 FUNC_8(VAR_2->RecvFifo);


 FUNC_1(VAR_1->NatTable, VAR_2);

 FUNC_2(VAR_2->lock);


 FUNC_4(VAR_2);

 FUNC_0("NAT_ENTRY: DeleteNatTcp\n");
}
