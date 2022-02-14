
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct Scsi_Host* shost; } ;
struct sas_ha_struct {int dev; TYPE_1__ core; } ;
struct TYPE_5__ {struct ata_port* ap; int ata_host; } ;
struct domain_device {TYPE_2__ sata_dev; TYPE_3__* port; } ;
struct ata_port {struct Scsi_Host* scsi_host; int cbl; struct domain_device* private_data; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_6__ {struct sas_ha_struct* ha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int *) ;
 struct ata_port* FUNC_2 (int *,int *,struct Scsi_Host*) ;
 int FUNC_3 (struct ata_port*) ;
 int FUNC_4 (struct ata_port*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_5(struct domain_device *VAR_4)
{
 struct sas_ha_struct *VAR_5 = VAR_4->port->ha;
 struct Scsi_Host *VAR_6 = VAR_5->core.shost;
 struct ata_port *VAR_7;
 int VAR_8;

 FUNC_1(&VAR_4->sata_dev.ata_host, VAR_5->dev, &VAR_2);
 VAR_7 = FUNC_2(&VAR_4->sata_dev.ata_host,
    &VAR_3,
    VAR_6);
 if (!VAR_7) {
  FUNC_0("ata_sas_port_alloc failed.\n");
  return -VAR_1;
 }

 VAR_7->private_data = VAR_4;
 VAR_7->cbl = VAR_0;
 VAR_7->scsi_host = VAR_6;
 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8) {
  FUNC_3(VAR_7);
  return VAR_8;
 }
 VAR_4->sata_dev.ap = VAR_7;

 return 0;
}
