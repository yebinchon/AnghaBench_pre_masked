
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
struct necp_fd_data {int clients; int flows; } ;
struct necp_client_flow_registration {int client_id; struct necp_client_flow_registration* client; int registration_id; } ;
struct necp_client {int client_id; struct necp_client* client; int registration_id; } ;


 int FUNC_0 (struct necp_fd_data*) ;
 struct necp_client_flow_registration* FUNC_1 (int ,int *,struct necp_client_flow_registration*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static struct necp_client *
FUNC_4(struct necp_fd_data *VAR_2, uuid_t VAR_3)
{
 FUNC_0(VAR_2);
 struct necp_client *VAR_4 = ((void*)0);

 if (FUNC_2(VAR_3)) {
  struct necp_client_flow_registration VAR_5;
  FUNC_3(VAR_5.registration_id, VAR_3);
  struct necp_client_flow_registration *VAR_6 = FUNC_1(VAR_1, &VAR_2->flows, &VAR_5);
  if (VAR_6 != ((void*)0)) {
   VAR_4 = VAR_6->client;
  }
 } else {
  struct necp_client VAR_7;
  FUNC_3(VAR_7.client_id, VAR_3);
  VAR_4 = FUNC_1(VAR_0, &VAR_2->clients, &VAR_7);
 }

 return (VAR_4);
}
