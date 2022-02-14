
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport_container {int dummy; } ;
struct fc_host_attrs {int node_name; int port_name; int permanent_port_name; int maxframe_size; int port_id; int fabric_name; int * work_q; void* devloss_work_q; int devloss_work_q_name; int dev_loss_tmo; int work_q_name; scalar_t__ npiv_vports_inuse; scalar_t__ next_vport_number; scalar_t__ next_target_id; scalar_t__ next_rport_number; int vports; int rport_bindings; int rports; int tgtid_bind_type; int system_hostname; int symbolic_name; void* speed; int active_fc4s; int port_state; int port_type; int optionrom_version; int firmware_version; int driver_version; int hardware_version; int model_description; int model; int manufacturer; int serial_number; scalar_t__ max_npiv_vports; void* supported_speeds; int supported_fc4s; int supported_classes; } ;
struct device {int dummy; } ;
struct Scsi_Host {int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct Scsi_Host* FUNC_3 (struct device*) ;
 int FUNC_4 (struct Scsi_Host*,struct fc_host_attrs*) ;
 int VAR_6 ;
 int FUNC_5 (int ,int ,int) ;
 struct fc_host_attrs* FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (int ,int,char*,int) ;

__attribute__((used)) static int FUNC_8(struct transport_container *VAR_7, struct device *VAR_8,
    struct device *VAR_9)
{
 struct Scsi_Host *VAR_10 = FUNC_3(VAR_8);
 struct fc_host_attrs *VAR_11 = FUNC_6(VAR_10);






 VAR_11->node_name = -1;
 VAR_11->port_name = -1;
 VAR_11->permanent_port_name = -1;
 VAR_11->supported_classes = VAR_1;
 FUNC_5(VAR_11->supported_fc4s, 0,
  sizeof(VAR_11->supported_fc4s));
 VAR_11->supported_speeds = VAR_2;
 VAR_11->maxframe_size = -1;
 VAR_11->max_npiv_vports = 0;
 FUNC_5(VAR_11->serial_number, 0,
  sizeof(VAR_11->serial_number));
 FUNC_5(VAR_11->manufacturer, 0,
  sizeof(VAR_11->manufacturer));
 FUNC_5(VAR_11->model, 0,
  sizeof(VAR_11->model));
 FUNC_5(VAR_11->model_description, 0,
  sizeof(VAR_11->model_description));
 FUNC_5(VAR_11->hardware_version, 0,
  sizeof(VAR_11->hardware_version));
 FUNC_5(VAR_11->driver_version, 0,
  sizeof(VAR_11->driver_version));
 FUNC_5(VAR_11->firmware_version, 0,
  sizeof(VAR_11->firmware_version));
 FUNC_5(VAR_11->optionrom_version, 0,
  sizeof(VAR_11->optionrom_version));

 VAR_11->port_id = -1;
 VAR_11->port_type = VAR_4;
 VAR_11->port_state = VAR_3;
 FUNC_5(VAR_11->active_fc4s, 0,
  sizeof(VAR_11->active_fc4s));
 VAR_11->speed = VAR_2;
 VAR_11->fabric_name = -1;
 FUNC_5(VAR_11->symbolic_name, 0, sizeof(VAR_11->symbolic_name));
 FUNC_5(VAR_11->system_hostname, 0, sizeof(VAR_11->system_hostname));

 VAR_11->tgtid_bind_type = VAR_5;

 FUNC_0(&VAR_11->rports);
 FUNC_0(&VAR_11->rport_bindings);
 FUNC_0(&VAR_11->vports);
 VAR_11->next_rport_number = 0;
 VAR_11->next_target_id = 0;
 VAR_11->next_vport_number = 0;
 VAR_11->npiv_vports_inuse = 0;

 FUNC_7(VAR_11->work_q_name, sizeof(VAR_11->work_q_name),
   "fc_wq_%d", VAR_10->host_no);
 VAR_11->work_q = FUNC_1(
     VAR_11->work_q_name);
 if (!VAR_11->work_q)
  return -VAR_0;

 VAR_11->dev_loss_tmo = VAR_6;
 FUNC_7(VAR_11->devloss_work_q_name,
   sizeof(VAR_11->devloss_work_q_name),
   "fc_dl_%d", VAR_10->host_no);
 VAR_11->devloss_work_q = FUNC_1(
     VAR_11->devloss_work_q_name);
 if (!VAR_11->devloss_work_q) {
  FUNC_2(VAR_11->work_q);
  VAR_11->work_q = ((void*)0);
  return -VAR_0;
 }

 FUNC_4(VAR_10, VAR_11);


 return 0;
}
