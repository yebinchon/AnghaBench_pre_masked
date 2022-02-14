
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int MacAddress; } ;
struct TYPE_10__ {int BroadcastPacket; scalar_t__ TypeL3; int PacketData; int MacAddressDest; int MacAddressSrc; } ;
typedef TYPE_1__ PKT ;
typedef TYPE_2__ L3IF ;


 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_5(L3IF *VAR_2, PKT *VAR_3)
{

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }



 if (FUNC_0(VAR_3->MacAddressSrc, VAR_2->MacAddress, 6) == 0 ||
  (VAR_3->BroadcastPacket == 0 && FUNC_0(VAR_3->MacAddressDest, VAR_2->MacAddress, 6) != 0))
 {

  FUNC_1(VAR_3->PacketData);
  FUNC_2(VAR_3);
  return;
 }

 if (VAR_3->TypeL3 == VAR_0)
 {

  FUNC_3(VAR_2, VAR_3);


  FUNC_1(VAR_3->PacketData);
  FUNC_2(VAR_3);
 }
 else if (VAR_3->TypeL3 == VAR_1)
 {

  FUNC_4(VAR_2, VAR_3, 0);
 }
 else
 {

  FUNC_1(VAR_3->PacketData);
  FUNC_2(VAR_3);
 }
}
