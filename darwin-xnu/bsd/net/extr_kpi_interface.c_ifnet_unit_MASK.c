
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef TYPE_1__* ifnet_t ;
struct TYPE_3__ {scalar_t__ if_unit; } ;



u_int32_t
FUNC_0(ifnet_t VAR_0)
{
 return ((VAR_0 == ((void*)0)) ? (u_int32_t)0xffffffff :
     (u_int32_t)VAR_0->if_unit);
}
