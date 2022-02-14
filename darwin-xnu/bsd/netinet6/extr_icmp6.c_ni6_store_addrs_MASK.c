
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int u_int32_t ;
typedef int u_char ;
struct TYPE_8__ {int sin6_addr; } ;
struct in6_addrlifetime_i {scalar_t__ ia6ti_expire; } ;
struct in6_ifaddr {int ia6_flags; TYPE_4__ ia_addr; struct in6_addrlifetime_i ia6_lifetime; } ;
struct in6_addr {scalar_t__* s6_addr16; } ;
struct TYPE_5__ {struct ifaddr* tqh_first; } ;
struct ifnet {TYPE_1__ if_addrlist; } ;
struct TYPE_6__ {struct ifaddr* tqe_next; } ;
struct ifaddr {TYPE_3__* ifa_addr; TYPE_2__ ifa_list; } ;
struct icmp6_nodeinfo {int ni_flags; } ;
struct TYPE_7__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (struct ifaddr*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct ifnet* FUNC_3 (int *) ;
 struct ifnet* FUNC_4 (struct ifnet*,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct ifnet*) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 () ;

__attribute__((used)) static int
FUNC_13(struct icmp6_nodeinfo *VAR_15, struct icmp6_nodeinfo *VAR_16,
  struct ifnet *VAR_17, int VAR_18)
{
 struct ifnet *VAR_19 = VAR_17;
 struct in6_ifaddr *VAR_20;
 struct ifaddr *VAR_21;
 struct ifnet *VAR_22 = ((void*)0);
 int VAR_23 = 0, VAR_24 = 0;
 u_char *VAR_25 = (u_char *)(VAR_16 + 1);
 int VAR_26 = VAR_15->ni_flags;
 u_int32_t VAR_27;
 uint64_t VAR_28 = FUNC_12();

 if (VAR_17 == ((void*)0) && !(VAR_26 & VAR_6))
  return (0);

  again:

 FUNC_8();
 if (VAR_19 == ((void*)0))
  VAR_19 = FUNC_3(&VAR_14);

 for (; VAR_19; VAR_19 = FUNC_4(VAR_19, VAR_13)) {
  FUNC_10(VAR_19);
  for (VAR_21 = VAR_19->if_addrlist.tqh_first; VAR_21;
       VAR_21 = VAR_21->ifa_list.tqe_next) {
   struct in6_addrlifetime_i *VAR_29;

   FUNC_0(VAR_21);
   if (VAR_21->ifa_addr->sa_family != VAR_0) {
    FUNC_1(VAR_21);
    continue;
   }
   VAR_20 = (struct in6_ifaddr *)VAR_21;

   if ((VAR_20->ia6_flags & VAR_3) != 0 &&
       VAR_24 == 0) {






    if (VAR_22 == ((void*)0))
     VAR_22 = VAR_19;

    FUNC_1(VAR_21);
    continue;
   } else if ((VAR_20->ia6_flags & VAR_3) == 0 &&
       VAR_24 != 0) {
    FUNC_1(VAR_21);
    continue;
   }

   switch (FUNC_11(&VAR_20->ia_addr.sin6_addr)) {
   case 129:
    if ((VAR_26 & VAR_9) == 0) {
     FUNC_1(VAR_21);
     continue;
    }
    break;
   case 128:
    if ((VAR_26 & VAR_10) == 0) {
     FUNC_1(VAR_21);
     continue;
    }
    break;
   case 130:
    if ((VAR_26 & VAR_8) == 0) {
     FUNC_1(VAR_21);
     continue;
    }
    break;
   default:
    FUNC_1(VAR_21);
    continue;
   }





   if ((VAR_20->ia6_flags & VAR_2) != 0 &&
       (VAR_26 & VAR_7) == 0) {
    FUNC_1(VAR_21);
    continue;
   }
   if ((VAR_20->ia6_flags & VAR_4) != 0 &&
       (VAR_12 & VAR_1) == 0) {
    FUNC_1(VAR_21);
    continue;
   }


   if (VAR_18 < sizeof(struct in6_addr) +
       sizeof(u_int32_t)) {
    FUNC_1(VAR_21);




    VAR_16->ni_flags |=
     VAR_11;
    FUNC_9(VAR_19);
    FUNC_7();
    return(VAR_23);
   }
   VAR_29 = &VAR_20->ia6_lifetime;
   if (VAR_29->ia6ti_expire == 0) {
    VAR_27 = VAR_5;
   } else {
    if (VAR_29->ia6ti_expire > VAR_28)
     VAR_27 = FUNC_6(VAR_29->ia6ti_expire - VAR_28);
    else
     VAR_27 = 0;
   }

   FUNC_5(&VAR_27, VAR_25, sizeof(u_int32_t));
   VAR_25 += sizeof(u_int32_t);


   FUNC_5(&VAR_20->ia_addr.sin6_addr, VAR_25,
         sizeof(struct in6_addr));

   if (FUNC_2(&VAR_20->ia_addr.sin6_addr))
    ((struct in6_addr *)(void *)VAR_25)->s6_addr16[1] = 0;
   VAR_25 += sizeof(struct in6_addr);

   VAR_18 -= (sizeof(struct in6_addr) + sizeof(u_int32_t));
   VAR_23 += (sizeof(struct in6_addr) +
       sizeof(u_int32_t));
   FUNC_1(VAR_21);
  }
  FUNC_9(VAR_19);
  if (VAR_17)
   break;
 }
 FUNC_7();

 if (VAR_24 == 0 && VAR_22 != ((void*)0)) {
  VAR_19 = VAR_22;
  VAR_24 = 1;

  goto again;
 }

 return(VAR_23);
}
