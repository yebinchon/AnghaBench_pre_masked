
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int release; int parent; } ;
struct TYPE_5__ {int device_type; } ;
struct sas_rphy {TYPE_2__ dev; TYPE_1__ identify; scalar_t__ scsi_target_id; } ;
struct sas_port {int dev; } ;
struct sas_host_attrs {int lock; int next_expander_id; } ;
struct sas_expander_device {struct sas_rphy rphy; } ;
struct Scsi_Host {int host_no; } ;
typedef enum sas_device_type { ____Placeholder_sas_device_type } sas_device_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,char*,int ,scalar_t__) ;
 struct Scsi_Host* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 struct sas_expander_device* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int FUNC_8 (struct sas_rphy*) ;
 struct sas_host_attrs* FUNC_9 (struct Scsi_Host*) ;
 int FUNC_10 (TYPE_2__*) ;

struct sas_rphy *FUNC_11(struct sas_port *VAR_4,
        enum sas_device_type VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_2(&VAR_4->dev);
 struct sas_expander_device *VAR_7;
 struct sas_host_attrs *VAR_8 = FUNC_9(VAR_6);

 FUNC_0(VAR_5 != VAR_1 &&
        VAR_5 != VAR_2);

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_0);
 if (!VAR_7) {
  return ((void*)0);
 }

 FUNC_3(&VAR_7->rphy.dev);
 VAR_7->rphy.dev.parent = FUNC_4(&VAR_4->dev);
 VAR_7->rphy.dev.release = VAR_3;
 FUNC_6(&VAR_8->lock);
 VAR_7->rphy.scsi_target_id = VAR_8->next_expander_id++;
 FUNC_7(&VAR_8->lock);
 FUNC_1(&VAR_7->rphy.dev, "expander-%d:%d",
       VAR_6->host_no, VAR_7->rphy.scsi_target_id);
 VAR_7->rphy.identify.device_type = VAR_5;
 FUNC_8(&VAR_7->rphy);
 FUNC_10(&VAR_7->rphy.dev);

 return &VAR_7->rphy;
}
