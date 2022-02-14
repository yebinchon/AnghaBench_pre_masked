
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {TYPE_1__* hcam; } ;
struct pmcraid_instance {int host; TYPE_3__* pdev; TYPE_2__ ldn; } ;
struct TYPE_8__ {int fd_ra; int fd_ioasc; } ;
struct pmcraid_hcam_ldn {TYPE_4__ error_log; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_5__ {scalar_t__ notification_type; scalar_t__ notification_lost; int overlay_id; int flags; int op_code; int ilid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct pmcraid_instance *VAR_4)
{
 struct pmcraid_hcam_ldn *VAR_5;
 u32 VAR_6;

 VAR_5 = (struct pmcraid_hcam_ldn *)VAR_4->ldn.hcam;

 FUNC_3
  ("LDN(%x): %x type: %x lost: %x flags: %x overlay id: %x\n",
   VAR_4->ldn.hcam->ilid,
   VAR_4->ldn.hcam->op_code,
   VAR_4->ldn.hcam->notification_type,
   VAR_4->ldn.hcam->notification_lost,
   VAR_4->ldn.hcam->flags,
   VAR_4->ldn.hcam->overlay_id);


 if (VAR_4->ldn.hcam->notification_type !=
     VAR_1)
  return;

 if (VAR_4->ldn.hcam->notification_lost ==
     VAR_0)
  FUNC_1(&VAR_4->pdev->dev, "Error notifications lost\n");

 VAR_6 = FUNC_2(VAR_5->error_log.fd_ioasc);

 if (VAR_6 == VAR_2 ||
  VAR_6 == VAR_3) {
  FUNC_1(&VAR_4->pdev->dev,
   "UnitAttention due to IOA Bus Reset\n");
  FUNC_4(
   VAR_4->host,
   FUNC_0(VAR_5->error_log.fd_ra));
 }

 return;
}
