
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int unit; int name; } ;
union ip6_fw_if {int fu_via_ip6; TYPE_1__ fu_via_if; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_6__ {struct ifaddr* tqh_first; } ;
struct ifnet {int if_unit; TYPE_2__ if_addrlist; int if_name; } ;
struct TYPE_7__ {struct ifaddr* tqe_next; } ;
struct ifaddr {TYPE_4__* ifa_addr; TYPE_3__ ifa_list; } ;
struct TYPE_8__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (struct ifaddr*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ifnet*) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static
__inline int
FUNC_7(struct ifnet *VAR_2, union ip6_fw_if *VAR_3, int VAR_4)
{

 if (VAR_4) {

  if (VAR_3->fu_via_if.unit != -1
      && VAR_2->if_unit != VAR_3->fu_via_if.unit)
   return(0);

  if (FUNC_6(VAR_2->if_name, VAR_3->fu_via_if.name, VAR_1))
   return(0);
  return(1);
 } else if (!FUNC_3(&VAR_3->fu_via_ip6)) {
  struct ifaddr *VAR_5;

  FUNC_5(VAR_2);
  for (VAR_5 = VAR_2->if_addrlist.tqh_first; VAR_5;
      VAR_5 = VAR_5->ifa_list.tqe_next)
  {
   FUNC_0(VAR_5);
   if (VAR_5->ifa_addr->sa_family != VAR_0) {
    FUNC_1(VAR_5);
    continue;
   }
   if (!FUNC_2(&VAR_3->fu_via_ip6,
       &(((struct sockaddr_in6 *)
       (VAR_5->ifa_addr))->sin6_addr))) {
    FUNC_1(VAR_5);
    continue;
   }
   FUNC_1(VAR_5);
   FUNC_4(VAR_2);
   return(1);
  }
  FUNC_4(VAR_2);
  return(0);
 }
 return(1);
}
