
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_5__ {int NumPacketRecv; } ;
struct TYPE_7__ {scalar_t__ Halting; scalar_t__ Opened; int PacketBufferArray; int NdisMiniport; TYPE_1__ Status; TYPE_2__** PacketBuffer; } ;
struct TYPE_6__ {scalar_t__ Buf; int NdisPacket; int NdisBuffer; } ;
typedef TYPE_2__ PACKET_BUFFER ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 void* FUNC_2 (void*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (void*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (void*,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,TYPE_3__*,scalar_t__,scalar_t__,int *,scalar_t__,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (scalar_t__,void*,scalar_t__) ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;

void FUNC_10(void *VAR_7)
{
 UINT VAR_8, VAR_9, VAR_10;
 void *VAR_11;

 if (VAR_7 == ((void*)0))
 {
  return;
 }


 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8 > VAR_2)
 {

  return;
 }
 if (VAR_8 == 0)
 {

  return;
 }

 if (VAR_5->Halting != VAR_0)
 {

  return;
 }

 if (VAR_5->Opened == VAR_0)
 {

  return;
 }

 for (VAR_9 = 0;VAR_9 < VAR_8;VAR_9++)
 {
  PACKET_BUFFER *VAR_12 = VAR_5->PacketBuffer[VAR_9];

  VAR_10 = FUNC_4(VAR_7, VAR_9);
  if (VAR_10 > VAR_3)
  {
   VAR_10 = VAR_3;
  }
  if (VAR_10 < VAR_4)
  {
   VAR_10 = VAR_4;
  }

  VAR_11 = FUNC_2(VAR_7, VAR_9);


  FUNC_9(VAR_12->Buf, VAR_11, VAR_10);

  if (VAR_6 == 0)
  {

   FUNC_5(VAR_12->NdisBuffer, VAR_10);

   FUNC_1(VAR_12->NdisPacket, VAR_1);
   FUNC_0(VAR_12->NdisPacket, VAR_4);
  }
  else
  {
   FUNC_6(VAR_5->NdisMiniport, VAR_5,
    VAR_12->Buf, VAR_4,
    ((UCHAR *)VAR_12->Buf) + VAR_4, VAR_10 - VAR_4,
    VAR_10 - VAR_4);
   FUNC_7(VAR_5->NdisMiniport);
  }
 }


 VAR_5->Status.NumPacketRecv += VAR_8;

 if (VAR_6 == 0)
 {
  FUNC_8(VAR_5->NdisMiniport, VAR_5->PacketBufferArray, VAR_8);
 }
}
