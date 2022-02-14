
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_device {int scsi_level; int no_uld_attach; TYPE_2__* host; int request_queue; int type; struct ipr_resource_entry* hostdata; } ;
struct ipr_resource_entry {int res_path; TYPE_1__* sata_port; } ;
struct ipr_ioa_cfg {TYPE_3__* host; scalar_t__ sis64; } ;
struct ata_port {int dummy; } ;
typedef int buffer ;
struct TYPE_6__ {int host_lock; } ;
struct TYPE_5__ {int cmd_per_lun; scalar_t__ hostdata; } ;
struct TYPE_4__ {struct ata_port* ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct scsi_device*,struct ata_port*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ipr_ioa_cfg*,int ,char*,int) ;
 scalar_t__ FUNC_4 (struct ipr_resource_entry*) ;
 scalar_t__ FUNC_5 (struct ipr_resource_entry*) ;
 scalar_t__ FUNC_6 (struct ipr_resource_entry*) ;
 scalar_t__ FUNC_7 (struct ipr_resource_entry*) ;
 int FUNC_8 (struct scsi_device*,int ,int ) ;
 int FUNC_9 (int ,struct scsi_device*,char*,int ) ;
 int FUNC_10 (int ,unsigned long) ;
 int FUNC_11 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct scsi_device *VAR_6)
{
 struct ipr_ioa_cfg *VAR_7 = (struct ipr_ioa_cfg *) VAR_6->host->hostdata;
 struct ipr_resource_entry *VAR_8;
 struct ata_port *VAR_9 = ((void*)0);
 unsigned long VAR_10 = 0;
 char VAR_11[VAR_1];

 FUNC_10(VAR_7->host->host_lock, VAR_10);
 VAR_8 = VAR_6->hostdata;
 if (VAR_8) {
  if (FUNC_4(VAR_8))
   VAR_6->type = VAR_5;
  if (FUNC_4(VAR_8) || FUNC_6(VAR_8)) {
   VAR_6->scsi_level = 4;
   VAR_6->no_uld_attach = 1;
  }
  if (FUNC_7(VAR_8)) {
   FUNC_2(VAR_6->request_queue,
          VAR_3);
   FUNC_1(VAR_6->request_queue, VAR_2);
  }
  if (FUNC_5(VAR_8) && VAR_8->sata_port)
   VAR_9 = VAR_8->sata_port->ap;
  FUNC_11(VAR_7->host->host_lock, VAR_10);

  if (VAR_9) {
   FUNC_8(VAR_6, 0, VAR_0);
   FUNC_0(VAR_6, VAR_9);
  } else
   FUNC_8(VAR_6, 0, VAR_6->host->cmd_per_lun);
  if (VAR_7->sis64)
   FUNC_9(VAR_4, VAR_6, "Resource path: %s\n",
        FUNC_3(VAR_7,
    VAR_8->res_path, VAR_11, sizeof(VAR_11)));
  return 0;
 }
 FUNC_11(VAR_7->host->host_lock, VAR_10);
 return 0;
}
