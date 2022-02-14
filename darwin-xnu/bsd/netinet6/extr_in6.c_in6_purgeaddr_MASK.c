
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct in6_multi_mship {int dummy; } ;
struct TYPE_6__ {struct in6_multi_mship* lh_first; } ;
struct TYPE_5__ {int sin6_addr; } ;
struct TYPE_4__ {scalar_t__ sin6_family; } ;
struct in6_ifaddr {int ia_flags; int ia_plen; TYPE_3__ ia6_memberships; int ia_ifa; TYPE_2__ ia_addr; TYPE_1__ ia_dstaddr; } ;
struct ifnet {int dummy; } ;
struct ifaddr {struct ifnet* ifa_ifp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (struct ifaddr*) ;
 int VAR_1 ;
 int FUNC_2 (struct ifaddr*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct in6_multi_mship*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ifnet*,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct in6_multi_mship*) ;
 int FUNC_9 (struct ifnet*,int ,struct in6_ifaddr*,int *) ;
 int FUNC_10 (struct in6_ifaddr*,struct ifnet*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,char*,int ,int ,int) ;
 int FUNC_13 (struct ifaddr*) ;
 int VAR_8 ;
 int FUNC_14 (int *,int ,int) ;

void
FUNC_15(struct ifaddr *VAR_9)
{
 struct ifnet *VAR_10 = VAR_9->ifa_ifp;
 struct in6_ifaddr *VAR_11 = (struct in6_ifaddr *)VAR_9;
 struct in6_multi_mship *VAR_12;

 FUNC_3(VAR_8, VAR_3);


 FUNC_13(VAR_9);





 FUNC_0(VAR_9);
 if ((VAR_11->ia_flags & VAR_1) && VAR_11->ia_plen == 128) {
  int VAR_13, VAR_14;

  FUNC_2(VAR_9);
  VAR_14 = (VAR_11->ia_dstaddr.sin6_family == VAR_0) ? VAR_5 : 0;
  VAR_13 = FUNC_14(&(VAR_11->ia_ifa), VAR_6, VAR_14);
  if (VAR_13 != 0) {
   FUNC_12(VAR_4, "in6_purgeaddr: failed to remove "
       "a route to the p2p destination: %s on %s, "
       "errno=%d\n",
       FUNC_11(&VAR_11->ia_addr.sin6_addr), FUNC_5(VAR_10),
       VAR_13);

  }
  FUNC_1(VAR_9);
  VAR_11->ia_flags &= ~VAR_1;
 }
 FUNC_2(VAR_9);


 FUNC_7(&(VAR_11->ia_ifa));




 FUNC_0(VAR_9);
 while ((VAR_12 = VAR_11->ia6_memberships.lh_first) != ((void*)0)) {
  FUNC_4(VAR_12, VAR_7);
  FUNC_2(VAR_9);
  FUNC_8(VAR_12);
  FUNC_0(VAR_9);
 }
 FUNC_2(VAR_9);


 FUNC_10(VAR_11, VAR_10);
 FUNC_9(VAR_10, VAR_2, VAR_11, ((void*)0));

 (void) FUNC_6(VAR_10, VAR_0);
}
