
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_port {int dummy; } ;
struct zfcp_adapter {int dummy; } ;
struct fc_rport {int port_name; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;
struct TYPE_2__ {int config_lock; } ;


 struct Scsi_Host* FUNC_0 (struct fc_rport*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (struct zfcp_port*,int ,char*,int *) ;
 struct zfcp_port* FUNC_4 (struct zfcp_adapter*,int ) ;
 int FUNC_5 (struct zfcp_port*) ;
 int FUNC_6 (struct zfcp_port*) ;

__attribute__((used)) static void FUNC_7(struct fc_rport *VAR_1)
{
 struct zfcp_port *VAR_2;
 struct Scsi_Host *VAR_3 = FUNC_0(VAR_1);
 struct zfcp_adapter *VAR_4 =
  (struct zfcp_adapter *)VAR_3->hostdata[0];

 FUNC_1(&VAR_0.config_lock);
 VAR_2 = FUNC_4(VAR_4, VAR_1->port_name);
 if (VAR_2)
  FUNC_5(VAR_2);
 FUNC_2(&VAR_0.config_lock);

 if (VAR_2) {
  FUNC_3(VAR_2, 0, "sctrpi1", ((void*)0));
  FUNC_6(VAR_2);
 }
}
