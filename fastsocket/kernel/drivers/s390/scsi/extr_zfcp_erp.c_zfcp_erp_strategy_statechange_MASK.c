
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zfcp_unit {int status; } ;
struct zfcp_port {int status; } ;
struct zfcp_erp_action {int action; int status; struct zfcp_unit* unit; struct zfcp_port* port; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int status; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zfcp_adapter*,int ,char*,int *) ;
 int FUNC_1 (struct zfcp_port*,int ,char*,int *) ;
 int FUNC_2 (struct zfcp_unit*,int ,char*,int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct zfcp_erp_action *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_2->action;
 struct zfcp_adapter *VAR_5 = VAR_2->adapter;
 struct zfcp_port *VAR_6 = VAR_2->port;
 struct zfcp_unit *VAR_7 = VAR_2->unit;
 u32 VAR_8 = VAR_2->status;

 switch (VAR_4) {
 case 131:
  if (FUNC_3(&VAR_5->status, VAR_8)) {
   FUNC_0(VAR_5,
       VAR_1,
       "ersscg1", ((void*)0));
   return VAR_0;
  }
  break;

 case 129:
 case 130:
  if (FUNC_3(&VAR_6->status, VAR_8)) {
   FUNC_1(VAR_6,
           VAR_1,
           "ersscg2", ((void*)0));
   return VAR_0;
  }
  break;

 case 128:
  if (FUNC_3(&VAR_7->status, VAR_8)) {
   FUNC_2(VAR_7,
           VAR_1,
           "ersscg3", ((void*)0));
   return VAR_0;
  }
  break;
 }
 return VAR_3;
}
