
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {int * ipv6_addr; } ;
struct TYPE_7__ {int * Value; } ;
typedef TYPE_1__ IPV6_ADDR ;
typedef TYPE_2__ IP ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

bool FUNC_2(IPV6_ADDR *VAR_0, IP *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  FUNC_1(VAR_0, sizeof(IPV6_ADDR));
  return 0;
 }

 if (FUNC_0(VAR_1) == 0)
 {
  FUNC_1(VAR_0, sizeof(IPV6_ADDR));
  return 0;
 }

 for (VAR_2 = 0;VAR_2 < 16;VAR_2++)
 {
  VAR_0->Value[VAR_2] = VAR_1->ipv6_addr[VAR_2];
 }

 return 1;
}
