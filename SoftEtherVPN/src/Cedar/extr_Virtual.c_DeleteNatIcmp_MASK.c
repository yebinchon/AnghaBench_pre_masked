
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int NatTable; } ;
typedef TYPE_1__ VH ;
struct TYPE_8__ {int lock; int * Sock; struct TYPE_8__* IcmpOriginalCopy; int * IcmpResponseBlock; int * IcmpQueryBlock; int UdpSendQueue; int UdpRecvQueue; } ;
typedef TYPE_2__ NAT_ENTRY ;
typedef int BLOCK ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

void FUNC_9(VH *VAR_0, NAT_ENTRY *VAR_1)
{
 BLOCK *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }




 while ((VAR_2 = FUNC_6(VAR_1->UdpRecvQueue)))
 {
  FUNC_5(VAR_2);
 }
 FUNC_7(VAR_1->UdpRecvQueue);
 while ((VAR_2 = FUNC_6(VAR_1->UdpSendQueue)))
 {
  FUNC_5(VAR_2);
 }
 FUNC_7(VAR_1->UdpSendQueue);

 if (VAR_1->IcmpQueryBlock != ((void*)0))
 {
  FUNC_5(VAR_1->IcmpQueryBlock);
 }

 if (VAR_1->IcmpResponseBlock != ((void*)0))
 {
  FUNC_5(VAR_1->IcmpResponseBlock);
 }

 if (VAR_1->IcmpOriginalCopy != ((void*)0))
 {
  FUNC_4(VAR_1->IcmpOriginalCopy);
 }


 if (VAR_1->Sock != ((void*)0))
 {
  FUNC_3(VAR_1->Sock);
  FUNC_8(VAR_1->Sock);
  VAR_1->Sock = ((void*)0);
 }

 FUNC_2(VAR_1->lock);


 FUNC_1(VAR_0->NatTable, VAR_1);


 FUNC_4(VAR_1);

 FUNC_0("NAT: DeleteNatIcmp\n");

}
