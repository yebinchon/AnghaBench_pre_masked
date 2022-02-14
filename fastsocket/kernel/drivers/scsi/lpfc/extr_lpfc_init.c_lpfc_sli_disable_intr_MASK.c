
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sli_intr; } ;
struct TYPE_6__ {TYPE_2__ slistat; } ;
struct lpfc_hba {scalar_t__ intr_type; TYPE_3__ sli; TYPE_1__* pcidev; } ;
struct TYPE_4__ {int irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_4)
{

 if (VAR_4->intr_type == VAR_2)
  FUNC_2(VAR_4);
 else if (VAR_4->intr_type == VAR_1)
  FUNC_1(VAR_4);
 else if (VAR_4->intr_type == VAR_0)
  FUNC_0(VAR_4->pcidev->irq, VAR_4);


 VAR_4->intr_type = VAR_3;
 VAR_4->sli.slistat.sli_intr = 0;

 return;
}
