
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_6__ {int rmx_locks; int rmx_mtu; } ;
struct rtentry {int rt_flags; struct ifaddr* rt_ifa; struct ifnet* rt_ifp; TYPE_1__ rt_rmx; int (* rt_if_ref_fn ) (struct ifnet*,int) ;int (* rt_llinfo_purge ) (struct rtentry*) ;} ;
struct ifnet {int if_flags; int if_mtu; int if_index; int if_addrhead; } ;
struct ifaddr {void (* ifa_rtrequest ) (int,struct rtentry*,struct sockaddr*) ;struct ifnet* ifa_ifp; } ;
struct TYPE_7__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (struct ifaddr*) ;
 int FUNC_2 (struct ifaddr*) ;
 int FUNC_3 (struct ifaddr*) ;
 int VAR_3 ;
 int FUNC_4 (struct ifnet*) ;
 scalar_t__ FUNC_5 (struct ifnet*) ;
 int FUNC_6 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct rtentry*) ;
 int FUNC_8 (struct rtentry*) ;
 int FUNC_9 (struct rtentry*) ;
 int FUNC_10 (struct rtentry*) ;
 int FUNC_11 (struct rtentry*) ;
 int FUNC_12 (struct rtentry*) ;
 struct ifaddr* FUNC_13 (int *) ;
 struct ifnet* FUNC_14 (struct sockaddr*) ;
 struct ifaddr* FUNC_15 (TYPE_2__*) ;
 struct ifaddr* FUNC_16 (struct sockaddr*,unsigned int) ;
 struct ifaddr* FUNC_17 (struct sockaddr*,unsigned int) ;
 struct ifaddr* FUNC_18 (int,TYPE_2__*,struct sockaddr*,unsigned int) ;
 struct ifaddr* FUNC_19 (struct sockaddr*,struct ifnet*) ;
 int FUNC_20 (struct ifnet*) ;
 int FUNC_21 (struct ifnet*) ;
 int VAR_10 ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 TYPE_2__* FUNC_24 (struct rtentry*) ;
 scalar_t__ FUNC_25 (struct rtentry*,TYPE_2__*) ;
 int FUNC_26 (struct rtentry*,struct ifaddr*) ;
 int FUNC_27 (scalar_t__,int ) ;
 int FUNC_28 (struct rtentry*) ;
 int FUNC_29 (struct ifnet*,int) ;
 int FUNC_30 (struct ifnet*,int) ;

__attribute__((used)) static void
FUNC_31(struct rtentry *VAR_11, struct sockaddr *VAR_12, struct sockaddr *VAR_13,
    struct sockaddr *VAR_14, unsigned int VAR_15)
{
 struct ifaddr *VAR_16 = ((void*)0);
 struct ifnet *VAR_17 = ((void*)0);
 void (*VAR_18)(int, struct rtentry *, struct sockaddr *);

 FUNC_6(VAR_10, VAR_4);

 FUNC_10(VAR_11);


 if (VAR_11->rt_flags & VAR_5)
  return;


 FUNC_7(VAR_11);


 FUNC_8(VAR_11);






 if (VAR_12 && (VAR_16 = FUNC_17(VAR_12, VAR_15)) &&
     (VAR_17 = VAR_16->ifa_ifp) && (VAR_13 || VAR_14)) {
  FUNC_2(VAR_16);
  VAR_16 = FUNC_19(VAR_13 ? VAR_13 : VAR_14, VAR_17);
 } else {
  if (VAR_16 != ((void*)0)) {
   FUNC_2(VAR_16);
   VAR_16 = ((void*)0);
  }
  if (VAR_12 && (VAR_17 = FUNC_14(VAR_12))) {
   if (VAR_14) {
    VAR_16 = FUNC_19(VAR_14, VAR_17);
   } else {
    FUNC_21(VAR_17);
    VAR_16 = FUNC_13(&VAR_17->if_addrhead);
    if (VAR_16 != ((void*)0))
     FUNC_0(VAR_16);
    FUNC_20(VAR_17);
   }
  } else if (VAR_13 &&
      (VAR_16 = FUNC_16(VAR_13, VAR_15))) {
   VAR_17 = VAR_16->ifa_ifp;
  } else if (VAR_14 != ((void*)0)) {







   FUNC_12(VAR_11);
   if ((VAR_16 = FUNC_18(VAR_11->rt_flags,
       FUNC_24(VAR_11), VAR_14, VAR_15)) != ((void*)0))
    VAR_17 = VAR_16->ifa_ifp;
   FUNC_9(VAR_11);

   if (VAR_11->rt_flags & VAR_5) {
    if (VAR_16 != ((void*)0))
     FUNC_2(VAR_16);

    FUNC_11(VAR_11);
    return;
   }
  }
 }


 if (FUNC_24(VAR_11)->sa_family == VAR_0)
  FUNC_23();





 if (VAR_16 != ((void*)0)) {
  struct ifaddr *VAR_19 = VAR_11->rt_ifa;
  if (VAR_19 != VAR_16) {
   if (VAR_19 != ((void*)0)) {
    FUNC_1(VAR_19);
    VAR_18 = VAR_19->ifa_rtrequest;
    FUNC_3(VAR_19);
    if (VAR_18 != ((void*)0))
     VAR_18(VAR_8, VAR_11, VAR_14);
   }
   FUNC_26(VAR_11, VAR_16);

   if (VAR_11->rt_ifp != VAR_17) {



    if (VAR_11->rt_llinfo_purge != ((void*)0))
     VAR_11->rt_llinfo_purge(VAR_11);




    if (VAR_11->rt_if_ref_fn != ((void*)0)) {
     VAR_11->rt_if_ref_fn(VAR_17, 1);
     VAR_11->rt_if_ref_fn(VAR_11->rt_ifp, -1);
    }
   }
   VAR_11->rt_ifp = VAR_17;




   if (FUNC_25(VAR_11, FUNC_24(VAR_11))) {
    FUNC_27(FUNC_24(VAR_11)->sa_family,
        VAR_11->rt_ifp->if_index);
   }




   if (!(VAR_11->rt_rmx.rmx_locks & VAR_9)) {
    VAR_11->rt_rmx.rmx_mtu = VAR_11->rt_ifp->if_mtu;
    if (FUNC_24(VAR_11)->sa_family == VAR_0 &&
        FUNC_5(VAR_17)) {
     VAR_11->rt_rmx.rmx_mtu = FUNC_4(VAR_11->rt_ifp);

     VAR_11->rt_rmx.rmx_mtu -= VAR_2;
    }
   }

   if (VAR_11->rt_ifa != ((void*)0)) {
    FUNC_1(VAR_11->rt_ifa);
    VAR_18 = VAR_11->rt_ifa->ifa_rtrequest;
    FUNC_3(VAR_11->rt_ifa);
    if (VAR_18 != ((void*)0))
     VAR_18(VAR_7, VAR_11, VAR_14);
   }
   FUNC_2(VAR_16);

   FUNC_11(VAR_11);
   return;
  }
  FUNC_2(VAR_16);
  VAR_16 = ((void*)0);
 }


 if (VAR_11->rt_ifa != ((void*)0)) {
  FUNC_1(VAR_11->rt_ifa);
  VAR_18 = VAR_11->rt_ifa->ifa_rtrequest;
  FUNC_3(VAR_11->rt_ifa);
  if (VAR_18 != ((void*)0))
   VAR_18(VAR_7, VAR_11, VAR_14);
 }





 if ((VAR_11->rt_ifp->if_flags & VAR_3) &&
     (VAR_11->rt_flags & VAR_6) && VAR_11->rt_ifa->ifa_ifp == VAR_11->rt_ifp) {
  VAR_16 = FUNC_15(FUNC_24(VAR_11));
  if (VAR_16 != ((void*)0)) {
   if (VAR_16 != VAR_11->rt_ifa)
    FUNC_26(VAR_11, VAR_16);
   FUNC_2(VAR_16);
  }
 }


 FUNC_11(VAR_11);
}
