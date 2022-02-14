
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_4__ {int * ipv6_addr; } ;
typedef TYPE_1__ IP ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(IP *VAR_0, struct in6_addr *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0);
 for (VAR_2 = 0;VAR_2 < 16;VAR_2++)
 {
  VAR_0->ipv6_addr[VAR_2] = ((UCHAR *)VAR_1)[VAR_2];
 }
}
