
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_unit {int dummy; } ;
struct zfcp_port {int dummy; } ;
struct zfcp_erp_action {int action; struct zfcp_unit* unit; struct zfcp_port* port; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int service_level; } ;






 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct zfcp_adapter*) ;
 int FUNC_3 (struct zfcp_adapter*) ;
 int FUNC_4 (struct zfcp_port*) ;
 int FUNC_5 (struct zfcp_port*) ;
 int FUNC_6 (struct zfcp_unit*) ;

__attribute__((used)) static void FUNC_7(struct zfcp_erp_action *VAR_1, int VAR_2)
{
 struct zfcp_adapter *VAR_3 = VAR_1->adapter;
 struct zfcp_port *VAR_4 = VAR_1->port;
 struct zfcp_unit *VAR_5 = VAR_1->unit;

 switch (VAR_1->action) {
 case 128:
  FUNC_6(VAR_5);
  break;

 case 130:
  if (VAR_2 == VAR_0)
   FUNC_5(VAR_4);

 case 129:
  FUNC_4(VAR_4);
  break;

 case 131:
  if (VAR_2 == VAR_0) {
   FUNC_0(&VAR_3->service_level);
   FUNC_3(VAR_3);
  } else
   FUNC_1(&VAR_3->service_level);
  FUNC_2(VAR_3);
  break;
 }
}
