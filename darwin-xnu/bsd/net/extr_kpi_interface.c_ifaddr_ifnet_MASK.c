
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ifnet {int dummy; } ;
typedef struct ifnet* ifnet_t ;
typedef TYPE_1__* ifaddr_t ;
struct TYPE_3__ {struct ifnet* ifa_ifp; } ;



ifnet_t
FUNC_0(ifaddr_t VAR_0)
{
 struct ifnet *VAR_1;

 if (VAR_0 == ((void*)0))
  return (((void*)0));


 VAR_1 = VAR_0->ifa_ifp;

 return (VAR_1);
}
