
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* ipv6_addr; } ;
typedef TYPE_1__ IP ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(IP *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0);

 VAR_0->ipv6_addr[0] = 0xff;
 VAR_0->ipv6_addr[1] = 0x02;
 VAR_0->ipv6_addr[15] = 0x02;
}
