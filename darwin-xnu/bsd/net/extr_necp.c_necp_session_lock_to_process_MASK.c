
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct necp_session_action_args {int dummy; } ;
struct necp_session {int proc_locked; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct necp_session *VAR_1, struct necp_session_action_args *VAR_2, int *VAR_3)
{
#pragma unused(uap)
 VAR_1->proc_locked = VAR_0;
 *VAR_3 = 0;
 return (0);
}
