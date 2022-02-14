
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct scsi_qla_host {TYPE_3__* hw; int host_no; } ;
typedef int event_string ;
struct TYPE_6__ {TYPE_2__* pdev; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;

 int FUNC_0 (int *,int ,char**) ;
 int FUNC_1 (char*,int,char*,int ) ;

__attribute__((used)) static void
FUNC_2(struct scsi_qla_host *VAR_1, u32 VAR_2)
{
 char VAR_3[40];
 char *VAR_4[] = { VAR_3, ((void*)0) };

 switch (VAR_2) {
 case 128:
  FUNC_1(VAR_3, sizeof(VAR_3), "FW_DUMP=%ld",
      VAR_1->host_no);
  break;
 default:

  break;
 }
 FUNC_0(&VAR_1->hw->pdev->dev.kobj, VAR_0, VAR_4);
}
