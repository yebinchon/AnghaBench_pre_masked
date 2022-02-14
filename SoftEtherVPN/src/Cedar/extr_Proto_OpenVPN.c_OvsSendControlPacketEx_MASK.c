
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_7__ {int SendControlPacketList; int NextSendPacketId; } ;
struct TYPE_6__ {int NoResend; scalar_t__ NextSendTime; scalar_t__ DataSize; int Data; scalar_t__ PacketId; int OpCode; } ;
typedef TYPE_1__ OPENVPN_CONTROL_PACKET ;
typedef TYPE_2__ OPENVPN_CHANNEL ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int *,scalar_t__) ;
 TYPE_1__* FUNC_2 (int) ;

void FUNC_3(OPENVPN_CHANNEL *VAR_0, UCHAR VAR_1, UCHAR *VAR_2, UINT VAR_3, bool VAR_4)
{
 OPENVPN_CONTROL_PACKET *VAR_5;

 if (VAR_0 == ((void*)0) || (VAR_3 != 0 && VAR_2 == ((void*)0)))
 {
  return;
 }

 VAR_5 = FUNC_2(sizeof(OPENVPN_CONTROL_PACKET));

 VAR_5->NoResend = VAR_4;

 VAR_5->OpCode = VAR_1;
 VAR_5->PacketId = VAR_0->NextSendPacketId++;

 if (VAR_2 != ((void*)0))
 {
  VAR_5->Data = FUNC_1(VAR_2, VAR_3);
  VAR_5->DataSize = VAR_3;
 }

 VAR_5->NextSendTime = 0;

 FUNC_0(VAR_0->SendControlPacketList, VAR_5);
}
