
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {TYPE_1__* pdev; int flags; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct scsi_qla_host*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

void FUNC_5(struct scsi_qla_host *VAR_4)
{
 if (FUNC_3(VAR_1, &VAR_4->flags)) {
  if (FUNC_4(VAR_2, &VAR_4->flags)) {
   FUNC_2(VAR_4);
  } else if (FUNC_3(VAR_3, &VAR_4->flags)) {
   FUNC_0(VAR_4->pdev->irq, VAR_4);
   FUNC_1(VAR_4->pdev);
  } else if (FUNC_3(VAR_0, &VAR_4->flags)) {
   FUNC_0(VAR_4->pdev->irq, VAR_4);
  }
 }
}
