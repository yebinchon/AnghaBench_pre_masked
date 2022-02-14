
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_6__* uuid_t ;
typedef union sockaddr_in_4_6 {int dummy; } sockaddr_in_4_6 ;
typedef int tfo_cache_buffer ;
struct necp_fd_data {int dummy; } ;
struct necp_client_flow_registration {int flow_list; } ;
struct TYPE_16__ {scalar_t__ sa_family; } ;
struct TYPE_20__ {TYPE_1__ sa; } ;
struct TYPE_17__ {scalar_t__ sa_family; } ;
struct TYPE_19__ {TYPE_2__ sa; } ;
struct necp_client_flow {TYPE_5__ remote_addr; TYPE_4__ local_addr; } ;
struct necp_client_action_args {scalar_t__ client_id; int client_id_len; int buffer_size; scalar_t__ buffer; } ;
struct necp_client {TYPE_3__* current_route; int platform_binary; } ;
struct TYPE_21__ {scalar_t__ necp_cache_buf_type; scalar_t__ necp_cache_buf_ver; int necp_cache_buf_size; scalar_t__ necp_cache_buf_addr; scalar_t__ necp_tcp_tfo_heuristics_success; scalar_t__ necp_tcp_ecn_heuristics_success; } ;
typedef TYPE_6__ necp_tcp_tfo_cache ;
typedef TYPE_6__ necp_tcp_ecn_cache ;
typedef TYPE_6__ necp_cache_buffer ;
typedef int ecn_cache_buffer ;
typedef int cache_buffer ;
struct TYPE_18__ {int * rt_ifp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct necp_client_flow* FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct necp_client*) ;
 int FUNC_3 (struct necp_client*) ;
 int FUNC_4 (struct necp_client*) ;
 int FUNC_5 (struct necp_fd_data*) ;
 int FUNC_6 (struct necp_fd_data*) ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (scalar_t__,TYPE_6__*,int) ;
 int FUNC_8 (TYPE_6__*,int ,int) ;
 struct necp_client* FUNC_9 (struct necp_fd_data*,TYPE_6__*) ;
 struct necp_client_flow_registration* FUNC_10 (struct necp_client*,TYPE_6__*) ;
 int FUNC_11 (TYPE_6__*,int *,union sockaddr_in_4_6*) ;
 int FUNC_12 (TYPE_6__*,int *,union sockaddr_in_4_6*,union sockaddr_in_4_6*) ;

__attribute__((used)) static int
FUNC_13(struct necp_fd_data *VAR_10, struct necp_client_action_args *VAR_11, int *VAR_12)
{
 int VAR_13 = 0;
 struct necp_client *VAR_14 = ((void*)0);
 uuid_t VAR_15;

 if (VAR_11->client_id == 0 || VAR_11->client_id_len != sizeof(uuid_t)) {
  VAR_13 = VAR_2;
  goto done;
 }

 VAR_13 = FUNC_7(VAR_11->client_id, VAR_15, sizeof(uuid_t));
 if (VAR_13) {
  FUNC_1(VAR_4, "necp_client_update_cache copyin client_id error (%d)", VAR_13);
  goto done;
 }

 FUNC_5(VAR_10);
 VAR_14 = FUNC_9(VAR_10, VAR_15);
 if (VAR_14 == ((void*)0)) {
  FUNC_6(VAR_10);
  VAR_13 = VAR_3;
  goto done;
 }

 struct necp_client_flow_registration *VAR_16 = FUNC_10(VAR_14, VAR_15);
 if (VAR_16 == ((void*)0)) {
  FUNC_4(VAR_14);
  FUNC_6(VAR_10);
  VAR_13 = VAR_3;
  goto done;
 }

 FUNC_2(VAR_14);

 struct necp_client_flow *VAR_17 = FUNC_0(&VAR_16->flow_list);
 if (VAR_17 == ((void*)0) ||
  (VAR_17->remote_addr.sa.sa_family != VAR_0 &&
   VAR_17->remote_addr.sa.sa_family != VAR_1) ||
  (VAR_17->local_addr.sa.sa_family != VAR_0 &&
   VAR_17->local_addr.sa.sa_family != VAR_1)) {
  VAR_13 = VAR_2;
  FUNC_1(VAR_4, "necp_client_update_cache no flow error (%d)", VAR_13);
  goto done_unlock;
 }

 necp_cache_buffer VAR_18;
 FUNC_8(&VAR_18, 0, sizeof(VAR_18));

 if (VAR_11->buffer_size != sizeof(necp_cache_buffer) ||
  VAR_11->buffer == VAR_9) {
  VAR_13 = VAR_2;
  goto done_unlock;
 }

 VAR_13 = FUNC_7(VAR_11->buffer, &VAR_18, sizeof(VAR_18));
 if (VAR_13) {
  FUNC_1(VAR_4, "necp_client_update_cache copyin cache buffer error (%d)", VAR_13);
  goto done_unlock;
 }

 if (VAR_18.necp_cache_buf_type == VAR_5 &&
     VAR_18.necp_cache_buf_ver == VAR_6) {
  if (VAR_18.necp_cache_buf_size != sizeof(necp_tcp_ecn_cache) ||
      VAR_18.necp_cache_buf_addr == VAR_9) {
   VAR_13 = VAR_2;
   goto done_unlock;
  }

  necp_tcp_ecn_cache VAR_19;
  FUNC_8(&VAR_19, 0, sizeof(VAR_19));

  VAR_13 = FUNC_7(VAR_18.necp_cache_buf_addr, &VAR_19, sizeof(necp_tcp_ecn_cache));
  if (VAR_13) {
   FUNC_1(VAR_4, "necp_client_update_cache copyin ecn cache buffer error (%d)", VAR_13);
   goto done_unlock;
  }

  if (VAR_14->current_route != ((void*)0) && VAR_14->current_route->rt_ifp != ((void*)0)) {
   if (!VAR_14->platform_binary) {
       VAR_19.necp_tcp_ecn_heuristics_success = 0;
   }
   FUNC_11(&VAR_19, VAR_14->current_route->rt_ifp,
        (union sockaddr_in_4_6 *)&VAR_17->local_addr);
  }
 } else if (VAR_18.necp_cache_buf_type == VAR_7 &&
      VAR_18.necp_cache_buf_ver == VAR_8) {
  if (VAR_18.necp_cache_buf_size != sizeof(necp_tcp_tfo_cache) ||
      VAR_18.necp_cache_buf_addr == VAR_9) {
   VAR_13 = VAR_2;
   goto done_unlock;
  }

  necp_tcp_tfo_cache VAR_20;
  FUNC_8(&VAR_20, 0, sizeof(VAR_20));

  VAR_13 = FUNC_7(VAR_18.necp_cache_buf_addr, &VAR_20, sizeof(necp_tcp_tfo_cache));
  if (VAR_13) {
   FUNC_1(VAR_4, "necp_client_update_cache copyin tfo cache buffer error (%d)", VAR_13);
   goto done_unlock;
  }

  if (VAR_14->current_route != ((void*)0) && VAR_14->current_route->rt_ifp != ((void*)0)) {
   if (!VAR_14->platform_binary) {
       VAR_20.necp_tcp_tfo_heuristics_success = 0;
   }
   FUNC_12(&VAR_20, VAR_14->current_route->rt_ifp,
        (union sockaddr_in_4_6 *)&VAR_17->local_addr,
        (union sockaddr_in_4_6 *)&VAR_17->remote_addr);
  }
 } else {
     VAR_13 = VAR_2;
 }
done_unlock:
 FUNC_3(VAR_14);
 FUNC_4(VAR_14);
 FUNC_6(VAR_10);
done:
 *VAR_12 = VAR_13;
 return (VAR_13);
}
