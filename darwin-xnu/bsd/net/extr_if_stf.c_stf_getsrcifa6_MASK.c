
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_7__ {struct ifaddr* tqe_next; } ;
struct ifaddr {TYPE_3__* ifa_addr; TYPE_2__ ifa_list; } ;
struct TYPE_9__ {scalar_t__ s_addr; } ;
struct TYPE_10__ {TYPE_4__ sin_addr; } ;
struct in_ifaddr {struct ifaddr ia_ifa; TYPE_5__ ia_addr; } ;
struct in_addr {scalar_t__ s_addr; } ;
struct in6_ifaddr {int dummy; } ;
struct TYPE_6__ {struct ifaddr* tqh_first; } ;
struct ifnet {TYPE_1__ if_addrlist; } ;
typedef int in ;
struct TYPE_8__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ifaddr*) ;
 int FUNC_2 (struct ifaddr*) ;
 int FUNC_3 (struct ifaddr*) ;
 int FUNC_4 (int *) ;
 struct in_ifaddr* FUNC_5 (int *) ;
 struct in_ifaddr* FUNC_6 (struct in_ifaddr*,int ) ;
 int FUNC_7 (int ,struct in_addr*,int) ;
 int VAR_1 ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (struct ifnet*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static struct in6_ifaddr *
FUNC_12(struct ifnet *VAR_4)
{
 struct ifaddr *VAR_5;
 struct in_ifaddr *VAR_6;
 struct sockaddr_in6 *VAR_7;
 struct in_addr VAR_8;

 FUNC_9(VAR_4);
 for (VAR_5 = VAR_4->if_addrlist.tqh_first; VAR_5; VAR_5 = VAR_5->ifa_list.tqe_next) {
  FUNC_2(VAR_5);
  if (VAR_5->ifa_addr == ((void*)0)) {
   FUNC_3(VAR_5);
   continue;
  }
  if (VAR_5->ifa_addr->sa_family != VAR_0) {
   FUNC_3(VAR_5);
   continue;
  }
  VAR_7 = (struct sockaddr_in6 *)(void *)VAR_5->ifa_addr;
  if (!FUNC_4(&VAR_7->sin6_addr)) {
   FUNC_3(VAR_5);
   continue;
  }
  FUNC_7(FUNC_0(&VAR_7->sin6_addr), &VAR_8, sizeof(VAR_8));
  FUNC_3(VAR_5);
  FUNC_11(VAR_2);
  for (VAR_6 = FUNC_5(&VAR_3);
       VAR_6;
       VAR_6 = FUNC_6(VAR_6, VAR_1))
  {
   FUNC_2(&VAR_6->ia_ifa);
   if (VAR_6->ia_addr.sin_addr.s_addr == VAR_8.s_addr) {
    FUNC_3(&VAR_6->ia_ifa);
    break;
   }
   FUNC_3(&VAR_6->ia_ifa);
  }
  FUNC_10(VAR_2);
  if (VAR_6 == ((void*)0))
   continue;

  FUNC_1(VAR_5);
  FUNC_8(VAR_4);
  return ((struct in6_ifaddr *)VAR_5);
 }
 FUNC_8(VAR_4);

 return (((void*)0));
}
