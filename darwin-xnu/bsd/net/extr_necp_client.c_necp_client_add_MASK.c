
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
struct proc {int dummy; } ;
struct necp_fd_data {int flags; int clients; int proc_pid; } ;
struct necp_client_action_args {int client_id_len; scalar_t__ buffer; int client_id; int buffer_size; } ;
struct necp_client {int platform_binary; int client_id; int flow_registrations; int assertion_list; void* agent_handle; int proc_pid; int parameters_length; int route_lock; int lock; int parameters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct necp_client*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct necp_client*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct necp_client*) ;
 int FUNC_8 (struct necp_fd_data*) ;
 int FUNC_9 (struct necp_fd_data*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *,struct necp_client*) ;
 struct necp_client* FUNC_13 (int ,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_14 (scalar_t__,int ,int ) ;
 int FUNC_15 (int ,int ,int) ;
 scalar_t__ FUNC_16 (struct proc*) ;
 int FUNC_17 () ;
 int FUNC_18 (int *,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_19 (struct necp_client*) ;
 int FUNC_20 (struct necp_client*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (int ,struct necp_fd_data*,struct necp_client*,int *) ;

__attribute__((used)) static int
FUNC_23(struct proc *VAR_14, struct necp_fd_data *VAR_15, struct necp_client_action_args *VAR_16, int *VAR_17)
{
 int VAR_18 = 0;
 struct necp_client *VAR_19 = ((void*)0);

 if (VAR_15->flags & VAR_7) {
  FUNC_3(VAR_2, "NECP client observers with push enabled may not add their own clients");
  return (VAR_0);
 }

 if (VAR_16->client_id == 0 || VAR_16->client_id_len != sizeof(uuid_t) ||
  VAR_16->buffer_size == 0 || VAR_16->buffer_size > VAR_6 || VAR_16->buffer == 0) {
  return (VAR_0);
 }

 if ((VAR_19 = FUNC_13(sizeof(struct necp_client) + VAR_16->buffer_size, VAR_3,
        VAR_4 | VAR_5)) == ((void*)0)) {
  VAR_18 = VAR_1;
  goto done;
 }

 VAR_18 = FUNC_14(VAR_16->buffer, VAR_19->parameters, VAR_16->buffer_size);
 if (VAR_18) {
  FUNC_2(VAR_2, "necp_client_add parameters copyin error (%d)", VAR_18);
  goto done;
 }

 FUNC_18(&VAR_19->lock, VAR_13, VAR_12);
 FUNC_18(&VAR_19->route_lock, VAR_13, VAR_12);
 FUNC_19(VAR_19);

 VAR_19->parameters_length = VAR_16->buffer_size;
 VAR_19->proc_pid = VAR_15->proc_pid;
 VAR_19->agent_handle = (void *)VAR_15;
 VAR_19->platform_binary = ((FUNC_16(VAR_14) == 0) ? 0 : 1);

 FUNC_21(VAR_19->client_id, 0);
 FUNC_1(&VAR_19->assertion_list);
 FUNC_11(&VAR_19->flow_registrations);

 VAR_18 = FUNC_15(VAR_19->client_id, VAR_16->client_id, sizeof(uuid_t));
 if (VAR_18) {
  FUNC_2(VAR_2, "necp_client_add client_id copyout error (%d)", VAR_18);
  goto done;
 }

 FUNC_20(VAR_19);

 FUNC_8(VAR_15);
 FUNC_12(VAR_9, &VAR_15->clients, VAR_19);
 FUNC_10(&VAR_10);
 FUNC_5();
 FUNC_12(VAR_8, &VAR_11, VAR_19);
 FUNC_6();


 FUNC_4(VAR_19);
 (void)FUNC_22(FUNC_17(), VAR_15, VAR_19, ((void*)0));
 FUNC_7(VAR_19);
 FUNC_9(VAR_15);
done:
 if (VAR_18 != 0) {
  if (VAR_19 != ((void*)0)) {
   FUNC_0(VAR_19, VAR_3);
   VAR_19 = ((void*)0);
  }
 }
 *VAR_17 = VAR_18;

 return (VAR_18);
}
