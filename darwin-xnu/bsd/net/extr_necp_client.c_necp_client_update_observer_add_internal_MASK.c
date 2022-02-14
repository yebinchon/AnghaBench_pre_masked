
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct necp_fd_data {scalar_t__ update_count; int update_list; } ;
struct TYPE_2__ {int tlv_buffer; int update_type; } ;
struct necp_client_update {TYPE_1__ update; int client_id; scalar_t__ update_length; } ;
struct necp_client_observer_update {int dummy; } ;
struct necp_client {int parameters_length; int parameters; int client_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct necp_fd_data*) ;
 int FUNC_1 (struct necp_fd_data*) ;
 int FUNC_2 (int *,struct necp_client_update*,int ) ;
 struct necp_client_update* FUNC_3 (int ,int ,int) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct necp_fd_data*,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct necp_fd_data *VAR_6, struct necp_client *VAR_7)
{
 FUNC_0(VAR_6);

 if (VAR_6->update_count >= VAR_5) {
  FUNC_1(VAR_6);
  return;
 }

 struct necp_client_update *VAR_8 = FUNC_3(sizeof(struct necp_client_update) + VAR_7->parameters_length,
                VAR_0, VAR_1 | VAR_2);
 if (VAR_8 != ((void*)0)) {
  VAR_8->update_length = sizeof(struct necp_client_observer_update) + VAR_7->parameters_length;
  FUNC_6(VAR_8->client_id, VAR_7->client_id);
  VAR_8->update.update_type = VAR_3;
  FUNC_4(VAR_8->update.tlv_buffer, VAR_7->parameters, VAR_7->parameters_length);
  FUNC_2(&VAR_6->update_list, VAR_8, VAR_4);
  VAR_6->update_count++;

  FUNC_5(VAR_6, 1);
 }

 FUNC_1(VAR_6);
}
