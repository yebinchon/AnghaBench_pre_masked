
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_port {scalar_t__ wwpn; int d_id; } ;
struct zfcp_erp_action {struct zfcp_port* port; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {scalar_t__ peer_wwpn; int peer_d_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct zfcp_port*,char*,int *) ;
 int FUNC_1 (struct zfcp_erp_action*) ;

__attribute__((used)) static int FUNC_2(struct zfcp_erp_action *VAR_1)
{
 struct zfcp_adapter *VAR_2 = VAR_1->adapter;
 struct zfcp_port *VAR_3 = VAR_1->port;

 if (VAR_3->wwpn != VAR_2->peer_wwpn) {
  FUNC_0(VAR_3, "eroptp1", ((void*)0));
  return VAR_0;
 }
 VAR_3->d_id = VAR_2->peer_d_id;
 return FUNC_1(VAR_1);
}
