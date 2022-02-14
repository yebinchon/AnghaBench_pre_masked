
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
struct necp_client_flow_registration {int client_id; struct necp_client_flow_registration* client; int registration_id; } ;
struct necp_client {int client_id; struct necp_client* client; int registration_id; } ;


 int FUNC_0 (struct necp_client_flow_registration*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct necp_client_flow_registration* FUNC_4 (int ,int *,struct necp_client_flow_registration*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static struct necp_client *
FUNC_7(uuid_t VAR_4)
{
 FUNC_1();

 struct necp_client *VAR_5 = ((void*)0);

 if (FUNC_5(VAR_4)) {
  FUNC_2();
  struct necp_client_flow_registration VAR_6;
  FUNC_6(VAR_6.registration_id, VAR_4);
  struct necp_client_flow_registration *VAR_7 = FUNC_4(VAR_0, &VAR_2, &VAR_6);
  if (VAR_7 != ((void*)0)) {
   VAR_5 = VAR_7->client;
  }
  FUNC_3();
 } else {
  struct necp_client VAR_8;
  FUNC_6(VAR_8.client_id, VAR_4);
  VAR_5 = FUNC_4(VAR_1, &VAR_3, &VAR_8);
 }

 if (VAR_5 != ((void*)0)) {
  FUNC_0(VAR_5);
 }

 return (VAR_5);
}
