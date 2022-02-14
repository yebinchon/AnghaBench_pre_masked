
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_12__ {int ignore; } ;
struct TYPE_11__ {int * cmd; scalar_t__ hcam; } ;
struct pmcraid_instance {int timestamp_error; TYPE_7__* pdev; TYPE_6__* host; TYPE_5__ ccn; TYPE_4__ ldn; } ;
struct TYPE_10__ {int fd_ioasc; } ;
struct pmcraid_hcam_ldn {TYPE_3__ error_log; } ;
struct pmcraid_cmd {TYPE_2__* ioa_cb; struct pmcraid_instance* drv_inst; } ;
struct TYPE_14__ {int dev; } ;
struct TYPE_13__ {int host_lock; } ;
struct TYPE_8__ {int ioasc; } ;
struct TYPE_9__ {TYPE_1__ ioasa; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (struct pmcraid_instance*) ;
 struct pmcraid_cmd* FUNC_4 (struct pmcraid_instance*,int ) ;
 int FUNC_5 (struct pmcraid_instance*) ;
 int FUNC_6 (struct pmcraid_instance*) ;
 int FUNC_7 (struct pmcraid_cmd*) ;
 int FUNC_8 (struct pmcraid_cmd*) ;
 int FUNC_9 (struct pmcraid_cmd*) ;
 int FUNC_10 (int ,unsigned long) ;
 int FUNC_11 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_12(struct pmcraid_cmd *VAR_5)
{
 struct pmcraid_instance *VAR_6 = VAR_5->drv_inst;
 struct pmcraid_hcam_ldn *VAR_7 =
   (struct pmcraid_hcam_ldn *)VAR_6->ldn.hcam;
 u32 VAR_8 = FUNC_2(VAR_5->ioa_cb->ioasa.ioasc);
 u32 VAR_9 = FUNC_2(VAR_7->error_log.fd_ioasc);
 unsigned long VAR_10;


 VAR_6->ldn.cmd = ((void*)0);
 FUNC_7(VAR_5);





 if (VAR_8 == VAR_1 ||
     FUNC_0(&VAR_6->ccn.ignore) == 1) {
  return;
 } else if (!VAR_8) {
  FUNC_3(VAR_6);
  if (VAR_9 == VAR_2) {
   FUNC_10(VAR_6->host->host_lock,
       VAR_10);
   FUNC_5(VAR_6);
   FUNC_11(VAR_6->host->host_lock,
            VAR_10);
   return;
  }
  if (VAR_9 == VAR_3) {
   VAR_6->timestamp_error = 1;
   FUNC_9(VAR_5);
  }
 } else {
  FUNC_1(&VAR_6->pdev->dev,
   "Host RCB(LDN) failed with IOASC: 0x%08X\n", VAR_8);
 }

 if (!VAR_4)
  FUNC_6(VAR_6);

 VAR_5 = FUNC_4(VAR_6, VAR_0);
 if (VAR_5)
  FUNC_8(VAR_5);
}
