
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_7__ {int sin6_addr; } ;
struct nd_prefix {int ndpr_stateflags; TYPE_3__ ndpr_prefix; struct nd_prefix* ndpr_next; } ;
struct TYPE_6__ {int sin6_addr; } ;
struct TYPE_5__ {int sin6_addr; } ;
struct in6_ifaddr {int ia_ifa; int ia_plen; TYPE_2__ ia_prefixmask; TYPE_1__ ia_addr; } ;
struct in6_addr {int dummy; } ;
typedef int pr_mask ;
typedef int boolean_t ;
typedef int addr ;
struct TYPE_8__ {struct nd_prefix* lh_first; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct nd_prefix*) ;
 int FUNC_4 (struct nd_prefix*) ;
 int VAR_4 ;
 int FUNC_5 (int *,struct in6_addr*,int) ;
 scalar_t__ FUNC_6 (int *,struct in6_addr*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;

boolean_t
FUNC_9(struct in6_ifaddr *VAR_7)
{
 struct nd_prefix *VAR_8;
 struct in6_addr VAR_9, VAR_10;
 u_int32_t VAR_11;
 boolean_t VAR_12 = VAR_0;

 FUNC_2(VAR_5, VAR_1);

 FUNC_0(&VAR_7->ia_ifa);
 FUNC_5(&VAR_7->ia_addr.sin6_addr, &VAR_9, sizeof (VAR_9));
 FUNC_5(&VAR_7->ia_prefixmask.sin6_addr, &VAR_10, sizeof (VAR_10));
 VAR_11 = VAR_7->ia_plen;
 FUNC_1(&VAR_7->ia_ifa);

 FUNC_7(VAR_5);
 for (VAR_8 = VAR_6.lh_first; VAR_8; VAR_8 = VAR_8->ndpr_next) {
  FUNC_3(VAR_8);
  if ((VAR_8->ndpr_stateflags & VAR_2) &&
      (VAR_8->ndpr_stateflags & VAR_3) &&
      FUNC_6(&VAR_8->ndpr_prefix.sin6_addr,
      &VAR_9, VAR_11)) {
   FUNC_4(VAR_8);
   VAR_12 = VAR_4;
   break;
  }
  FUNC_4(VAR_8);
 }
 FUNC_8(VAR_5);

 return (VAR_12);
}
