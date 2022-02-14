
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int host; } ;
struct TYPE_2__ {int adv_dvc_var; int asc_dvc_var; } ;
struct asc_board {TYPE_1__ dvc_var; } ;


 scalar_t__ FUNC_0 (struct asc_board*) ;
 int FUNC_1 (struct scsi_device*,int *) ;
 int FUNC_2 (struct scsi_device*,int *) ;
 struct asc_board* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct scsi_device *VAR_0)
{
 struct asc_board *VAR_1 = FUNC_3(VAR_0->host);

 if (FUNC_0(VAR_1))
  FUNC_1(VAR_0,
      &VAR_1->dvc_var.asc_dvc_var);
 else
  FUNC_2(VAR_0,
      &VAR_1->dvc_var.adv_dvc_var);

 return 0;
}
