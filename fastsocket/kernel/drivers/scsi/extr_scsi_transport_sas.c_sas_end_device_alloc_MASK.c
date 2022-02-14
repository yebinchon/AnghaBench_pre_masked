
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int release; int parent; } ;
struct TYPE_7__ {int device_type; } ;
struct sas_rphy {TYPE_2__ dev; TYPE_1__ identify; int scsi_target_id; } ;
struct TYPE_9__ {int parent; } ;
struct sas_port {int port_identifier; TYPE_3__ dev; } ;
struct sas_end_device {struct sas_rphy rphy; } ;
struct Scsi_Host {int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int ,int ,...) ;
 struct sas_rphy* FUNC_1 (int ) ;
 struct Scsi_Host* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*) ;
 struct sas_end_device* FUNC_5 (int,int ) ;
 int VAR_2 ;
 int FUNC_6 (struct sas_rphy*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;

struct sas_rphy *FUNC_9(struct sas_port *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_2(&VAR_3->dev);
 struct sas_end_device *VAR_5;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_0);
 if (!VAR_5) {
  return ((void*)0);
 }

 FUNC_3(&VAR_5->rphy.dev);
 VAR_5->rphy.dev.parent = FUNC_4(&VAR_3->dev);
 VAR_5->rphy.dev.release = VAR_2;
 if (FUNC_7(VAR_3->dev.parent)) {
  struct sas_rphy *VAR_6 = FUNC_1(VAR_3->dev.parent);
  FUNC_0(&VAR_5->rphy.dev, "end_device-%d:%d:%d",
        VAR_4->host_no, VAR_6->scsi_target_id,
        VAR_3->port_identifier);
 } else
  FUNC_0(&VAR_5->rphy.dev, "end_device-%d:%d",
        VAR_4->host_no, VAR_3->port_identifier);
 VAR_5->rphy.identify.device_type = VAR_1;
 FUNC_6(&VAR_5->rphy);
 FUNC_8(&VAR_5->rphy.dev);

 return &VAR_5->rphy;
}
