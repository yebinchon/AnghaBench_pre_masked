
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_sli_ring {int txcmplq; int txq; } ;
struct lpfc_sli {size_t fcp_ring; struct lpfc_sli_ring* ring; } ;
struct lpfc_hba {int hbalock; int hba_flag; struct lpfc_sli sli; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct lpfc_hba*,int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_5(struct lpfc_hba *VAR_5)
{
 FUNC_0(VAR_4);
 FUNC_0(VAR_3);
 struct lpfc_sli *VAR_6 = &VAR_5->sli;
 struct lpfc_sli_ring *VAR_7;


 VAR_7 = &VAR_6->ring[VAR_6->fcp_ring];

 FUNC_3(&VAR_5->hbalock);

 FUNC_1(&VAR_7->txq, &VAR_4);


 FUNC_1(&VAR_7->txcmplq, &VAR_3);


 VAR_5->hba_flag |= VAR_0;
 FUNC_4(&VAR_5->hbalock);


 FUNC_2(VAR_5, &VAR_4, VAR_2,
         VAR_1);


 FUNC_2(VAR_5, &VAR_3, VAR_2,
         VAR_1);
}
