
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct lltable {struct ifnet* llt_ifp; } ;
struct llentry {int la_flags; int ln_state; } ;
struct ifnet {TYPE_1__* if_lladdr; } ;
struct TYPE_2__ {int ifa_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 struct llentry* FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (struct ifnet*,int,struct sockaddr const*) ;
 int FUNC_5 (struct ifnet*,struct llentry*,int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static struct llentry *
FUNC_7(struct lltable *VAR_5, u_int VAR_6,
  const struct sockaddr *VAR_7)
{
 const struct sockaddr_in6 *VAR_8 = (const struct sockaddr_in6 *)(const void *)VAR_7;
 struct ifnet *VAR_9 = VAR_5->llt_ifp;
 struct llentry *VAR_10;

 FUNC_0(VAR_7->sa_family == VAR_0,
   ("sin_family %d", VAR_7->sa_family));






 if (!(VAR_6 & VAR_1) &&
   FUNC_4(VAR_9, VAR_6, VAR_7) != 0)
  return (((void*)0));

 VAR_10 = FUNC_3(&VAR_8->sin6_addr, VAR_6);
 if (VAR_10 == ((void*)0)) {
  FUNC_6(VAR_3, "lla_lookup: new lle malloc failed\n");
  return (((void*)0));
 }
 VAR_10->la_flags = VAR_6;
 if ((VAR_6 & VAR_1) == VAR_1) {
  FUNC_5(VAR_9, VAR_10, FUNC_1(FUNC_2(VAR_9->if_lladdr->ifa_addr)));
  VAR_10->la_flags |= VAR_2;
 }

 if ((VAR_10->la_flags & VAR_2) != 0)
  VAR_10->ln_state = VAR_4;

 return (VAR_10);
}
