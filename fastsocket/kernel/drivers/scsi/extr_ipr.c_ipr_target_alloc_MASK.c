
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_target {struct ipr_sata_port* hostdata; int dev; } ;
struct ipr_sata_port {struct ipr_resource_entry* res; struct ata_port* ap; struct ipr_ioa_cfg* ioa_cfg; } ;
struct ipr_resource_entry {struct ipr_sata_port* sata_port; } ;
struct ipr_ioa_cfg {TYPE_1__* host; int ata_host; } ;
struct ata_port {struct ipr_sata_port* private_data; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_2__ {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ata_port* FUNC_0 (int *,int *,struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_1 (int *) ;
 struct ipr_resource_entry* FUNC_2 (struct scsi_target*) ;
 scalar_t__ FUNC_3 (struct ipr_resource_entry*) ;
 int FUNC_4 (struct ipr_sata_port*) ;
 struct ipr_sata_port* FUNC_5 (int,int ) ;
 int VAR_2 ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct scsi_target *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_1(&VAR_3->dev);
 struct ipr_ioa_cfg *VAR_5 = (struct ipr_ioa_cfg *) VAR_4->hostdata;
 struct ipr_sata_port *VAR_6;
 struct ata_port *VAR_7;
 struct ipr_resource_entry *VAR_8;
 unsigned long VAR_9;

 FUNC_6(VAR_5->host->host_lock, VAR_9);
 VAR_8 = FUNC_2(VAR_3);
 VAR_3->hostdata = ((void*)0);

 if (VAR_8 && FUNC_3(VAR_8)) {
  FUNC_7(VAR_5->host->host_lock, VAR_9);
  VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_1);
  if (!VAR_6)
   return -VAR_0;

  VAR_7 = FUNC_0(&VAR_5->ata_host, &VAR_2, VAR_4);
  if (VAR_7) {
   FUNC_6(VAR_5->host->host_lock, VAR_9);
   VAR_6->ioa_cfg = VAR_5;
   VAR_6->ap = VAR_7;
   VAR_6->res = VAR_8;

   VAR_8->sata_port = VAR_6;
   VAR_7->private_data = VAR_6;
   VAR_3->hostdata = VAR_6;
  } else {
   FUNC_4(VAR_6);
   return -VAR_0;
  }
 }
 FUNC_7(VAR_5->host->host_lock, VAR_9);

 return 0;
}
