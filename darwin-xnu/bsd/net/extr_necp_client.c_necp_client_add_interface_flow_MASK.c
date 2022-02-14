
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct necp_client_flow_registration {int flow_list; int interface_cb; int interface_handle; } ;
struct TYPE_2__ {int cb; int socket_handle; } ;
struct necp_client_flow {TYPE_1__ u; int interface_index; } ;


 int FUNC_0 (int *,struct necp_client_flow*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 struct necp_client_flow* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct necp_client_flow*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct necp_client_flow *
FUNC_5(struct necp_client_flow_registration *VAR_5,
          uint32_t VAR_6)
{
 struct necp_client_flow *VAR_7 = FUNC_3(VAR_3, VAR_1);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_0, "Failed to allocate interface flow");
  return ((void*)0);
 }

 FUNC_4(VAR_7, 0, sizeof(*VAR_7));


 VAR_7->interface_index = VAR_6;
 VAR_7->u.socket_handle = VAR_5->interface_handle;
 VAR_7->u.cb = VAR_5->interface_cb;

 FUNC_2(&VAR_4);

 FUNC_0(&VAR_5->flow_list, VAR_7, VAR_2);

 return VAR_7;
}
