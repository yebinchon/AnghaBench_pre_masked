
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int ignore; int * cmd; } ;
struct pmcraid_instance {TYPE_3__* host; TYPE_2__* pdev; TYPE_1__ ccn; } ;
struct pmcraid_cmd {TYPE_4__* ioa_cb; struct pmcraid_instance* drv_inst; } ;
struct TYPE_10__ {int ioasc; } ;
struct TYPE_9__ {TYPE_5__ ioasa; } ;
struct TYPE_8__ {int host_lock; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct pmcraid_instance*) ;
 int FUNC_4 (struct pmcraid_cmd*) ;
 int FUNC_5 (struct pmcraid_instance*,int ) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct pmcraid_cmd *VAR_2)
{
 struct pmcraid_instance *VAR_3 = VAR_2->drv_inst;
 u32 VAR_4 = FUNC_2(VAR_2->ioa_cb->ioasa.ioasc);
 unsigned long VAR_5;

 VAR_3->ccn.cmd = ((void*)0);
 FUNC_4(VAR_2);





 if (VAR_4 == VAR_1 ||
     FUNC_0(&VAR_3->ccn.ignore) == 1) {
  return;
 } else if (VAR_4) {
  FUNC_1(&VAR_3->pdev->dev,
   "Host RCB (CCN) failed with IOASC: 0x%08X\n", VAR_4);
  FUNC_6(VAR_3->host->host_lock, VAR_5);
  FUNC_5(VAR_3, VAR_0);
  FUNC_7(VAR_3->host->host_lock, VAR_5);
 } else {
  FUNC_3(VAR_3);
 }
}
