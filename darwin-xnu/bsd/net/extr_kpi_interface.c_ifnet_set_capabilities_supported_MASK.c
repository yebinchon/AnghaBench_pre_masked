
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
typedef TYPE_1__* ifnet_t ;
typedef int errno_t ;
struct TYPE_5__ {int if_capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

errno_t
FUNC_2(ifnet_t VAR_2, u_int32_t VAR_3,
    u_int32_t VAR_4)
{
 errno_t VAR_5 = 0;
 int VAR_6;

 if (VAR_2 == ((void*)0))
  return (VAR_0);

 FUNC_1(VAR_2);
 VAR_6 = (VAR_3 & VAR_4) | (VAR_2->if_capabilities & ~VAR_4);
 if ((VAR_6 & ~VAR_1))
  VAR_5 = VAR_0;
 else
  VAR_2->if_capabilities = VAR_6;
 FUNC_0(VAR_2);

 return (VAR_5);
}
