
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {TYPE_3__* device; } ;
struct ata_queued_cmd {int err_mask; int flags; struct scsi_cmnd* scsicmd; } ;
struct TYPE_5__ {int active_tag; } ;
struct ata_port {int lock; TYPE_2__ link; TYPE_1__* ops; } ;
struct Scsi_Host {int dummy; } ;
typedef enum blk_eh_timer_return { ____Placeholder_blk_eh_timer_return } blk_eh_timer_return ;
struct TYPE_6__ {struct Scsi_Host* host; } ;
struct TYPE_4__ {scalar_t__ error_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 struct ata_queued_cmd* FUNC_2 (struct ata_port*,int ) ;
 struct ata_port* FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

enum blk_eh_timer_return FUNC_6(struct scsi_cmnd *VAR_4)
{
 struct Scsi_Host *VAR_5 = VAR_4->device->host;
 struct ata_port *VAR_6 = FUNC_3(VAR_5);
 unsigned long VAR_7;
 struct ata_queued_cmd *VAR_8;
 enum blk_eh_timer_return VAR_9;

 FUNC_0("ENTER\n");

 if (VAR_6->ops->error_handler) {
  VAR_9 = VAR_3;
  goto out;
 }

 VAR_9 = VAR_2;
 FUNC_4(VAR_6->lock, VAR_7);
 VAR_8 = FUNC_2(VAR_6, VAR_6->link.active_tag);
 if (VAR_8) {
  FUNC_1(VAR_8->scsicmd != VAR_4);
  VAR_8->flags |= VAR_1;
  VAR_8->err_mask |= VAR_0;
  VAR_9 = VAR_3;
 }
 FUNC_5(VAR_6->lock, VAR_7);

 out:
 FUNC_0("EXIT, ret=%d\n", VAR_9);
 return VAR_9;
}
