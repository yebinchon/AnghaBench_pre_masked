
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_12__ {int * SendQueue; int * IpWaitList; int * IpPacketQueue; int * ArpWaitTable; int * ArpTable; } ;
struct TYPE_11__ {TYPE_1__* Packet; } ;
struct TYPE_10__ {TYPE_2__* PacketData; } ;
typedef TYPE_1__ PKT ;
typedef TYPE_2__ L3PACKET ;
typedef TYPE_3__ L3IF ;
typedef TYPE_2__ L3ARPWAIT ;
typedef TYPE_2__ L3ARPENTRY ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(L3IF *VAR_0)
{
 UINT VAR_1;
 L3PACKET *VAR_2;
 PKT *VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 for (VAR_1 = 0;VAR_1 < FUNC_4(VAR_0->ArpTable);VAR_1++)
 {
  L3ARPENTRY *VAR_4 = FUNC_3(VAR_0->ArpTable, VAR_1);
  FUNC_0(VAR_4);
 }
 FUNC_5(VAR_0->ArpTable);
 VAR_0->ArpTable = ((void*)0);

 for (VAR_1 = 0;VAR_1 < FUNC_4(VAR_0->ArpWaitTable);VAR_1++)
 {
  L3ARPWAIT *VAR_5 = FUNC_3(VAR_0->ArpWaitTable, VAR_1);
  FUNC_0(VAR_5);
 }
 FUNC_5(VAR_0->ArpWaitTable);
 VAR_0->ArpWaitTable = ((void*)0);

 while ((VAR_2 = FUNC_2(VAR_0->IpPacketQueue)))
 {
  FUNC_0(VAR_2->Packet->PacketData);
  FUNC_1(VAR_2->Packet);
  FUNC_0(VAR_2);
 }
 FUNC_6(VAR_0->IpPacketQueue);
 VAR_0->IpPacketQueue = ((void*)0);

 for (VAR_1 = 0;VAR_1 < FUNC_4(VAR_0->IpWaitList);VAR_1++)
 {
  L3PACKET *VAR_6 = FUNC_3(VAR_0->IpWaitList, VAR_1);
  FUNC_0(VAR_6->Packet->PacketData);
  FUNC_1(VAR_6->Packet);
  FUNC_0(VAR_6);
 }
 FUNC_5(VAR_0->IpWaitList);
 VAR_0->IpWaitList = ((void*)0);

 while ((VAR_3 = FUNC_2(VAR_0->SendQueue)))
 {
  FUNC_0(VAR_3->PacketData);
  FUNC_1(VAR_3);
 }
 FUNC_6(VAR_0->SendQueue);
 VAR_0->SendQueue = ((void*)0);
}
