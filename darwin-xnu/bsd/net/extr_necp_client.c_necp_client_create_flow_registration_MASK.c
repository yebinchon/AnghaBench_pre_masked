
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct necp_fd_data {int flows; } ;
struct necp_client_flow_registration {int flow_result_read; struct necp_client* client; int flow_list; int registration_id; int last_interface_details; } ;
struct necp_client {int flow_registrations; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct necp_client*) ;
 int FUNC_2 (struct necp_fd_data*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (int ,int *,struct necp_client_flow_registration*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int ) ;
 struct necp_client_flow_registration* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct necp_client_flow_registration*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static struct necp_client_flow_registration *
FUNC_10(struct necp_fd_data *VAR_8, struct necp_client *VAR_9)
{
 FUNC_2(VAR_8);
 FUNC_1(VAR_9);

 struct necp_client_flow_registration *VAR_10 = FUNC_7(VAR_7, VAR_1);
 if (VAR_10 == ((void*)0)) {
  return ((void*)0);
 }

 FUNC_8(VAR_10, 0, sizeof(*VAR_10));

 VAR_10->last_interface_details = FUNC_6(VAR_0, VAR_2);

 FUNC_9(VAR_10->registration_id, 1);
 FUNC_0(&VAR_10->flow_list);


 FUNC_5(VAR_4, &VAR_9->flow_registrations, VAR_10);


 FUNC_5(VAR_5, &VAR_8->flows, VAR_10);


 FUNC_3();
 FUNC_5(VAR_3, &VAR_6, VAR_10);
 FUNC_4();

 VAR_10->client = VAR_9;


 VAR_10->flow_result_read = 1;

 return VAR_10;
}
