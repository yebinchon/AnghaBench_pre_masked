
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_sli_ring {int dummy; } ;
struct lpfc_sli {int num_rings; struct lpfc_sli_ring* ring; } ;
struct lpfc_hba {struct lpfc_sli sli; } ;


 int FUNC_0 (struct lpfc_hba*,struct lpfc_sli_ring*) ;

void
FUNC_1(struct lpfc_hba *VAR_0)
{
 struct lpfc_sli *VAR_1 = &VAR_0->sli;
 struct lpfc_sli_ring *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_rings; VAR_3++) {
  VAR_2 = &VAR_1->ring[VAR_3];
  FUNC_0(VAR_0, VAR_2);
 }
}
