
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct in6_addr {int dummy; } ;
struct sockaddr_in6 {unsigned int ip6oa_boundif; int ip6oa_flags; int sin6_len; struct in6_addr sin6_addr; int sin6_family; int ip6oa_netsvctype; int ip6oa_sotc; } ;
struct sockaddr {int dummy; } ;
struct route_in6 {int dummy; } ;
struct ip6_pktopts {scalar_t__ ip6po_prefer_tempaddr; struct in6_pktinfo* ip6po_pktinfo; } ;
struct ip6_out_args {unsigned int ip6oa_boundif; int ip6oa_flags; int sin6_len; struct in6_addr sin6_addr; int sin6_family; int ip6oa_netsvctype; int ip6oa_sotc; } ;
struct ip6_moptions {int dummy; } ;
struct inpcb {struct in6_addr in6p_laddr; struct ip6_moptions* in6p_moptions; } ;
struct in6_pktinfo {struct in6_addr ipi6_addr; } ;
struct TYPE_6__ {struct ifnet* ifa_ifp; } ;
struct in6_ifaddr {int ia6_flags; TYPE_2__ ia_ifa; int ia_addr; } ;
struct ifnet {int dummy; } ;
typedef int srcsock ;
typedef int ip6oa ;
typedef int boolean_t ;
struct TYPE_5__ {struct in6_addr sin6_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct in6_addr*) ;
 scalar_t__ FUNC_4 (struct inpcb*) ;
 scalar_t__ FUNC_5 (struct inpcb*) ;
 scalar_t__ FUNC_6 (struct inpcb*) ;
 scalar_t__ FUNC_7 (struct inpcb*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (struct inpcb*) ;
 int VAR_17 ;
 int FUNC_9 (int ) ;
 int VAR_18 ;
 int FUNC_10 (struct sockaddr_in6*,int) ;
 scalar_t__ FUNC_11 (struct sockaddr*) ;
 int FUNC_12 (struct ifnet*) ;
 int FUNC_13 (struct sockaddr_in6*,struct ip6_pktopts*,struct ip6_moptions*,struct route_in6*,struct sockaddr_in6*,struct ifnet**) ;
 int * FUNC_14 (struct sockaddr_in6*,int ,struct ifnet*,int ,struct in6_addr*,struct ifnet**,int*,int *) ;
 int FUNC_15 (struct in6_addr*,struct ifnet*,int *) ;
 scalar_t__ FUNC_16 (struct inpcb*,struct ifnet*) ;
 int VAR_19 ;
 TYPE_1__* FUNC_17 (int *) ;

struct in6_addr *
FUNC_18(struct sockaddr_in6 *VAR_20, struct ip6_pktopts *VAR_21,
    struct inpcb *VAR_22, struct route_in6 *VAR_23,
    struct ifnet **VAR_24, struct in6_addr *VAR_25, unsigned int VAR_26,
    int *VAR_27)
{
 struct ifnet *VAR_28 = ((void*)0);
 struct in6_pktinfo *VAR_29 = ((void*)0);
 struct ip6_moptions *VAR_30;
 struct ip6_out_args VAR_31;
 boolean_t VAR_32 = VAR_3;
 uint32_t VAR_33 = 0;
 int VAR_34 = 0;
 struct ifnet *VAR_35 = ((void*)0);

 FUNC_10(&VAR_31, sizeof(VAR_31));
 VAR_31.ip6oa_boundif = VAR_26;
 VAR_31.ip6oa_flags = VAR_13;
 VAR_31.ip6oa_sotc = VAR_17;
 VAR_31.ip6oa_netsvctype = VAR_18;

 *VAR_27 = 0;
 if (VAR_24 != ((void*)0))
  *VAR_24 = ((void*)0);

 if (VAR_22 != ((void*)0)) {
  VAR_32 = FUNC_8(VAR_22);
  VAR_30 = VAR_22->in6p_moptions;
  if (FUNC_6(VAR_22))
   VAR_31.ip6oa_flags |= VAR_11;
  if (FUNC_7(VAR_22))
   VAR_31.ip6oa_flags |= VAR_12;
  if (FUNC_4(VAR_22))
   VAR_31.ip6oa_flags |= VAR_8;
  if (FUNC_5(VAR_22))
   VAR_31.ip6oa_flags |= VAR_10;
 } else {
  VAR_30 = ((void*)0);

  VAR_31.ip6oa_flags |= VAR_10 |
      VAR_8;
 }

 if (VAR_31.ip6oa_boundif != VAR_4)
  VAR_31.ip6oa_flags |= VAR_9;







 if (VAR_21 && (VAR_29 = VAR_21->ip6po_pktinfo) &&
     !FUNC_3(&VAR_29->ipi6_addr)) {
  struct sockaddr_in6 VAR_36;
  struct in6_ifaddr *VAR_37;


  if ((*VAR_27 = FUNC_13(VAR_20, VAR_21, VAR_30, VAR_23, &VAR_31,
      &VAR_28)) != 0) {
   VAR_25 = ((void*)0);
   goto done;
  }
  FUNC_10(&VAR_36, sizeof (VAR_36));
  VAR_36.sin6_family = VAR_0;
  VAR_36.sin6_len = sizeof (VAR_36);
  VAR_36.sin6_addr = VAR_29->ipi6_addr;
  if (VAR_28 != ((void*)0)) {
   *VAR_27 = FUNC_15(&VAR_36.sin6_addr, VAR_28, ((void*)0));
   if (*VAR_27 != 0) {
    VAR_25 = ((void*)0);
    goto done;
   }
  }
  VAR_37 = (struct in6_ifaddr *)FUNC_11((struct sockaddr *)
      (&VAR_36));
  if (VAR_37 == ((void*)0)) {
   *VAR_27 = VAR_1;
   VAR_25 = ((void*)0);
   goto done;
  }
  FUNC_0(&VAR_37->ia_ifa);
  if ((VAR_37->ia6_flags & (VAR_5 | VAR_7 | VAR_6)) ||
      (VAR_22 && FUNC_16(VAR_22, VAR_37->ia_ifa.ifa_ifp))) {
   FUNC_2(&VAR_37->ia_ifa);
   FUNC_1(&VAR_37->ia_ifa);
   *VAR_27 = VAR_2;
   VAR_25 = ((void*)0);
   goto done;
  }

  *VAR_25 = FUNC_17(&VAR_37->ia_addr)->sin6_addr;
  FUNC_2(&VAR_37->ia_ifa);
  FUNC_1(&VAR_37->ia_ifa);
  goto done;
 }




 if (VAR_22 != ((void*)0) && !FUNC_3(&VAR_22->in6p_laddr)) {
  VAR_25 = &VAR_22->in6p_laddr;
  goto done;
 }






 if ((*VAR_27 = FUNC_13(VAR_20, VAR_21, VAR_30, VAR_23, &VAR_31,
     &VAR_28)) != 0) {
  VAR_25 = ((void*)0);
  goto done;
 }

 FUNC_9(VAR_28 != ((void*)0));

 if (VAR_21 == ((void*)0) ||
     VAR_21->ip6po_prefer_tempaddr == VAR_15) {
  VAR_34 = VAR_19;
 } else if (VAR_21->ip6po_prefer_tempaddr == VAR_14) {
  VAR_34 = 0;
 } else
  VAR_34 = 1;

 if (VAR_34)
  VAR_33 |= VAR_16;

 if (FUNC_14(VAR_20, VAR_33, VAR_28, VAR_32, VAR_25,
     &VAR_35, VAR_27, ((void*)0)) == ((void*)0)) {
  VAR_25 = ((void*)0);
  goto done;
 }

 FUNC_9(VAR_35 != ((void*)0));

 if (VAR_22 && FUNC_16(VAR_22, VAR_35)) {
  VAR_25 = ((void*)0);
  *VAR_27 = VAR_2;
  FUNC_12(VAR_35);
  goto done;
 } else {
  FUNC_12(VAR_35);
 }

done:
 if (VAR_24 != ((void*)0)) {

  *VAR_24 = VAR_28;
 } else if (VAR_28 != ((void*)0)) {
  FUNC_12(VAR_28);
 }
 return (VAR_25);
}
