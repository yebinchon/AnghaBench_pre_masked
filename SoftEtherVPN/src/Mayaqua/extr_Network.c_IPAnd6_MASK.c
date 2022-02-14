
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {int* ipv6_addr; } ;
typedef TYPE_1__ IP ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(IP *VAR_0, IP *VAR_1, IP *VAR_2)
{
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || FUNC_0(VAR_1) == 0 || FUNC_0(VAR_2) == 0)
 {
  FUNC_1(VAR_0);
  return;
 }

 FUNC_1(VAR_0);
 for (VAR_3 = 0;VAR_3 < 16;VAR_3++)
 {
  VAR_0->ipv6_addr[VAR_3] = VAR_1->ipv6_addr[VAR_3] & VAR_2->ipv6_addr[VAR_3];
 }
}
