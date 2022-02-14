
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_port {int d_id; int status; } ;
struct zfcp_erp_action {int step; struct zfcp_port* port; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int scsi_host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct zfcp_erp_action*) ;
 int FUNC_3 (struct zfcp_erp_action*) ;
 int FUNC_4 (struct zfcp_port*) ;

__attribute__((used)) static int FUNC_5(struct zfcp_erp_action *VAR_6)
{
 struct zfcp_adapter *VAR_7 = VAR_6->adapter;
 struct zfcp_port *VAR_8 = VAR_6->port;
 int VAR_9 = FUNC_0(&VAR_8->status);

 switch (VAR_6->step) {
 case 128:
 case 131:
 case 130:
  if (FUNC_1(VAR_7->scsi_host) == VAR_0)
   return FUNC_2(VAR_6);
  if (!VAR_8->d_id) {
   FUNC_4(VAR_8);
   return VAR_1;
  }
  return FUNC_3(VAR_6);

 case 129:

  if (VAR_9 & VAR_5) {
   if (!VAR_8->d_id) {
    FUNC_4(VAR_8);
    return VAR_1;
   }
   return VAR_3;
  }
  if (VAR_8->d_id && !(VAR_9 & VAR_4)) {
   VAR_8->d_id = 0;
   return VAR_2;
  }

 }
 return VAR_2;
}
