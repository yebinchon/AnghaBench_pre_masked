
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lpfc_scsi_buf {scalar_t__ seg_cnt; scalar_t__ prot_seg_cnt; TYPE_2__* pCmd; } ;
struct lpfc_hba {TYPE_1__* pcidev; } ;
struct TYPE_6__ {int sc_data_direction; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(struct lpfc_hba *VAR_0, struct lpfc_scsi_buf *VAR_1)
{






 if (VAR_1->seg_cnt > 0)
  FUNC_1(VAR_1->pCmd);
 if (VAR_1->prot_seg_cnt > 0)
  FUNC_0(&VAR_0->pcidev->dev, FUNC_3(VAR_1->pCmd),
    FUNC_2(VAR_1->pCmd),
    VAR_1->pCmd->sc_data_direction);
}
