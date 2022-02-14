
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct lltable {struct ifnet* llt_ifp; } ;
struct llentry {int la_flags; int r_flags; } ;
struct ifnet {TYPE_1__* if_lladdr; } ;
struct TYPE_2__ {int ifa_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 struct llentry* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct ifnet*,int,struct sockaddr const*) ;
 int FUNC_5 (struct ifnet*,struct llentry*,int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static struct llentry *
FUNC_7(struct lltable *VAR_7, u_int VAR_8, const struct sockaddr *VAR_9)
{
 const struct sockaddr_in *VAR_10 = (const struct sockaddr_in *) (const void *)VAR_9;
 struct ifnet *VAR_11 = VAR_7->llt_ifp;
 struct llentry *VAR_12;

 FUNC_0(VAR_9->sa_family == VAR_0,
   ("sin_family %d", VAR_9->sa_family));






 if (!(VAR_8 & VAR_2) &&
   FUNC_4(VAR_11, VAR_8, VAR_9) != 0)
  return (((void*)0));

 VAR_12 = FUNC_3(VAR_10->sin_addr, VAR_8);
 if (VAR_12 == ((void*)0)) {
  FUNC_6(VAR_4, "lla_lookup: new lle malloc failed\n");
  return (((void*)0));
 }
 VAR_12->la_flags = VAR_8 & ~VAR_1;
 if (VAR_8 & VAR_3)
  VAR_12->r_flags |= VAR_6;
 if ((VAR_8 & VAR_2) == VAR_2) {
  FUNC_5(VAR_11, VAR_12, FUNC_1(FUNC_2(VAR_11->if_lladdr->ifa_addr)));
  VAR_12->la_flags |= VAR_3;
  VAR_12->r_flags |= (VAR_6 | VAR_5);
 }
 return (VAR_12);
}
