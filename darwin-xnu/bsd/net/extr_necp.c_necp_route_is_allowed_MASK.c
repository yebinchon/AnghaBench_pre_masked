
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct rtentry {int dummy; } ;
struct necp_aggregate_route_rule {scalar_t__* rule_ids; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 struct necp_aggregate_route_rule* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct rtentry*,struct ifnet*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static bool
FUNC_4(struct rtentry *VAR_5, struct ifnet *VAR_6, u_int32_t VAR_7, u_int32_t *VAR_8)
{
 if ((VAR_5 == ((void*)0) && VAR_6 == ((void*)0)) || VAR_7 == 0) {
  if (VAR_4 > 1) {
   FUNC_0(VAR_1, "Route Allowed: no route or interface, Rule %d Allowed %d", VAR_7, VAR_3);
  }
  return (VAR_3);
 }

 if (FUNC_1(VAR_7)) {
  struct necp_aggregate_route_rule *VAR_9 = FUNC_2(VAR_7);
  if (VAR_9 != ((void*)0)) {
   int VAR_10 = 0;
   for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
    u_int32_t VAR_11 = VAR_9->rule_ids[VAR_10];
    if (VAR_11 == 0) {
     break;
    }
    if (!FUNC_3(VAR_5, VAR_6, VAR_11, VAR_8)) {
     return (VAR_0);
    }
   }
  }
 } else {
  return (FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8));
 }

 return (VAR_3);
}
