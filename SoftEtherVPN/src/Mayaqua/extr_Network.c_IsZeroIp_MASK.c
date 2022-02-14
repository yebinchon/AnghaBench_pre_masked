
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ipv6_addr; int addr; } ;
typedef TYPE_1__ IP ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int) ;

bool FUNC_2(IP *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return 1;
 }

 if (FUNC_0(VAR_0) == 0)
 {
  return FUNC_1(VAR_0->addr, sizeof(VAR_0->addr));
 }
 else
 {
  return FUNC_1(VAR_0->ipv6_addr, sizeof(VAR_0->ipv6_addr));
 }
}
