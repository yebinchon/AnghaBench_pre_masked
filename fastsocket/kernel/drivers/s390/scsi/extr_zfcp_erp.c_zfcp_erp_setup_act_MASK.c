
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zfcp_erp_action {int action; int status; struct zfcp_unit* unit; struct zfcp_port* port; struct zfcp_adapter* adapter; } ;
struct zfcp_unit {int status; struct zfcp_erp_action erp_action; } ;
struct zfcp_port {int status; struct zfcp_erp_action erp_action; } ;
struct zfcp_adapter {int status; struct zfcp_erp_action erp_action; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct zfcp_erp_action*,int ,int) ;
 int FUNC_3 (struct zfcp_adapter*) ;
 int FUNC_4 (struct zfcp_adapter*) ;
 int FUNC_5 (struct zfcp_port*) ;
 int FUNC_6 (struct zfcp_port*) ;
 int FUNC_7 (struct zfcp_unit*) ;

__attribute__((used)) static struct zfcp_erp_action *FUNC_8(int VAR_3,
        struct zfcp_adapter *VAR_4,
        struct zfcp_port *VAR_5,
        struct zfcp_unit *VAR_6)
{
 struct zfcp_erp_action *VAR_7;
 u32 VAR_8 = 0;

 switch (VAR_3) {
 case 128:
  FUNC_7(VAR_6);
  FUNC_1(VAR_0, &VAR_6->status);
  VAR_7 = &VAR_6->erp_action;
  if (!(FUNC_0(&VAR_6->status) & VAR_1))
   VAR_8 = VAR_2;
  break;

 case 130:
 case 129:
  FUNC_6(VAR_5);
  FUNC_5(VAR_5);
  FUNC_1(VAR_0, &VAR_5->status);
  VAR_7 = &VAR_5->erp_action;
  if (!(FUNC_0(&VAR_5->status) & VAR_1))
   VAR_8 = VAR_2;
  break;

 case 131:
  FUNC_3(VAR_4);
  FUNC_4(VAR_4);
  FUNC_1(VAR_0, &VAR_4->status);
  VAR_7 = &VAR_4->erp_action;
  if (!(FUNC_0(&VAR_4->status) &
        VAR_1))
   VAR_8 = VAR_2;
  break;

 default:
  return ((void*)0);
 }

 FUNC_2(VAR_7, 0, sizeof(struct zfcp_erp_action));
 VAR_7->adapter = VAR_4;
 VAR_7->port = VAR_5;
 VAR_7->unit = VAR_6;
 VAR_7->action = VAR_3;
 VAR_7->status = VAR_8;

 return VAR_7;
}
