
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct necp_session_policy {scalar_t__ pending_deletion; } ;
struct necp_session_action_args {int in_buffer_length; scalar_t__ in_buffer; } ;
struct necp_session {int dummy; } ;
typedef int necp_policy_id ;
typedef int delete_policy_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__,int*,int) ;
 struct necp_session_policy* FUNC_2 (struct necp_session*,int) ;
 int FUNC_3 (struct necp_session*,struct necp_session_policy*) ;

__attribute__((used)) static int
FUNC_4(struct necp_session *VAR_3, struct necp_session_action_args *VAR_4, int *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_4->in_buffer_length < sizeof(necp_policy_id) || VAR_4->in_buffer == 0) {
  FUNC_0(VAR_2, "necp_session_delete_policy invalid input (%zu)", VAR_4->in_buffer_length);
  VAR_6 = VAR_0;
  goto done;
 }

 necp_policy_id VAR_7 = 0;
 VAR_6 = FUNC_1(VAR_4->in_buffer, &VAR_7, sizeof(VAR_7));
 if (VAR_6 != 0) {
  FUNC_0(VAR_2, "necp_session_delete_policy policy_id copyin error (%d)", VAR_6);
  goto done;
 }

 struct necp_session_policy *VAR_8 = FUNC_2(VAR_3, VAR_7);
 if (VAR_8 == ((void*)0) || VAR_8->pending_deletion) {
  FUNC_0(VAR_2, "necp_session_delete_policy failed to find policy with id %u", VAR_7);
  VAR_6 = VAR_1;
  goto done;
 }

 FUNC_3(VAR_3, VAR_8);
done:
 *VAR_5 = VAR_6;
 return (VAR_6);
}
