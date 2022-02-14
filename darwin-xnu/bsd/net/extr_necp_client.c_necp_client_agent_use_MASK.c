
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct necp_agent_use_parameters* uuid_t ;
struct necp_fd_data {int dummy; } ;
struct necp_client_action_args {scalar_t__ client_id; int client_id_len; int buffer_size; scalar_t__ buffer; } ;
struct necp_client {int dummy; } ;
struct necp_agent_use_parameters {int out_use_count; int agent_uuid; } ;
typedef int parameters ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct necp_client*) ;
 int FUNC_2 (struct necp_fd_data*) ;
 int FUNC_3 (struct necp_fd_data*) ;
 int FUNC_4 (scalar_t__,struct necp_agent_use_parameters*,int) ;
 int FUNC_5 (struct necp_agent_use_parameters*,scalar_t__,int) ;
 struct necp_client* FUNC_6 (struct necp_fd_data*,struct necp_agent_use_parameters*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int
FUNC_8(struct necp_fd_data *VAR_3, struct necp_client_action_args *VAR_4, int *VAR_5)
{
 int VAR_6 = 0;
 struct necp_client *VAR_7 = ((void*)0);
 uuid_t VAR_8;
 struct necp_agent_use_parameters VAR_9;

 if (VAR_4->client_id == 0 || VAR_4->client_id_len != sizeof(uuid_t) ||
  VAR_4->buffer_size != sizeof(VAR_9) || VAR_4->buffer == 0) {
  VAR_6 = VAR_0;
  goto done;
 }

 VAR_6 = FUNC_4(VAR_4->client_id, VAR_8, sizeof(uuid_t));
 if (VAR_6) {
  FUNC_0(VAR_2, "Copyin client_id error (%d)", VAR_6);
  goto done;
 }

 VAR_6 = FUNC_4(VAR_4->buffer, &VAR_9, VAR_4->buffer_size);
 if (VAR_6) {
  FUNC_0(VAR_2, "Parameters copyin error (%d)", VAR_6);
  goto done;
 }

 FUNC_2(VAR_3);
 VAR_7 = FUNC_6(VAR_3, VAR_8);
 if (VAR_7 != ((void*)0)) {
  VAR_6 = FUNC_7(VAR_9.agent_uuid, &VAR_9.out_use_count);
  FUNC_1(VAR_7);
 } else {
  VAR_6 = VAR_1;
 }

 FUNC_3(VAR_3);

 if (VAR_6 == 0) {
  VAR_6 = FUNC_5(&VAR_9, VAR_4->buffer, VAR_4->buffer_size);
  if (VAR_6) {
   FUNC_0(VAR_2, "Parameters copyout error (%d)", VAR_6);
   goto done;
  }
 }

done:
 *VAR_5 = VAR_6;

 return (VAR_6);
}
