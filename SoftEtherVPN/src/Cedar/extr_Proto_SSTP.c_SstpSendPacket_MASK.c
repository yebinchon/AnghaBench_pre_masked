
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ PriorityQoS; } ;
struct TYPE_14__ {int Size; int Buf; } ;
struct TYPE_13__ {scalar_t__ IsControl; int AttributeList; int MessageType; } ;
struct TYPE_12__ {int SendQueue; } ;
typedef TYPE_1__ SSTP_SERVER ;
typedef TYPE_2__ SSTP_PACKET ;
typedef TYPE_3__ BUF ;
typedef TYPE_4__ BLOCK ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (int ) ;
 TYPE_4__* FUNC_4 (int ,int ,int ) ;
 TYPE_3__* FUNC_5 (TYPE_2__*) ;

void FUNC_6(SSTP_SERVER *VAR_0, SSTP_PACKET *VAR_1)
{
 BUF *VAR_2;
 BLOCK *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_1->IsControl)
 {
  FUNC_0("SSTP Control Packet Send: Msg = %u, Num = %u\n", VAR_1->MessageType, FUNC_3(VAR_1->AttributeList));
 }
 else
 {

 }

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_4(VAR_2->Buf, VAR_2->Size, 0);
 VAR_3->PriorityQoS = VAR_1->IsControl;
 FUNC_1(VAR_2);

 FUNC_2(VAR_0->SendQueue, VAR_3);
}
