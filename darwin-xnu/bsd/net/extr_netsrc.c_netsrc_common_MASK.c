
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rtentry {int rt_flags; TYPE_4__* rt_ifa; TYPE_2__* rt_ifp; TYPE_1__* rt_parent; struct nstat_counts* rt_stats; } ;
struct nstat_counts {int nstat_connectsuccesses; int nstat_connectattempts; int nstat_min_rtt; } ;
struct netsrc_rep {int nrp_flags; int nrp_ifindex; int nrp_connection_successes; int nrp_connection_attempts; int nrp_min_rtt; } ;
struct TYPE_8__ {TYPE_3__* ifa_ifp; } ;
struct TYPE_7__ {int if_flags; } ;
struct TYPE_6__ {int if_eflags; int if_index; } ;
struct TYPE_5__ {struct nstat_counts* rt_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtentry*) ;
 int FUNC_1 (struct rtentry*) ;

__attribute__((used)) static void
FUNC_2(struct rtentry *VAR_6, struct netsrc_rep *VAR_7)
{
 if (!VAR_6) {
  return;
 }


 struct nstat_counts *VAR_8 = VAR_6->rt_stats;
 if (VAR_8) {
  VAR_7->nrp_min_rtt = VAR_8->nstat_min_rtt;
  VAR_7->nrp_connection_attempts = VAR_8->nstat_connectattempts;
  VAR_7->nrp_connection_successes = VAR_8->nstat_connectsuccesses;
 }


 if (VAR_7->nrp_min_rtt == 0) {

  FUNC_0(VAR_6);
  if (VAR_6->rt_parent) {
   VAR_8 = VAR_6->rt_parent->rt_stats;
   if (VAR_8) {
    VAR_7->nrp_min_rtt = VAR_8->nstat_min_rtt;
    VAR_7->nrp_connection_attempts = VAR_8->nstat_connectattempts;
    VAR_7->nrp_connection_successes = VAR_8->nstat_connectsuccesses;
   }
  }
  FUNC_1(VAR_6);
 }
 VAR_7->nrp_ifindex = VAR_6->rt_ifp ? VAR_6->rt_ifp->if_index : 0;

 if (VAR_6->rt_ifp->if_eflags & VAR_0) {
  VAR_7->nrp_flags |= VAR_2;
 }
 if (VAR_6->rt_flags & VAR_5) {
  VAR_7->nrp_flags |= VAR_3;
 } else if (!(VAR_6->rt_flags & VAR_4) &&
      (VAR_6->rt_ifa && VAR_6->rt_ifa->ifa_ifp &&
      !(VAR_6->rt_ifa->ifa_ifp->if_flags & VAR_1))) {
  VAR_7->nrp_flags |= VAR_3;
 }
}
