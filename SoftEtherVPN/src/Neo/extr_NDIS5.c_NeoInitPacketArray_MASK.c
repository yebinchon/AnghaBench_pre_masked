
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {int NdisPacket; } ;
struct TYPE_3__ {TYPE_2__** PacketBuffer; int * PacketBufferArray; } ;


 size_t VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 TYPE_1__* VAR_1 ;

void FUNC_1()
{
 UINT VAR_2;

 for (VAR_2 = 0;VAR_2 < VAR_0;VAR_2++)
 {
  VAR_1->PacketBuffer[VAR_2] = FUNC_0();

  VAR_1->PacketBufferArray[VAR_2] = VAR_1->PacketBuffer[VAR_2]->NdisPacket;
 }
}
