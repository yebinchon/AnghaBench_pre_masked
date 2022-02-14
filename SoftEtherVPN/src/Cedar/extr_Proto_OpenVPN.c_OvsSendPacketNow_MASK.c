
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_8__ {int Size; int Buf; } ;
struct TYPE_7__ {int NumAck; int * AckPacketId; int KeyId; int OpCode; } ;
typedef int OPENVPN_SESSION ;
typedef int OPENVPN_SERVER ;
typedef TYPE_1__ OPENVPN_PACKET ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *,int ,int ) ;

void FUNC_4(OPENVPN_SERVER *VAR_0, OPENVPN_SESSION *VAR_1, OPENVPN_PACKET *VAR_2)
{
 BUF *VAR_3;
 UINT VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_0("Sending Opcode=%u  ", VAR_2->OpCode);
 if (VAR_2->NumAck >= 1)
 {
  FUNC_0("Sending ACK Packet IDs (c=%u): ", VAR_2->KeyId);
  for (VAR_4 = 0;VAR_4 < VAR_2->NumAck;VAR_4++)
  {
   FUNC_0("%u ", VAR_2->AckPacketId[VAR_4]);
  }
 }
 FUNC_0("\n");

 VAR_3 = FUNC_2(VAR_2);

 FUNC_3(VAR_0, VAR_1, VAR_3->Buf, VAR_3->Size);

 FUNC_1(VAR_3);
}
