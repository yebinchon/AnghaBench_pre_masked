
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtentry {int rt_flags; TYPE_2__* rt_ifp; } ;
struct TYPE_3__ {int sin6_addr; } ;
struct in6_ifaddr {int ia_ifa; TYPE_1__ ia_addr; struct in6_ifaddr* ia_next; } ;
struct ifaddr {int ifa_addr; } ;
struct TYPE_4__ {int if_flags; } ;


 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct rtentry*) ;
 int FUNC_5 (struct rtentry*) ;
 int FUNC_6 (struct rtentry*) ;
 int VAR_3 ;
 struct in6_ifaddr* VAR_4 ;
 int FUNC_7 (int ,struct ifaddr*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct rtentry* FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_11(struct ifaddr *VAR_5)
{
 struct in6_ifaddr *VAR_6;
 struct rtentry *VAR_7;
 int VAR_8 = 0;
 FUNC_9(&VAR_3);
 for (VAR_6 = VAR_4; VAR_6; VAR_6 = VAR_6->ia_next) {
  FUNC_1(&VAR_6->ia_ifa);
  if (FUNC_3(FUNC_0(VAR_5), &VAR_6->ia_addr.sin6_addr)) {
   VAR_8++;
   if (VAR_8 > 1) {
    FUNC_2(&VAR_6->ia_ifa);
    break;
   }
  }
  FUNC_2(&VAR_6->ia_ifa);
 }
 FUNC_8(&VAR_3);

 if (VAR_8 == 1) {
  VAR_7 = FUNC_10(VAR_5->ifa_addr, 0, 0);
  if (VAR_7 != ((void*)0)) {
   FUNC_4(VAR_7);
   if ((VAR_7->rt_flags & VAR_1) != 0 &&
       (VAR_7->rt_ifp->if_flags & VAR_0) != 0) {
    FUNC_5(VAR_7);
    FUNC_6(VAR_7);
    FUNC_7(VAR_2, VAR_5);
   } else {
    FUNC_6(VAR_7);
   }
  }
 }
}
