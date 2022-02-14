
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_3__ {struct in_ifaddr* tqe_next; } ;
struct in_ifaddr {int ia_netmask; int ia_net; int ia_subnetmask; int ia_subnet; int ia_ifa; TYPE_1__ ia_link; } ;
struct in_addr {int s_addr; } ;
struct TYPE_4__ {struct in_ifaddr* tqh_first; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;

int
FUNC_6(struct in_addr VAR_3)
{
 u_int32_t VAR_4 = FUNC_5(VAR_3.s_addr);
 struct in_ifaddr *VAR_5;

 if (FUNC_2(VAR_4))
  return (1);

 if (VAR_2) {
  FUNC_4(VAR_0);
  for (VAR_5 = VAR_1.tqh_first; VAR_5 != ((void*)0);
      VAR_5 = VAR_5->ia_link.tqe_next) {
   FUNC_0(&VAR_5->ia_ifa);
   if ((VAR_4 & VAR_5->ia_netmask) == VAR_5->ia_net) {
    FUNC_1(&VAR_5->ia_ifa);
    FUNC_3(VAR_0);
    return (1);
   }
   FUNC_1(&VAR_5->ia_ifa);
  }
  FUNC_3(VAR_0);
 } else {
  FUNC_4(VAR_0);
  for (VAR_5 = VAR_1.tqh_first; VAR_5 != ((void*)0);
      VAR_5 = VAR_5->ia_link.tqe_next) {
   FUNC_0(&VAR_5->ia_ifa);
   if ((VAR_4 & VAR_5->ia_subnetmask) == VAR_5->ia_subnet) {
    FUNC_1(&VAR_5->ia_ifa);
    FUNC_3(VAR_0);
    return (1);
   }
   FUNC_1(&VAR_5->ia_ifa);
  }
  FUNC_3(VAR_0);
 }
 return (0);
}
