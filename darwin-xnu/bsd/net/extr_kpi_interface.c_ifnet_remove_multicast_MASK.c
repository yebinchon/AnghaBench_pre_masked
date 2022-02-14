
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {scalar_t__ sa_family; } ;
typedef TYPE_1__* ifmultiaddr_t ;
typedef int errno_t ;
struct TYPE_3__ {int ifma_ifp; struct sockaddr* ifma_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct sockaddr*) ;

errno_t
FUNC_1(ifmultiaddr_t VAR_3)
{
 struct sockaddr *VAR_4;

 if (VAR_3 == ((void*)0))
  return (VAR_2);

 VAR_4 = VAR_3->ifma_addr;

 if (VAR_4->sa_family != VAR_1 && VAR_4->sa_family != VAR_0)
  return (VAR_2);

 return (FUNC_0(VAR_3->ifma_ifp, VAR_4));
}
