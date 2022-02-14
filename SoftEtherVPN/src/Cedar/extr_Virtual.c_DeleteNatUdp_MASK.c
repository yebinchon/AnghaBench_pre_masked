
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int NatTable; } ;
typedef TYPE_1__ VH ;
struct TYPE_9__ {int lock; int * Sock; int UdpSendQueue; int UdpRecvQueue; int Id; } ;
typedef TYPE_2__ NAT_ENTRY ;
typedef int BLOCK ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,char*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

void FUNC_10(VH *VAR_0, NAT_ENTRY *VAR_1)
{
 BLOCK *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_7(VAR_0, "LH_NAT_UDP_DELETED", VAR_1->Id);


 while ((VAR_2 = FUNC_6(VAR_1->UdpRecvQueue)))
 {
  FUNC_5(VAR_2);
 }
 FUNC_8(VAR_1->UdpRecvQueue);
 while ((VAR_2 = FUNC_6(VAR_1->UdpSendQueue)))
 {
  FUNC_5(VAR_2);
 }
 FUNC_8(VAR_1->UdpSendQueue);


 if (VAR_1->Sock != ((void*)0))
 {
  FUNC_3(VAR_1->Sock);
  FUNC_9(VAR_1->Sock);
  VAR_1->Sock = ((void*)0);
 }

 FUNC_2(VAR_1->lock);


 FUNC_1(VAR_0->NatTable, VAR_1);


 FUNC_4(VAR_1);

 FUNC_0("NAT: DeleteNatUdp\n");

}
