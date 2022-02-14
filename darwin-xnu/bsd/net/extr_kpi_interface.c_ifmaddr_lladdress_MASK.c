
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct sockaddr {int dummy; } ;
struct ifmultiaddr {int dummy; } ;
typedef TYPE_1__* ifmultiaddr_t ;
typedef int errno_t ;
struct TYPE_3__ {struct ifmultiaddr* ifma_ll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifmultiaddr*,struct sockaddr*,int ) ;

errno_t
FUNC_1(ifmultiaddr_t VAR_2, struct sockaddr *VAR_3,
    u_int32_t VAR_4)
{
 struct ifmultiaddr *VAR_5;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return (VAR_0);
 if ((VAR_5 = VAR_2->ifma_ll) == ((void*)0))
  return (VAR_1);

 return (FUNC_0(VAR_5, VAR_3, VAR_4));
}
