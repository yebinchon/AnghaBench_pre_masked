
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct necp_session {int last_policy_id; } ;
typedef scalar_t__ necp_policy_id ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static necp_policy_id
FUNC_1(struct necp_session *VAR_1)
{
 VAR_1->last_policy_id++;
 if (VAR_1->last_policy_id < 1) {
  VAR_1->last_policy_id = 1;
 }

 necp_policy_id VAR_2 = VAR_1->last_policy_id;

 if (VAR_2 == 0) {
  FUNC_0(VAR_0, "Allocate policy id failed.\n");
  return (0);
 }

 return (VAR_2);
}
