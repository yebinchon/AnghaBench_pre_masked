
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int * s6_addr16; } ;
struct sockaddr_in6 {int sin6_len; TYPE_4__ sin6_addr; scalar_t__ sin6_family; } ;
struct sockaddr {int dummy; } ;
struct rtentry {int rt_flags; struct sockaddr* rt_gateway; struct ifnet* rt_ifp; } ;
struct in6_multi_mship {int dummy; } ;
struct ifaddr {TYPE_3__* ifa_addr; struct ifnet* ifa_ifp; } ;
struct TYPE_5__ {struct in6_multi_mship* lh_first; } ;
struct in6_ifaddr {int ia_flags; struct ifaddr ia_ifa; struct in6_ifaddr* ia_next; int ia_prefixmask; int ia_addr; TYPE_1__ ia6_memberships; } ;
struct ifnet {int if_index; int if_addrlist; } ;
typedef int sin6 ;
struct TYPE_7__ {scalar_t__ sa_family; } ;
struct TYPE_6__ {int sin6_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (struct ifaddr*) ;
 int FUNC_2 (struct ifaddr*) ;
 int FUNC_3 (struct ifaddr*) ;
 int VAR_1 ;
 int FUNC_4 (struct ifaddr*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int VAR_2 ;
 int FUNC_7 (struct in6_multi_mship*,int ) ;
 scalar_t__ FUNC_8 (struct ifnet*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (struct rtentry*) ;
 int FUNC_10 (struct rtentry*) ;
 struct ifaddr* FUNC_11 (int *) ;
 struct ifaddr* FUNC_12 (struct ifaddr*,int ) ;
 int FUNC_13 (struct sockaddr_in6*,int) ;
 int FUNC_14 (int ) ;
 int VAR_6 ;
 int FUNC_15 (struct ifnet*,struct ifaddr*) ;
 int FUNC_16 (struct ifnet*) ;
 int VAR_7 ;
 int FUNC_17 (struct ifnet*) ;
 int FUNC_18 (struct ifnet*) ;
 int VAR_8 ;
 struct in6_ifaddr* VAR_9 ;
 int FUNC_19 (struct in6_multi_mship*) ;
 int FUNC_20 (struct ifaddr*) ;
 TYPE_4__ VAR_10 ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (scalar_t__) ;
 int VAR_11 ;
 int FUNC_24 (struct ifnet*) ;
 int FUNC_25 (int ) ;
 int FUNC_26 () ;
 struct sockaddr* FUNC_27 (struct rtentry*) ;
 struct sockaddr* FUNC_28 (struct rtentry*) ;
 struct rtentry* FUNC_29 (struct sockaddr*,int ,int ) ;
 int FUNC_30 (struct rtentry*) ;
 int FUNC_31 (int ,struct sockaddr*,struct sockaddr*,struct sockaddr*,int ,struct rtentry**) ;
 TYPE_2__* FUNC_32 (TYPE_3__**) ;

void
FUNC_33(struct ifnet *VAR_12)
{
 struct in6_ifaddr *VAR_13, *VAR_14;
 struct ifaddr *VAR_15;
 struct rtentry *VAR_16;
 struct sockaddr_in6 VAR_17;
 struct in6_multi_mship *VAR_18;
 int VAR_19;

 FUNC_6(VAR_11, VAR_2);


 FUNC_24(VAR_12);

 if (FUNC_8(VAR_12))
  FUNC_23(FUNC_8(VAR_12));


 FUNC_22(&VAR_8);
 VAR_13 = VAR_9;
 while (VAR_13 != ((void*)0)) {
  if (VAR_13->ia_ifa.ifa_ifp != VAR_12) {
   VAR_13 = VAR_13->ia_next;
   continue;
  }
  FUNC_0(&VAR_13->ia_ifa);
  FUNC_21(&VAR_8);
  FUNC_20(&VAR_13->ia_ifa);
  FUNC_3(&VAR_13->ia_ifa);
  FUNC_22(&VAR_8);






  VAR_13 = VAR_9;
 }
 FUNC_21(&VAR_8);

 FUNC_18(VAR_12);


 VAR_15 = FUNC_11(&VAR_12->if_addrlist);
 while (VAR_15 != ((void*)0)) {
  FUNC_2(VAR_15);
  if (VAR_15->ifa_addr->sa_family != VAR_0 ||
      !FUNC_5(&FUNC_32(&VAR_15->ifa_addr)->
      sin6_addr)) {
   FUNC_4(VAR_15);
   VAR_15 = FUNC_12(VAR_15, VAR_7);
   continue;
  }

  VAR_13 = (struct in6_ifaddr *)VAR_15;


  FUNC_1(VAR_15);

  FUNC_15(VAR_12, VAR_15);
  FUNC_4(VAR_15);
  FUNC_17(VAR_12);
  FUNC_2(VAR_15);
  while ((VAR_18 = VAR_13->ia6_memberships.lh_first) != ((void*)0)) {
   FUNC_7(VAR_18, VAR_6);
   FUNC_4(VAR_15);
   FUNC_19(VAR_18);
   FUNC_2(VAR_15);
  }


  if (VAR_13->ia_flags & VAR_1) {
   FUNC_4(VAR_15);
   VAR_16 = FUNC_29((struct sockaddr *)&VAR_13->ia_addr, 0, 0);
   if (VAR_16 != ((void*)0)) {
    (void) FUNC_31(VAR_5,
     (struct sockaddr *)&VAR_13->ia_addr,
     (struct sockaddr *)&VAR_13->ia_addr,
     (struct sockaddr *)&VAR_13->ia_prefixmask,
     VAR_16->rt_flags, (struct rtentry **)0);
    FUNC_30(VAR_16);
   }
  } else {
   FUNC_4(VAR_15);
  }


  VAR_19 = 1;
  VAR_14 = VAR_13;
  FUNC_22(&VAR_8);
  if (VAR_14 == (VAR_13 = VAR_9)) {
   VAR_9 = VAR_13->ia_next;
  } else {
   while (VAR_13->ia_next && (VAR_13->ia_next != VAR_14))
    VAR_13 = VAR_13->ia_next;
   if (VAR_13->ia_next) {
    VAR_13->ia_next = VAR_14->ia_next;
   } else {
    FUNC_25((VAR_3,
        "%s: didn't unlink in6ifaddr from "
        "list\n", FUNC_16(VAR_12)));
    VAR_19 = 0;
   }
  }
  FUNC_21(&VAR_8);

  VAR_15 = &VAR_14->ia_ifa;






  if (VAR_19)
   FUNC_3(VAR_15);

  FUNC_3(VAR_15);






  FUNC_18(VAR_12);
  VAR_15 = FUNC_11(&VAR_12->if_addrlist);
 }
 FUNC_17(VAR_12);


 FUNC_26();
 FUNC_24(VAR_12);


 FUNC_13(&VAR_17, sizeof (VAR_17));
 VAR_17 = sizeof (struct sockaddr_in6);
 VAR_17 = VAR_0;
 VAR_17 = VAR_10;
 VAR_17[1] = FUNC_14(VAR_12->if_index);
 VAR_16 = FUNC_29((struct sockaddr *)&VAR_17, 0, 0);
 if (VAR_16 != ((void*)0)) {
  FUNC_9(VAR_16);
  if (VAR_16->rt_ifp == VAR_12) {





   VAR_16->rt_flags |= VAR_4;
   FUNC_10(VAR_16);
   (void) FUNC_31(VAR_5, FUNC_27(VAR_16), VAR_16->rt_gateway,
       FUNC_28(VAR_16), VAR_16->rt_flags, 0);
  } else {
   FUNC_10(VAR_16);
  }
  FUNC_30(VAR_16);
 }
}
