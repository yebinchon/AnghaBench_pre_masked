
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * s6_addr32; } ;
struct TYPE_4__ {TYPE_2__ sin6_addr; } ;
struct TYPE_6__ {int * s6_addr32; } ;
struct nd_prefix {int ndpr_stateflags; int ndpr_plen; TYPE_1__ ndpr_prefix; struct ifnet* ndpr_ifp; scalar_t__ ndpr_raf_onlink; int ndpr_debug; TYPE_3__ ndpr_mask; int ndpr_advrtrs; int ndpr_lastupdate; int ndpr_flags; int ndpr_pltime; int ndpr_vltime; } ;
struct nd_ifinfo {scalar_t__ initialized; scalar_t__ nprefixes; int lock; } ;
struct nd_defrouter {int dummy; } ;
struct ifnet {int if_index; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct nd_prefix*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct nd_prefix*) ;
 int FUNC_3 (struct nd_prefix*) ;
 int FUNC_4 (struct nd_prefix*) ;
 int FUNC_5 (struct nd_prefix*) ;
 struct nd_ifinfo* FUNC_6 (struct ifnet*) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (struct nd_prefix*) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * VAR_7 ;
 int FUNC_14 (struct nd_prefix*,scalar_t__,int ) ;
 int VAR_8 ;
 int FUNC_15 (int ) ;
 int VAR_9 ;
 struct nd_prefix* FUNC_16 (int ) ;
 int VAR_10 ;
 int FUNC_17 (struct nd_prefix*) ;
 int FUNC_18 () ;
 int FUNC_19 (struct nd_prefix*,struct nd_defrouter*) ;

int
FUNC_20(struct nd_prefix *VAR_11, struct nd_defrouter *VAR_12,
    struct nd_prefix **VAR_13, boolean_t VAR_14)
{
 struct nd_prefix *VAR_15 = ((void*)0);
 struct ifnet *VAR_16 = VAR_11->ndpr_ifp;
 struct nd_ifinfo *VAR_17 = ((void*)0);
 int VAR_18, VAR_19;

 if (VAR_6 >= 0) {
  VAR_17 = FUNC_6(VAR_16);
  FUNC_7((((void*)0) != VAR_17) && (VAR_5 == VAR_17->initialized));
  FUNC_12(&VAR_17->lock);
  if (VAR_17->nprefixes >= VAR_6) {
   FUNC_13(&VAR_17->lock);
   return (VAR_0);
  }
  FUNC_13(&VAR_17->lock);
 }

 VAR_15 = FUNC_16(VAR_3);
 if (VAR_15 == ((void*)0))
  return (VAR_0);

 FUNC_4(VAR_15);
 FUNC_4(VAR_11);
 VAR_15->ndpr_ifp = VAR_11->ndpr_ifp;
 VAR_15->ndpr_prefix = VAR_11->ndpr_prefix;
 VAR_15->ndpr_plen = VAR_11->ndpr_plen;
 VAR_15->ndpr_vltime = VAR_11->ndpr_vltime;
 VAR_15->ndpr_pltime = VAR_11->ndpr_pltime;
 VAR_15->ndpr_flags = VAR_11->ndpr_flags;
 if (VAR_11->ndpr_stateflags & VAR_4)
  VAR_15->ndpr_stateflags |= VAR_4;
 FUNC_5(VAR_11);
 if ((VAR_19 = FUNC_9(VAR_15)) != 0) {
  FUNC_5(VAR_15);
  FUNC_17(VAR_15);
  return (VAR_19);
 }
 VAR_15->ndpr_lastupdate = FUNC_18();
 if (VAR_13 != ((void*)0)) {
  *VAR_13 = VAR_15;
  FUNC_3(VAR_15);
 }

 FUNC_0(&VAR_15->ndpr_advrtrs);
 FUNC_10(&VAR_15->ndpr_mask, VAR_15->ndpr_plen);

 for (VAR_18 = 0; VAR_18 < 4; VAR_18++)
  VAR_15->ndpr_prefix.sin6_addr.s6_addr32[VAR_18] &=
   VAR_15->ndpr_mask.s6_addr32[VAR_18];

 FUNC_5(VAR_15);


 ++VAR_8;

 FUNC_12(VAR_7);

 FUNC_1(&VAR_9, VAR_15, VAR_10);
 VAR_15->ndpr_debug |= VAR_1;
 FUNC_2(VAR_15);

 FUNC_12(&VAR_17->lock);
 VAR_17->nprefixes++;
 FUNC_7(VAR_17->nprefixes != 0);
 FUNC_13(&VAR_17->lock);


 if (VAR_15->ndpr_raf_onlink) {
  int VAR_20;

  if ((VAR_20 = FUNC_14(VAR_15, VAR_14,
      VAR_15->ndpr_ifp->if_index)) != 0) {
   FUNC_15((VAR_2, "nd6_prelist_add: failed to make "
       "the prefix %s/%d on-link %s on %s (errno=%d)\n",
       FUNC_11(&VAR_15->ndpr_prefix.sin6_addr),
       VAR_15->ndpr_plen, VAR_14 ? "scoped" :
       "non-scoped", FUNC_8(VAR_16), VAR_20));

  }
 }

 if (VAR_12) {
  FUNC_19(VAR_15, VAR_12);
 }

 FUNC_13(VAR_7);

 return (0);
}
