
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct necp_route_rule_list {int dummy; } ;
struct necp_route_rule {scalar_t__ refcount; int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct necp_route_rule*,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct necp_route_rule*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct necp_route_rule* FUNC_3 (struct necp_route_rule_list*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5(struct necp_route_rule_list *VAR_6, u_int32_t VAR_7)
{
 struct necp_route_rule *VAR_8 = ((void*)0);

 FUNC_1(&VAR_5, VAR_1);

 VAR_8 = FUNC_3(VAR_6, VAR_7);
 if (VAR_8 != ((void*)0)) {
  if (--VAR_8->refcount == 0) {
   FUNC_4(VAR_8->id);
   FUNC_2(VAR_8, VAR_4);
   FUNC_0(VAR_8, VAR_2);
  }
  return (VAR_3);
 }

 return (VAR_0);
}
