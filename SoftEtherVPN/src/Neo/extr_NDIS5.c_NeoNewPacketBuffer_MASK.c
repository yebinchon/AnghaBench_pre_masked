
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int NdisBuffer; int NdisPacket; int PacketPool; int Buf; int BufferPool; } ;
typedef TYPE_1__ PACKET_BUFFER ;
typedef int NDIS_STATUS ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ,int ,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int) ;
 int VAR_2 ;

PACKET_BUFFER *FUNC_8()
{
 PACKET_BUFFER *VAR_3;
 NDIS_STATUS VAR_4;


 VAR_3 = FUNC_7(sizeof(PACKET_BUFFER));

 VAR_3->Buf = FUNC_6(VAR_0);

 FUNC_2(&VAR_4, &VAR_3->BufferPool, 1);

 FUNC_1(&VAR_4, &VAR_3->NdisBuffer, VAR_3->BufferPool, VAR_3->Buf, VAR_0);

 FUNC_4(&VAR_4, &VAR_3->PacketPool, 1, VAR_2);

 FUNC_3(&VAR_4, &VAR_3->NdisPacket, VAR_3->PacketPool);
 FUNC_0(VAR_3->NdisPacket, VAR_1);

 FUNC_5(VAR_3->NdisPacket, VAR_3->NdisBuffer);

 return VAR_3;
}
