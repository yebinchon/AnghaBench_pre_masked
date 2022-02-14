
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct pmcraid_instance {TYPE_3__* pdev; int outstanding_cmds; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {TYPE_1__* host; } ;
struct TYPE_4__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (struct pmcraid_instance*) ;

__attribute__((used)) static int FUNC_5(struct scsi_cmnd *VAR_4)
{
 unsigned long VAR_5 = 10000;
 int VAR_6 = FUNC_2(VAR_2) / VAR_5;
 struct pmcraid_instance *VAR_7 =
  (struct pmcraid_instance *)(VAR_4->device->host->hostdata);






 while (VAR_6--) {
  if (FUNC_0(&VAR_7->outstanding_cmds) <=
      VAR_1)
   return VAR_3;
  FUNC_3(VAR_5);
 }

 FUNC_1(&VAR_7->pdev->dev,
  "Adapter being reset due to an I/O command timeout.\n");
 return FUNC_4(VAR_7) == 0 ? VAR_3 : VAR_0;
}
