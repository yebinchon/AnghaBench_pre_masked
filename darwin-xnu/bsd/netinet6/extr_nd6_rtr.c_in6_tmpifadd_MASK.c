
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ uint64_t ;
typedef int u_int8_t ;
typedef int u_int32_t ;
typedef scalar_t__ time_t ;
struct nd_prefix {scalar_t__ ndpr_addrcnt; } ;
struct TYPE_17__ {struct ifnet* ifa_ifp; } ;
struct TYPE_15__ {scalar_t__ ia6ti_vltime; scalar_t__ ia6ti_pltime; } ;
struct in6_addr {int* s6_addr32; int * s6_addr; } ;
struct TYPE_14__ {struct in6_addr sin6_addr; } ;
struct TYPE_12__ {int* s6_addr32; } ;
struct TYPE_13__ {TYPE_1__ sin6_addr; } ;
struct in6_ifaddr {scalar_t__ ia6_updatetime; int ia6_flags; TYPE_6__ ia_ifa; struct nd_prefix* ia6_ndpr; TYPE_4__ ia6_lifetime; TYPE_3__ ia_addr; TYPE_2__ ia_prefixmask; } ;
struct TYPE_16__ {scalar_t__ ia6t_pltime; scalar_t__ ia6t_vltime; } ;
struct in6_aliasreq {int ifra_flags; TYPE_5__ ifra_lifetime; TYPE_3__ ifra_addr; TYPE_2__ ifra_prefixmask; int ifra_name; } ;
struct ifnet {int dummy; } ;
typedef int ifra ;
struct TYPE_11__ {TYPE_6__ ia_ifa; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_10__* FUNC_0 (struct in6_ifaddr const*) ;
 scalar_t__ FUNC_1 (struct in6_ifaddr const*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct in6_ifaddr const*,scalar_t__) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (struct nd_prefix*) ;
 int FUNC_7 (struct nd_prefix*) ;
 int FUNC_8 (struct nd_prefix*) ;
 int FUNC_9 (struct nd_prefix*) ;
 int FUNC_10 (struct nd_prefix*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct in6_aliasreq*,int) ;
 int FUNC_13 (struct ifnet*) ;
 int FUNC_14 (struct ifnet*,int *,int const*,int) ;
 int FUNC_15 (TYPE_6__*) ;
 int FUNC_16 (struct ifnet*,struct in6_aliasreq*,int,struct in6_ifaddr**) ;
 struct in6_ifaddr* FUNC_17 (struct ifnet*,struct in6_addr*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int VAR_13 ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 (int ,int ,int) ;

int
FUNC_24(const struct in6_ifaddr *VAR_14, int VAR_15)
{
 struct ifnet *VAR_16 = VAR_14->ia_ifa.ifa_ifp;
 struct in6_ifaddr *VAR_17, *VAR_18;
 struct in6_aliasreq VAR_19;
 int VAR_20, VAR_21, VAR_22;
 int VAR_23 = 3;
 u_int32_t VAR_24[2];
 time_t VAR_25, VAR_26;
 uint64_t VAR_27 = FUNC_21();
 struct in6_addr VAR_28;
 struct nd_prefix *VAR_29;

 FUNC_12(&VAR_19, sizeof (VAR_19));
 FUNC_23(VAR_19.ifra_name, FUNC_13(VAR_16), sizeof (VAR_19.ifra_name));
 FUNC_3(&FUNC_0(VAR_14)->ia_ifa);
 VAR_19.ifra_addr = VAR_14->ia_addr;

 VAR_19.ifra_prefixmask = VAR_14->ia_prefixmask;

 for (VAR_20 = 0; VAR_20 < 4; VAR_20++) {
  VAR_19.ifra_addr.sin6_addr.s6_addr32[VAR_20]
   &= VAR_19.ifra_prefixmask.sin6_addr.s6_addr32[VAR_20];
 }
 VAR_28 = VAR_14->ia_addr.sin6_addr;
 FUNC_5(&FUNC_0(VAR_14)->ia_ifa);

again:
 FUNC_14(VAR_16, (u_int8_t *)VAR_24,
     (const u_int8_t *)&VAR_28.s6_addr[8], VAR_15);

 VAR_19.ifra_addr.sin6_addr.s6_addr32[2] |=
     (VAR_24[0] & ~(VAR_19.ifra_prefixmask.sin6_addr.s6_addr32[2]));
 VAR_19.ifra_addr.sin6_addr.s6_addr32[3] |=
     (VAR_24[1] & ~(VAR_19.ifra_prefixmask.sin6_addr.s6_addr32[3]));







 if ((VAR_17 = FUNC_17(VAR_16, &VAR_19.ifra_addr.sin6_addr)) != ((void*)0)) {
  FUNC_4(&VAR_17->ia_ifa);
  if (VAR_23-- == 0) {
   FUNC_20((VAR_7, "in6_tmpifadd: failed to find "
       "a unique random IFID\n"));
   return (VAR_1);
  }
  VAR_15 = 1;
  goto again;
 }
 FUNC_3(&FUNC_0(VAR_14)->ia_ifa);
 if (VAR_14->ia6_lifetime.ia6ti_vltime != VAR_8) {
  VAR_25 = FUNC_2(VAR_14, VAR_27) ? 0 :
      (VAR_14->ia6_lifetime.ia6ti_vltime -
      (VAR_27 - VAR_14->ia6_updatetime));
  if (VAR_25 > VAR_12)
   VAR_25 = VAR_12;
 } else {
  VAR_25 = VAR_12;
 }
 if (VAR_14->ia6_lifetime.ia6ti_pltime != VAR_8) {
  VAR_26 = FUNC_1(VAR_14, VAR_27) ? 0 :
      (VAR_14->ia6_lifetime.ia6ti_pltime -
      (VAR_27 - VAR_14->ia6_updatetime));
  if (VAR_26 > VAR_10 - VAR_9)
   VAR_26 = VAR_10 -
       VAR_9;
 } else {
  VAR_26 = VAR_10 - VAR_9;
 }
 VAR_19.ifra_lifetime.ia6t_vltime = VAR_25;
 VAR_19.ifra_lifetime.ia6t_pltime = VAR_26;
 FUNC_5(&FUNC_0(VAR_14)->ia_ifa);




 if (VAR_19.ifra_lifetime.ia6t_pltime <= VAR_11)
  return (0);



 VAR_19.ifra_flags |= (VAR_4|VAR_5);


 VAR_22 = VAR_3 | VAR_2;
 VAR_21 = FUNC_16(VAR_16, &VAR_19, VAR_22, &VAR_18);
 if (VAR_21 != 0) {
  FUNC_20((VAR_6, "in6_tmpifadd: failed to add address.\n"));
  return (VAR_21);
 }
 FUNC_11(VAR_18 != ((void*)0));

 FUNC_3(&FUNC_0(VAR_14)->ia_ifa);
 VAR_29 = VAR_14->ia6_ndpr;
 if (VAR_29 == ((void*)0)) {




  FUNC_20((VAR_6, "in6_tmpifadd: no public address\n"));
  FUNC_11(!(VAR_14->ia6_flags & VAR_4));
  FUNC_5(&FUNC_0(VAR_14)->ia_ifa);
  FUNC_15(&VAR_18->ia_ifa);
  FUNC_4(&VAR_18->ia_ifa);
  return (VAR_0);
 }
 FUNC_6(VAR_29);
 FUNC_5(&FUNC_0(VAR_14)->ia_ifa);
 FUNC_3(&VAR_18->ia_ifa);
 if (VAR_18->ia6_ndpr != ((void*)0)) {
  FUNC_8(VAR_18->ia6_ndpr);
  FUNC_11(VAR_18->ia6_ndpr->ndpr_addrcnt != 0);
  VAR_18->ia6_ndpr->ndpr_addrcnt--;
  FUNC_10(VAR_18->ia6_ndpr);
  FUNC_9(VAR_18->ia6_ndpr);
 }
 VAR_18->ia6_ndpr = VAR_29;
 FUNC_8(VAR_18->ia6_ndpr);
 VAR_18->ia6_ndpr->ndpr_addrcnt++;
 FUNC_11(VAR_18->ia6_ndpr->ndpr_addrcnt != 0);
 FUNC_7(VAR_18->ia6_ndpr);
 FUNC_10(VAR_18->ia6_ndpr);
 FUNC_5(&VAR_18->ia_ifa);
 FUNC_18(VAR_13);
 FUNC_22();
 FUNC_19(VAR_13);
 FUNC_4(&VAR_18->ia_ifa);


 FUNC_9(VAR_29);

 return (0);
}
