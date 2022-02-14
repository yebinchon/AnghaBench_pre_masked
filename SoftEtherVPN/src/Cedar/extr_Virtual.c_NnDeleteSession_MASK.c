
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int NatTableForRecv; int NatTableForSend; int v; } ;
struct TYPE_7__ {int Protocol; int Id; int Status; int LastSeq; int LastAck; int SrcPort; int SrcIp; int DestPort; int DestIp; } ;
typedef TYPE_1__ NATIVE_NAT_ENTRY ;
typedef TYPE_2__ NATIVE_NAT ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;


 int VAR_0 ;

 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ,int,int ,int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_5(NATIVE_NAT *VAR_3, NATIVE_NAT_ENTRY *VAR_4)
{

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 switch (VAR_4->Protocol)
 {
 case 129:

  FUNC_4(VAR_3->v, VAR_4->DestIp, VAR_4->DestPort, VAR_4->SrcIp, VAR_4->SrcPort,
   VAR_4->LastAck, VAR_4->LastSeq + (VAR_4->Status == VAR_0 ? 1 : 0), VAR_2 | VAR_1, 0, 0, ((void*)0), 0);

  FUNC_3(VAR_3->v, "LH_NAT_TCP_DELETED", VAR_4->Id);
  break;

 case 128:
  FUNC_3(VAR_3->v, "LH_NAT_UDP_DELETED", VAR_4->Id);
  break;

 case 130:
  FUNC_0("NAT ICMP %u Deleted.\n", VAR_4->Id);
  break;
 }

 FUNC_1(VAR_3->NatTableForSend, VAR_4);
 FUNC_1(VAR_3->NatTableForRecv, VAR_4);

 FUNC_2(VAR_4);
}
