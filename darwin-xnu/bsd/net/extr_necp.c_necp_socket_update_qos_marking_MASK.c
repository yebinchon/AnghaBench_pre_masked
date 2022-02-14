
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct rtentry {struct ifnet* rt_ifp; } ;
struct necp_aggregate_route_rule {scalar_t__* rule_ids; } ;
struct TYPE_4__ {scalar_t__ qos_marking_gencount; } ;
struct TYPE_5__ {TYPE_1__ results; } ;
struct inpcb {TYPE_3__* inp_socket; TYPE_2__ inp_policyresult; } ;
struct ifnet {int dummy; } ;
struct TYPE_6__ {int so_flags1; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct necp_aggregate_route_rule* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct ifnet*,scalar_t__) ;
 scalar_t__ VAR_7 ;

void
FUNC_5(struct inpcb *VAR_8, struct rtentry *VAR_9, struct ifnet *VAR_10, u_int32_t VAR_11)
{
 bool VAR_12 = VAR_0;
 struct ifnet *VAR_13 = VAR_10 = ((void*)0);

 if (VAR_7 == 0) {
  return;
 }
 if (VAR_8->inp_socket == ((void*)0)) {
  return;
 }
 if ((VAR_8->inp_socket->so_flags1 & VAR_3)) {
  return;
 }



 if (VAR_8->inp_policyresult.results.qos_marking_gencount == VAR_6) {
  return;
 }

 FUNC_2(&VAR_5);

 if (VAR_13 == ((void*)0) && VAR_9 != ((void*)0)) {
  VAR_13 = VAR_9->rt_ifp;
 }



 if (VAR_13 == ((void*)0) || VAR_11 == 0) {
  VAR_12 = VAR_0;
  goto done;
 }

 if (FUNC_0(VAR_11)) {
  struct necp_aggregate_route_rule *VAR_14 = FUNC_3(VAR_11);
  if (VAR_14 != ((void*)0)) {
   int VAR_15 = 0;
   for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
    u_int32_t VAR_16 = VAR_14->rule_ids[VAR_15];
    if (VAR_16 == 0) {
     break;
    }
    VAR_12 = FUNC_4(VAR_13, VAR_16);
    if (VAR_12 == VAR_4) {
     break;
    }
   }
  }
 } else {
  VAR_12 = FUNC_4(VAR_13, VAR_11);
 }



 VAR_8->inp_policyresult.results.qos_marking_gencount = VAR_6;

done:
 FUNC_1(&VAR_5);

 if (VAR_12 == VAR_4) {
  VAR_8->inp_socket->so_flags1 |= VAR_2;
 } else {
  VAR_8->inp_socket->so_flags1 &= ~VAR_2;
 }
}
