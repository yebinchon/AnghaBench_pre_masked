
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct rtentry {int rt_flags; struct ifnet* rt_ifp; int rt_gateway; } ;
struct in6_addr {int dummy; } ;
struct TYPE_6__ {struct in6_addr sin6_addr; } ;
struct route_in6 {struct rtentry* ro_rt; TYPE_3__ ro_dst; } ;
struct TYPE_4__ {int sin6_addr; } ;
struct nd_prefix {int ndpr_stateflags; scalar_t__ ndpr_plen; struct ifnet* ndpr_ifp; TYPE_1__ ndpr_prefix; struct nd_prefix* ndpr_next; int ndpr_mask; } ;
struct ifnet {int if_index; } ;
typedef int pr_addr ;
struct TYPE_5__ {struct nd_prefix* lh_first; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct in6_addr*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct nd_prefix*) ;
 int FUNC_2 (struct nd_prefix*) ;
 int FUNC_3 (struct route_in6*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct rtentry*) ;
 int FUNC_5 (struct rtentry*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,struct in6_addr*,int) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (int *,struct in6_addr*,scalar_t__) ;
 int FUNC_11 (struct in6_addr*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int VAR_11 ;
 int FUNC_14 (int ) ;
 TYPE_2__ VAR_12 ;
 int VAR_13 ;
 int FUNC_15 (struct rtentry*) ;
 int FUNC_16 (struct rtentry*) ;
 struct rtentry* FUNC_17 (int ,int,int,int ) ;
 int FUNC_18 (struct rtentry*) ;
 int FUNC_19 (int ,int ,int ,int ,int,int *) ;

void
FUNC_20(struct ifnet *VAR_14, struct route_in6 *VAR_15)
{
 struct in6_addr *VAR_16 = &VAR_15->ro_dst.sin6_addr;
 struct ifnet *VAR_17 = ((void*)0);
 struct nd_prefix *VAR_18;
 struct rtentry *VAR_19;

 if ((VAR_19 = VAR_15->ro_rt) != ((void*)0)) {
  FUNC_4(VAR_19);
  if (!(VAR_19->rt_flags & VAR_9) || VAR_19->rt_ifp == VAR_14) {
   FUNC_14((VAR_1, "%s: found incorrect prefix "
       "proxy route for dst %s on %s\n", FUNC_9(VAR_14),
       FUNC_11(VAR_16),
       FUNC_9(VAR_19->rt_ifp)));
   FUNC_5(VAR_19);

  } else {
   FUNC_5(VAR_19);





   return;
  }
 }
 FUNC_12(VAR_11);
 for (VAR_18 = VAR_12.lh_first; VAR_18; VAR_18 = VAR_18->ndpr_next) {
  struct in6_addr VAR_20;
  struct nd_prefix *VAR_21;
  u_char VAR_22;

  FUNC_1(VAR_18);
  if (!(VAR_18->ndpr_stateflags & VAR_4) ||
      !(VAR_18->ndpr_stateflags & VAR_5) ||
      !FUNC_0(&VAR_18->ndpr_prefix.sin6_addr,
      VAR_16, &VAR_18->ndpr_mask)) {
   FUNC_2(VAR_18);
   continue;
  }

  FUNC_7(!(VAR_18->ndpr_stateflags & VAR_3));
  FUNC_8(&VAR_18->ndpr_prefix.sin6_addr, &VAR_20, sizeof (VAR_20));
  VAR_22 = VAR_18->ndpr_plen;
  FUNC_2(VAR_18);

  for (VAR_21 = VAR_12.lh_first; VAR_21; VAR_21 = VAR_21->ndpr_next) {
   FUNC_1(VAR_21);
   if (!(VAR_21->ndpr_stateflags & VAR_4) ||
       VAR_21->ndpr_ifp == VAR_14 ||
       VAR_21->ndpr_plen != VAR_22 ||
       !FUNC_10(&VAR_21->ndpr_prefix.sin6_addr,
       &VAR_20, VAR_22)) {
    FUNC_2(VAR_21);
    continue;
   }

   VAR_17 = VAR_21->ndpr_ifp;
   FUNC_2(VAR_21);
   break;
  }
  break;
 }
 FUNC_13(VAR_11);

 FUNC_12(VAR_13);
 FUNC_3(VAR_15);






 if ((VAR_19 = FUNC_17(FUNC_6(&VAR_15->ro_dst), 0,
     VAR_6 | VAR_8, VAR_0)) != ((void*)0)) {
  FUNC_4(VAR_19);
  if (VAR_19->rt_ifp != VAR_17 || !(VAR_19->rt_flags & VAR_9)) {
   VAR_19->rt_flags |= VAR_7;
   FUNC_5(VAR_19);
   (void) FUNC_19(VAR_10, FUNC_15(VAR_19),
       VAR_19->rt_gateway, FUNC_16(VAR_19), VAR_19->rt_flags, ((void*)0));
   FUNC_18(VAR_19);
   VAR_19 = ((void*)0);
  } else {
   FUNC_14((VAR_1, "%s: found prefix proxy route "
       "for dst %s\n", FUNC_9(VAR_19->rt_ifp),
       FUNC_11(VAR_16)));
   FUNC_5(VAR_19);
   VAR_15->ro_rt = VAR_19;
   FUNC_13(VAR_13);
   return;
  }
 }
 FUNC_7(VAR_19 == ((void*)0) && VAR_15->ro_rt == ((void*)0));




 if (VAR_17 != ((void*)0) && (VAR_19 = FUNC_17(FUNC_6(&VAR_15->ro_dst), 1,
     VAR_8, VAR_17->if_index)) != ((void*)0)) {
  FUNC_4(VAR_19);
  if (!(VAR_19->rt_flags & VAR_9)) {
   FUNC_5(VAR_19);
   FUNC_18(VAR_19);
   VAR_19 = ((void*)0);
  } else {
   FUNC_14((VAR_1, "%s: allocated prefix proxy "
       "route for dst %s\n", FUNC_9(VAR_19->rt_ifp),
       FUNC_11(VAR_16)));
   FUNC_5(VAR_19);
   VAR_15->ro_rt = VAR_19;
  }
 }
 FUNC_7(VAR_19 != ((void*)0) || VAR_15->ro_rt == ((void*)0));

 if (VAR_17 == ((void*)0) || VAR_19 == ((void*)0)) {
  FUNC_14((VAR_2, "%s: failed to find forwarding prefix "
      "proxy entry for dst %s\n", FUNC_9(VAR_14),
      FUNC_11(VAR_16)));
 }
 FUNC_13(VAR_13);
}
