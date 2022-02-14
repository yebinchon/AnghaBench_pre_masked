
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int NoIPv6DefaultRouterInRAWhenIPv6; int ManageOnlyPrivateIP; int ManageOnlyLocalUnicastIPv6; int NoMacAddressLog; int NoDhcpPacketLogOutsideHub; int RemoveDefGwOnDhcpForLocalhost; int FloodingSendQueueBufferQuota; int AccessListIncludeFileCacheLifetime; int VlanTypeId; scalar_t__ MaxSession; } ;
typedef TYPE_1__ HUB_OPTION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(HUB_OPTION *VAR_3)
{

 if (VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_3->MaxSession = 0;
 VAR_3->VlanTypeId = VAR_2;
 VAR_3->NoIPv6DefaultRouterInRAWhenIPv6 = 1;
 VAR_3->ManageOnlyPrivateIP = 1;
 VAR_3->ManageOnlyLocalUnicastIPv6 = 1;
 VAR_3->NoMacAddressLog = 1;
 VAR_3->NoDhcpPacketLogOutsideHub = 1;
 VAR_3->AccessListIncludeFileCacheLifetime = VAR_0;
 VAR_3->RemoveDefGwOnDhcpForLocalhost = 1;
 VAR_3->FloodingSendQueueBufferQuota = VAR_1;
}
