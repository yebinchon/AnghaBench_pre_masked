
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct necp_session_policy {int * route_rules; int * conditions; int * result; } ;
struct necp_session {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct necp_session_policy*,int,int ) ;
 int FUNC_2 (struct necp_session_policy*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static bool
FUNC_4(struct necp_session *VAR_7, struct necp_session_policy *VAR_8)
{
 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0)) {
  return (VAR_0);
 }

 FUNC_2(VAR_8, VAR_5);

 if (VAR_8->result) {
  FUNC_0(VAR_8->result, VAR_2);
  VAR_8->result = ((void*)0);
 }

 if (VAR_8->conditions) {
  FUNC_0(VAR_8->conditions, VAR_2);
  VAR_8->conditions = ((void*)0);
 }

 if (VAR_8->route_rules) {
  FUNC_0(VAR_8->route_rules, VAR_2);
  VAR_8->route_rules = ((void*)0);
 }

 FUNC_1(VAR_8, sizeof(*VAR_8), VAR_3);

 if (VAR_6) {
  FUNC_3(VAR_1, "Removed NECP policy");
 }
 return (VAR_4);
}
