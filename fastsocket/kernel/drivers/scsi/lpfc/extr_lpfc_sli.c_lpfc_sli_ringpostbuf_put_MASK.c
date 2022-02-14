
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_sli_ring {int postbufq_cnt; int postbufq; } ;
struct lpfc_hba {int hbalock; } ;
struct lpfc_dmabuf {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct lpfc_hba *VAR_0, struct lpfc_sli_ring *VAR_1,
    struct lpfc_dmabuf *VAR_2)
{


 FUNC_1(&VAR_0->hbalock);
 FUNC_0(&VAR_2->list, &VAR_1->postbufq);
 VAR_1->postbufq_cnt++;
 FUNC_2(&VAR_0->hbalock);
 return 0;
}
