
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef TYPE_1__* ifnet_t ;
struct TYPE_3__ {int if_xflags; } ;


 int VAR_0 ;
 int VAR_1 ;

u_int32_t
FUNC_0(ifnet_t VAR_2)
{
 u_int32_t VAR_3 = 0;

 if (VAR_2 == ((void*)0))
  return (0);

 if (VAR_2->if_xflags & VAR_0)
  VAR_3 |= VAR_1;

 return (VAR_3);
}
