
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int MacAddress; } ;
struct TYPE_15__ {int MacAddress; } ;
struct TYPE_14__ {TYPE_3__* Packet; } ;
struct TYPE_12__ {int PointerL3; } ;
struct TYPE_13__ {scalar_t__ PacketSize; TYPE_2__ L3; TYPE_1__* MacHeader; } ;
struct TYPE_11__ {int Protocol; } ;
typedef int MAC_HEADER ;
typedef TYPE_4__ L3PACKET ;
typedef TYPE_5__ L3IF ;
typedef TYPE_6__ L3ARPENTRY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,int ,int ,int ,int ,scalar_t__) ;
 int VAR_0 ;

void FUNC_2(L3IF *VAR_1, L3ARPENTRY *VAR_2, L3PACKET *VAR_3)
{

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_1, VAR_2 != ((void*)0) ? VAR_2->MacAddress : VAR_0, VAR_1->MacAddress, FUNC_0(VAR_3->Packet->MacHeader->Protocol),
  VAR_3->Packet->L3.PointerL3, VAR_3->Packet->PacketSize - sizeof(MAC_HEADER));
}
