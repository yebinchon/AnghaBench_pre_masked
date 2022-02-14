
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct TYPE_2__ {struct in6_addr sin6_addr; } ;
struct in6_ifaddr {int ia_ifa; TYPE_1__ ia_addr; } ;
struct ifnet {int if_flags; int if_eflags; } ;
struct ifaddr {struct ifnet* ifa_ifp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ifnet*) ;
 scalar_t__ FUNC_3 (struct in6_addr*,struct ifnet*,int *) ;
 struct in6_addr VAR_5 ;
 int FUNC_4 (struct ifnet*,struct in6_addr*,struct in6_addr*,int ,int,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct ifaddr *VAR_6)
{
 struct in6_ifaddr *VAR_7 = (struct in6_ifaddr *)VAR_6;
 struct ifnet *VAR_8 = VAR_6->ifa_ifp;
 struct in6_addr VAR_9, VAR_10;

 if ((VAR_8->if_flags & VAR_2) == 0 ||
     (VAR_8->if_flags & VAR_1) == 0 ||
     (VAR_8->if_eflags & VAR_0) != 0)
  return;

 FUNC_0(&VAR_7->ia_ifa);
 VAR_10 = VAR_7->ia_addr.sin6_addr;
 FUNC_1(&VAR_7->ia_ifa);
 if (FUNC_3(&VAR_10, VAR_8, ((void*)0)) != 0)
  return;
 VAR_9 = VAR_5;
 if (FUNC_3(&VAR_9, VAR_8, ((void*)0)) != 0)
  return;

 FUNC_5((VAR_3, "%s: sending unsolicited NA\n",
     FUNC_2(VAR_6->ifa_ifp)));

 FUNC_4(VAR_8, &VAR_9, &VAR_10, VAR_4, 1, ((void*)0));
}
