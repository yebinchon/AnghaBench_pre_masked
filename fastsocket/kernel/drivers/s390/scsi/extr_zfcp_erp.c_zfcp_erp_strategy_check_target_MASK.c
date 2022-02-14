
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_unit {int dummy; } ;
struct zfcp_port {int dummy; } ;
struct zfcp_erp_action {int action; struct zfcp_unit* unit; struct zfcp_port* port; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int dummy; } ;






 int FUNC_0 (struct zfcp_adapter*,int) ;
 int FUNC_1 (struct zfcp_port*,int) ;
 int FUNC_2 (struct zfcp_unit*,int) ;

__attribute__((used)) static int FUNC_3(struct zfcp_erp_action *VAR_0,
       int VAR_1)
{
 struct zfcp_adapter *VAR_2 = VAR_0->adapter;
 struct zfcp_port *VAR_3 = VAR_0->port;
 struct zfcp_unit *VAR_4 = VAR_0->unit;

 switch (VAR_0->action) {

 case 128:
  VAR_1 = FUNC_2(VAR_4, VAR_1);
  break;

 case 129:
 case 130:
  VAR_1 = FUNC_1(VAR_3, VAR_1);
  break;

 case 131:
  VAR_1 = FUNC_0(VAR_2, VAR_1);
  break;
 }
 return VAR_1;
}
