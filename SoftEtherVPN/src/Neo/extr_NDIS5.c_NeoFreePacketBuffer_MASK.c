
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int BufferPool; struct TYPE_4__* Buf; int NdisBuffer; int PacketPool; int NdisPacket; } ;
typedef TYPE_1__ PACKET_BUFFER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(PACKET_BUFFER *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }


 FUNC_4(VAR_0->NdisPacket, &VAR_0->NdisBuffer);

 FUNC_2(VAR_0->NdisPacket);

 FUNC_3(VAR_0->PacketPool);

 FUNC_0(VAR_0->NdisBuffer);

 FUNC_5(VAR_0->Buf);

 FUNC_1(VAR_0->BufferPool);

 FUNC_5(VAR_0);
}
