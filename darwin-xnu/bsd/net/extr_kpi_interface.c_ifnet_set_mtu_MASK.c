
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef TYPE_1__* ifnet_t ;
typedef int errno_t ;
struct TYPE_3__ {int if_mtu; } ;


 int VAR_0 ;

errno_t
FUNC_0(ifnet_t VAR_1, u_int32_t VAR_2)
{
 if (VAR_1 == ((void*)0))
  return (VAR_0);

 VAR_1->if_mtu = VAR_2;
 return (0);
}
