
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int MaxUdpPacketSize; } ;
typedef TYPE_1__ UDP_ACCEL ;
struct TYPE_7__ {int PriorityQoS; int Compressed; int Size; int Buf; } ;
typedef TYPE_2__ BLOCK ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ,int ) ;

void FUNC_1(UDP_ACCEL *VAR_0, BLOCK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, VAR_1->Buf, VAR_1->Size, VAR_1->Compressed, VAR_0->MaxUdpPacketSize, VAR_1->PriorityQoS);
}
