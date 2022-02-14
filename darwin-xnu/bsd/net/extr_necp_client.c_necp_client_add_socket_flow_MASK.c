
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct necp_client_flow_registration {int flow_list; } ;
struct TYPE_2__ {int cb; struct inpcb* socket_handle; } ;
struct necp_client_flow {TYPE_1__ u; int socket; } ;
struct inpcb {int necp_cb; } ;


 int FUNC_0 (int *,struct necp_client_flow*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct necp_client_flow* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct necp_client_flow*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5(struct necp_client_flow_registration *VAR_6,
       struct inpcb *VAR_7)
{
 struct necp_client_flow *VAR_8 = FUNC_3(VAR_4, VAR_1);
 if (VAR_8 == ((void*)0)) {
  FUNC_1(VAR_0, "Failed to allocate socket flow");
  return;
 }

 FUNC_4(VAR_8, 0, sizeof(*VAR_8));

 VAR_8->socket = VAR_2;
 VAR_8->u.socket_handle = VAR_7;
 VAR_8->u.cb = VAR_7->necp_cb;

 FUNC_2(&VAR_5);

 FUNC_0(&VAR_6->flow_list, VAR_8, VAR_3);
}
