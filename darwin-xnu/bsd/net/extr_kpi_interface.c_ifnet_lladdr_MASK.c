
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ifaddr {scalar_t__ ifa_addr; } ;
typedef TYPE_1__* ifnet_t ;
struct TYPE_3__ {struct ifaddr* if_lladdr; } ;


 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (struct ifaddr*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (void*) ;

void *
FUNC_4(ifnet_t VAR_0)
{
 struct ifaddr *VAR_1;
 void *VAR_2;

 if (VAR_0 == ((void*)0))
  return (((void*)0));






 VAR_1 = VAR_0->if_lladdr;
 FUNC_0(VAR_1);
 VAR_2 = FUNC_2(FUNC_3((void *)VAR_1->ifa_addr));
 FUNC_1(VAR_1);

 return (VAR_2);
}
