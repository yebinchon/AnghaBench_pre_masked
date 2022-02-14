
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sa_family_t ;
typedef TYPE_2__* ifaddr_t ;
struct TYPE_7__ {TYPE_1__* ifa_addr; } ;
struct TYPE_6__ {int sa_family; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

sa_family_t
FUNC_2(ifaddr_t VAR_0)
{
 sa_family_t VAR_1 = 0;

 if (VAR_0 != ((void*)0)) {
  FUNC_0(VAR_0);
  if (VAR_0->ifa_addr != ((void*)0))
   VAR_1 = VAR_0->ifa_addr->sa_family;
  FUNC_1(VAR_0);
 }
 return (VAR_1);
}
