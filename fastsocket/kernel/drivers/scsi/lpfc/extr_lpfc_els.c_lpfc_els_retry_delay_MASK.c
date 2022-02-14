
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_work_evt {int evt_listp; int evt; scalar_t__ evt_arg1; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_nodelist {struct lpfc_work_evt els_retry_evt; struct lpfc_vport* vport; } ;
struct lpfc_hba {int hbalock; int work_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct lpfc_nodelist*) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void
FUNC_6(unsigned long VAR_1)
{
 struct lpfc_nodelist *VAR_2 = (struct lpfc_nodelist *) VAR_1;
 struct lpfc_vport *VAR_3 = VAR_2->vport;
 struct lpfc_hba *VAR_4 = VAR_3->phba;
 unsigned long VAR_5;
 struct lpfc_work_evt *VAR_6 = &VAR_2->els_retry_evt;

 FUNC_4(&VAR_4->hbalock, VAR_5);
 if (!FUNC_1(&VAR_6->evt_listp)) {
  FUNC_5(&VAR_4->hbalock, VAR_5);
  return;
 }




 VAR_6->evt_arg1 = FUNC_2(VAR_2);
 if (VAR_6->evt_arg1) {
  VAR_6->evt = VAR_0;
  FUNC_0(&VAR_6->evt_listp, &VAR_4->work_list);
  FUNC_3(VAR_4);
 }
 FUNC_5(&VAR_4->hbalock, VAR_5);
 return;
}
