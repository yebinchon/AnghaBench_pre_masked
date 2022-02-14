
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ifnet_t ;
typedef int ifnet_offload_t ;
struct TYPE_3__ {int if_hwassist; } ;


 int VAR_0 ;

ifnet_offload_t
FUNC_0(ifnet_t VAR_1)
{
 return ((VAR_1 == ((void*)0)) ?
     0 : (VAR_1->if_hwassist & VAR_0));
}
