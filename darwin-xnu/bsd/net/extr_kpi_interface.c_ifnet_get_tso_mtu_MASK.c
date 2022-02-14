
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int sa_family_t ;
typedef TYPE_1__* ifnet_t ;
typedef int errno_t ;
struct TYPE_3__ {int if_hwassist; int if_tso_v6_mtu; int if_tso_v4_mtu; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

errno_t
FUNC_0(ifnet_t VAR_4, sa_family_t VAR_5, u_int32_t *VAR_6)
{
 errno_t VAR_7 = 0;

 if (VAR_4 == ((void*)0) || VAR_6 == ((void*)0))
  return (VAR_0);

 switch (VAR_5) {
 case 129:
  if (VAR_4->if_hwassist & VAR_2)
   *VAR_6 = VAR_4->if_tso_v4_mtu;
  else
   VAR_7 = VAR_0;
  break;

 case 128:
  if (VAR_4->if_hwassist & VAR_3)
   *VAR_6 = VAR_4->if_tso_v6_mtu;
  else
   VAR_7 = VAR_0;
  break;

 default:
  VAR_7 = VAR_1;
  break;
 }

 return (VAR_7);
}
