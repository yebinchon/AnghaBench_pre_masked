
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct necp_session_action_args {scalar_t__ out_buffer_length; scalar_t__ out_buffer; } ;
struct necp_session {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct necp_session*,int ,int *,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_2(struct necp_session *VAR_2, struct necp_session_action_args *VAR_3, int *VAR_4)
{
 int VAR_5 = 0;

 if (VAR_3->out_buffer_length == 0 || VAR_3->out_buffer == 0) {
  FUNC_0(VAR_1, "necp_session_dump_all invalid output buffer (%zu)", VAR_3->out_buffer_length);
  VAR_5 = VAR_0;
  goto done;
 }

 VAR_5 = FUNC_1(VAR_2, 0, ((void*)0), VAR_3->out_buffer, VAR_3->out_buffer_length, 0);
done:
 *VAR_4 = VAR_5;
 return (VAR_5);
}
