
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_sli_ring {scalar_t__ ringno; int txcmplq; } ;
struct TYPE_3__ {scalar_t__ ulpCommand; } ;
struct lpfc_iocbq {TYPE_2__* vport; TYPE_1__ iocb; int iocb_flag; int list; } ;
struct lpfc_hba {int fc_ratov; } ;
struct TYPE_4__ {int els_tmofunc; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct lpfc_hba *VAR_5, struct lpfc_sli_ring *VAR_6,
   struct lpfc_iocbq *VAR_7)
{
 FUNC_1(&VAR_7->list, &VAR_6->txcmplq);
 VAR_7->iocb_flag |= VAR_3;

 if ((FUNC_4(VAR_6->ringno == VAR_2)) &&
    (VAR_7->iocb.ulpCommand != VAR_0) &&
    (VAR_7->iocb.ulpCommand != VAR_1)) {
  if (!VAR_7->vport)
   FUNC_0();
  else
   FUNC_2(&VAR_7->vport->els_tmofunc,
    VAR_4 +
    FUNC_3(1000 * (VAR_5->fc_ratov << 1)));
 }


 return 0;
}
