
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct necp_session_action_args {int in_buffer_length; scalar_t__ in_buffer; int out_buffer_length; int out_buffer; } ;
struct necp_session {int dummy; } ;
typedef int new_policy_id ;
typedef int necp_policy_id ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_6 ;
 int * FUNC_2 (int,int ,int) ;
 int FUNC_3 (scalar_t__,int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct necp_session*,int ,int *,int *,int,int ,int*) ;

__attribute__((used)) static int
FUNC_6(struct necp_session *VAR_7, struct necp_session_action_args *VAR_8, int *VAR_9)
{
 int VAR_10 = 0;
 u_int8_t *VAR_11 = ((void*)0);

 if (VAR_8->in_buffer_length == 0 || VAR_8->in_buffer_length > VAR_6 || VAR_8->in_buffer == 0) {
  FUNC_1(VAR_2, "necp_session_add_policy invalid input (%zu)", VAR_8->in_buffer_length);
  VAR_10 = VAR_0;
  goto done;
 }

 if (VAR_8->out_buffer_length < sizeof(necp_policy_id) || VAR_8->out_buffer == 0) {
  FUNC_1(VAR_2, "necp_session_add_policy invalid output buffer (%zu)", VAR_8->out_buffer_length);
  VAR_10 = VAR_0;
  goto done;
 }

 if ((VAR_11 = FUNC_2(VAR_8->in_buffer_length, VAR_3, VAR_4 | VAR_5)) == ((void*)0)) {
  VAR_10 = VAR_1;
  goto done;
 }

 VAR_10 = FUNC_3(VAR_8->in_buffer, VAR_11, VAR_8->in_buffer_length);
 if (VAR_10 != 0) {
  FUNC_1(VAR_2, "necp_session_add_policy tlv copyin error (%d)", VAR_10);
  goto done;
 }

 necp_policy_id VAR_12 = FUNC_5(VAR_7, 0, ((void*)0), VAR_11, VAR_8->in_buffer_length, 0, &VAR_10);
 if (VAR_10 != 0) {
  FUNC_1(VAR_2, "necp_session_add_policy failed to add policy (%d)", VAR_10);
  goto done;
 }

 VAR_10 = FUNC_4(&VAR_12, VAR_8->out_buffer, sizeof(VAR_12));
 if (VAR_10 != 0) {
  FUNC_1(VAR_2, "necp_session_add_policy policy_id copyout error (%d)", VAR_10);
  goto done;
 }

done:
 if (VAR_11 != ((void*)0)) {
  FUNC_0(VAR_11, VAR_3);
  VAR_11 = ((void*)0);
 }
 *VAR_9 = VAR_10;

 return (VAR_10);
}
