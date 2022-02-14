
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_port {int starget_id; struct fc_rport* rport; int supported_classes; int maxframe_size; scalar_t__ wwpn; TYPE_2__* adapter; int d_id; int wwnn; } ;
struct fc_rport_identifiers {int roles; int port_id; scalar_t__ port_name; int node_name; } ;
struct fc_rport {int scsi_target_id; int supported_classes; int maxframe_size; } ;
struct TYPE_4__ {TYPE_1__* ccw_device; int scsi_host; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,unsigned long long) ;
 struct fc_rport* FUNC_1 (int ,int ,struct fc_rport_identifiers*) ;
 int FUNC_2 (struct zfcp_port*) ;

__attribute__((used)) static void FUNC_3(struct zfcp_port *VAR_1)
{
 struct fc_rport_identifiers VAR_2;
 struct fc_rport *VAR_3;

 if (VAR_1->rport)
  return;

 VAR_2.node_name = VAR_1->wwnn;
 VAR_2.port_name = VAR_1->wwpn;
 VAR_2.port_id = VAR_1->d_id;
 VAR_2.roles = VAR_0;

 VAR_3 = FUNC_1(VAR_1->adapter->scsi_host, 0, &VAR_2);
 if (!VAR_3) {
  FUNC_0(&VAR_1->adapter->ccw_device->dev,
   "Registering port 0x%016Lx failed\n",
   (unsigned long long)VAR_1->wwpn);
  return;
 }

 VAR_3->maxframe_size = VAR_1->maxframe_size;
 VAR_3->supported_classes = VAR_1->supported_classes;
 VAR_1->rport = VAR_3;
 VAR_1->starget_id = VAR_3->scsi_target_id;

 FUNC_2(VAR_1);
}
