
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ ioa_state; } ;
struct pmcraid_instance {int ioa_reset_in_progress; TYPE_5__* host; int ioa_state; TYPE_4__ scn; struct pmcraid_cmd* reset_cmd; scalar_t__ ioa_reset_attempts; TYPE_1__* pdev; } ;
struct pmcraid_cmd {int cmd_done; TYPE_3__* ioa_cb; struct pmcraid_instance* drv_inst; } ;
struct TYPE_10__ {int host_lock; } ;
struct TYPE_7__ {int * cdb; } ;
struct TYPE_8__ {TYPE_2__ ioarcb; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (char*) ;
 struct pmcraid_cmd* FUNC_2 (struct pmcraid_instance*) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int FUNC_4 (struct pmcraid_instance*,scalar_t__) ;
 int FUNC_5 (struct pmcraid_cmd*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct pmcraid_cmd *VAR_4)
{
 struct pmcraid_instance *VAR_5 = VAR_4->drv_inst;
 unsigned long VAR_6;

 FUNC_0(&VAR_5->pdev->dev,
  "Adapter being reset due to cmd(CDB[0] = %x) timeout\n",
  VAR_4->ioa_cb->ioarcb.cdb[0]);







 FUNC_7(VAR_5->host->host_lock, VAR_6);
 if (!VAR_5->ioa_reset_in_progress) {
  VAR_5->ioa_reset_attempts = 0;
  VAR_4 = FUNC_2(VAR_5);




  if (VAR_4 == ((void*)0)) {
   FUNC_8(VAR_5->host->host_lock,
            VAR_6);
   FUNC_1("no free cmnd block for timeout handler\n");
   return;
  }

  VAR_5->reset_cmd = VAR_4;
  VAR_5->ioa_reset_in_progress = 1;
 } else {
  FUNC_3("reset is already in progress\n");

  if (VAR_5->reset_cmd != VAR_4) {




   FUNC_1("cmd is pending but reset in progress\n");
  }






  if (VAR_4 == VAR_5->reset_cmd)
   VAR_4->cmd_done = VAR_3;
 }


 if (VAR_5->scn.ioa_state != VAR_1 &&
     VAR_5->scn.ioa_state != VAR_2)
  FUNC_4(VAR_5,
     VAR_1);

 VAR_5->ioa_state = VAR_0;
 FUNC_6(VAR_5->host);
 FUNC_5(VAR_4);
 FUNC_8(VAR_5->host->host_lock, VAR_6);
}
