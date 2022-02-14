
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct TYPE_18__ {int DstIP; } ;
struct TYPE_17__ {int SubnetMask; int IpAddress; int IpWaitList; } ;
struct TYPE_16__ {int NextHopIp; TYPE_12__* Packet; scalar_t__ Expire; } ;
struct TYPE_15__ {TYPE_4__* IPv4Header; } ;
struct TYPE_14__ {scalar_t__ TypeL3; TYPE_2__* PacketData; TYPE_1__ L3; } ;
typedef TYPE_2__ L3PACKET ;
typedef TYPE_3__ L3IF ;
typedef int L3ARPENTRY ;
typedef TYPE_4__ IPV4_HEADER ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_12__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int * FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int *,TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_6 () ;

void FUNC_7(L3IF *VAR_2, L3PACKET *VAR_3)
{
 L3ARPENTRY *VAR_4 = ((void*)0);
 bool VAR_5 = 0;
 IPV4_HEADER *VAR_6;
 bool VAR_7 = 0;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }
 if (VAR_3->Packet->TypeL3 != VAR_1)
 {
  return;
 }

 VAR_6 = VAR_3->Packet->L3.IPv4Header;


 if (VAR_3->NextHopIp == 0xffffffff ||
  ((VAR_3->NextHopIp & VAR_2->SubnetMask) == (VAR_2->IpAddress & VAR_2->SubnetMask)) &&
  ((VAR_3->NextHopIp & (~VAR_2->SubnetMask)) == (~VAR_2->SubnetMask)))
 {
  VAR_5 = 1;
 }

 if (VAR_5 == 0 && VAR_6->DstIP == VAR_2->IpAddress)
 {

 }
 else if (VAR_5 == 0)
 {

  VAR_4 = FUNC_3(VAR_2, VAR_3->NextHopIp);

  if (VAR_4 == ((void*)0))
  {


   VAR_3->Expire = FUNC_6() + VAR_0;

   FUNC_2(VAR_2->IpWaitList, VAR_3);


   FUNC_4(VAR_2, VAR_3->NextHopIp);
   return;
  }
 }

 if (VAR_7 == 0)
 {

  FUNC_5(VAR_2, VAR_4, VAR_3);
 }


 FUNC_0(VAR_3->Packet->PacketData);
 FUNC_1(VAR_3->Packet);
 FUNC_0(VAR_3);
}
