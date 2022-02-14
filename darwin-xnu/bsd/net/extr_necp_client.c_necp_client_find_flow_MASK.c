
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
struct necp_client_flow_registration {int registration_id; } ;
struct necp_client {int flow_registrations; } ;


 int FUNC_0 (struct necp_client*) ;
 struct necp_client_flow_registration* FUNC_1 (int ,int *,struct necp_client_flow_registration*) ;
 struct necp_client_flow_registration* FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static struct necp_client_flow_registration *
FUNC_5(struct necp_client *VAR_1, uuid_t VAR_2)
{
 FUNC_0(VAR_1);
 struct necp_client_flow_registration *VAR_3 = ((void*)0);

 if (FUNC_3(VAR_2)) {
  struct necp_client_flow_registration VAR_4;
  FUNC_4(VAR_4.registration_id, VAR_2);
  VAR_3 = FUNC_1(VAR_0, &VAR_1->flow_registrations, &VAR_4);
 } else {
  VAR_3 = FUNC_2(&VAR_1->flow_registrations);
 }

 return (VAR_3);
}
