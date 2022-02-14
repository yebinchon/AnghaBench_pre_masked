
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int DisconnectCount; scalar_t__ SessionEstablishedCount; } ;
typedef TYPE_1__ OPENVPN_SERVER ;



bool FUNC_0(void *VAR_0)
{
 OPENVPN_SERVER *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_1 = VAR_0;

 return (VAR_1->DisconnectCount < 1) && (VAR_1->SessionEstablishedCount > 0);
}
