
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {scalar_t__ Type; } ;
typedef TYPE_2__ UDPPACKET ;
struct TYPE_9__ {scalar_t__ Protocol; int SendPacketList; TYPE_1__* UdpSock; } ;
struct TYPE_7__ {int LocalPort; int LocalIP; } ;
typedef TYPE_3__ RUDP_STACK ;
typedef int IP ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (void*,scalar_t__) ;
 TYPE_2__* FUNC_2 (int *,int ,int *,scalar_t__,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_3(RUDP_STACK *VAR_2, IP *VAR_3, UINT VAR_4, void *VAR_5, UINT VAR_6, UINT VAR_7)
{
 UDPPACKET *VAR_8;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == 0 || VAR_5 == ((void*)0) || VAR_6 == 0)
 {
  return;
 }

 VAR_8 = FUNC_2(&VAR_2->UdpSock->LocalIP, VAR_2->UdpSock->LocalPort,
  VAR_3, VAR_4,
  FUNC_1(VAR_5, VAR_6), VAR_6);

 if (VAR_2->Protocol == VAR_1 || VAR_2->Protocol == VAR_0)
 {

  VAR_8->Type = VAR_7;
 }

 FUNC_0(VAR_2->SendPacketList, VAR_8);
}
