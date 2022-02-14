
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct lpfc_hba {int hbalock; } ;
struct TYPE_3__ {scalar_t__ context1; int mbox_flag; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct lpfc_hba *VAR_1, LPFC_MBOXQ_t *VAR_2)
{
 wait_queue_head_t *VAR_3;
 unsigned long VAR_4;





 VAR_2->mbox_flag |= VAR_0;
 FUNC_0(&VAR_1->hbalock, VAR_4);
 VAR_3 = (wait_queue_head_t *) VAR_2->context1;
 if (VAR_3)
  FUNC_2(VAR_3);
 FUNC_1(&VAR_1->hbalock, VAR_4);
 return;
}
