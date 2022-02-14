
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ Type; } ;
typedef TYPE_1__ UDPPACKET ;
struct TYPE_7__ {int SendPacketList; } ;
typedef int IP ;
typedef TYPE_2__ IKE_SERVER ;


 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,scalar_t__,int *,scalar_t__,void*,scalar_t__) ;

void FUNC_2(IKE_SERVER *VAR_0, UINT VAR_1, IP *VAR_2, UINT VAR_3, IP *VAR_4, UINT VAR_5, void *VAR_6, UINT VAR_7)
{
 UDPPACKET *VAR_8;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0) || VAR_4 == ((void*)0) || VAR_3 == 0 || VAR_5 == 0 || VAR_6 == ((void*)0) || VAR_7 == 0)
 {
  return;
 }

 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

 VAR_8->Type = VAR_1;

 FUNC_0(VAR_0->SendPacketList, VAR_8);
}
