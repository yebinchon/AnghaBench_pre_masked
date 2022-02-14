
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int parent; } ;
struct sas_identify {scalar_t__ device_type; int target_port_protocols; } ;
struct sas_rphy {int scsi_target_id; TYPE_2__ dev; int list; struct sas_identify identify; } ;
struct TYPE_7__ {int parent; } ;
struct sas_port {struct sas_rphy* rphy; TYPE_1__ dev; } ;
struct sas_host_attrs {int lock; int next_target_id; int rphy_list; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 struct sas_port* FUNC_1 (int ) ;
 struct Scsi_Host* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (struct Scsi_Host*,struct sas_rphy*) ;
 int FUNC_9 (TYPE_2__*,int ,int,int,int ) ;
 struct sas_host_attrs* FUNC_10 (struct Scsi_Host*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;

int FUNC_13(struct sas_rphy *VAR_6)
{
 struct sas_port *VAR_7 = FUNC_1(VAR_6->dev.parent);
 struct Scsi_Host *VAR_8 = FUNC_2(VAR_7->dev.parent);
 struct sas_host_attrs *VAR_9 = FUNC_10(VAR_8);
 struct sas_identify *VAR_10 = &VAR_6->identify;
 int VAR_11;

 if (VAR_7->rphy)
  return -VAR_0;
 VAR_7->rphy = VAR_6;

 VAR_11 = FUNC_3(&VAR_6->dev);
 if (VAR_11)
  return VAR_11;
 FUNC_11(&VAR_6->dev);
 FUNC_12(&VAR_6->dev);
 if (FUNC_8(VAR_8, VAR_6))
  FUNC_7("fail to a bsg device %s\n", FUNC_0(&VAR_6->dev));


 FUNC_5(&VAR_9->lock);
 FUNC_4(&VAR_6->list, &VAR_9->rphy_list);
 if (VAR_10->device_type == VAR_1 &&
     (VAR_10->target_port_protocols &
      (VAR_3|VAR_4|VAR_2)))
  VAR_6->scsi_target_id = VAR_9->next_target_id++;
 else if (VAR_10->device_type == VAR_1)
  VAR_6->scsi_target_id = -1;
 FUNC_6(&VAR_9->lock);

 if (VAR_10->device_type == VAR_1 &&
     VAR_6->scsi_target_id != -1) {
  int VAR_12;

  if (VAR_10->target_port_protocols & VAR_3)
   VAR_12 = VAR_5;
  else
   VAR_12 = 0;

  FUNC_9(&VAR_6->dev, 0, VAR_6->scsi_target_id, VAR_12, 0);
 }

 return 0;
}
