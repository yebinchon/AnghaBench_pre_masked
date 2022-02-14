
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {TYPE_2__* fcp_eq_hdl; } ;
struct lpfc_hba {scalar_t__ intr_type; int cfg_fcp_io_channel; TYPE_3__ sli4_hba; TYPE_1__* pcidev; } ;
struct TYPE_5__ {int idx; int fcp_eq_in_use; struct lpfc_hba* phba; } ;
struct TYPE_4__ {int irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int ,int ,struct lpfc_hba*) ;

__attribute__((used)) static uint32_t
FUNC_4(struct lpfc_hba *VAR_8, uint32_t VAR_9)
{
 uint32_t VAR_10 = VAR_3;
 int VAR_11, VAR_12;

 if (VAR_9 == 2) {

  VAR_11 = 0;
  if (!VAR_11) {

   VAR_11 = FUNC_2(VAR_8);
   if (!VAR_11) {

    VAR_8->intr_type = VAR_5;
    VAR_10 = 2;
   }
  }
 }


 if (VAR_9 >= 1 && VAR_8->intr_type == VAR_6) {
  VAR_11 = FUNC_1(VAR_8);
  if (!VAR_11) {

   VAR_8->intr_type = VAR_4;
   VAR_10 = 1;
  }
 }


 if (VAR_8->intr_type == VAR_6) {
  VAR_11 = FUNC_3(VAR_8->pcidev->irq, VAR_7,
         VAR_1, VAR_2, VAR_8);
  if (!VAR_11) {

   VAR_8->intr_type = VAR_0;
   VAR_10 = 0;
   for (VAR_12 = 0; VAR_12 < VAR_8->cfg_fcp_io_channel;
        VAR_12++) {
    VAR_8->sli4_hba.fcp_eq_hdl[VAR_12].idx = VAR_12;
    VAR_8->sli4_hba.fcp_eq_hdl[VAR_12].phba = VAR_8;
    FUNC_0(&VAR_8->sli4_hba.fcp_eq_hdl[VAR_12].
     fcp_eq_in_use, 1);
   }
  }
 }
 return VAR_10;
}
