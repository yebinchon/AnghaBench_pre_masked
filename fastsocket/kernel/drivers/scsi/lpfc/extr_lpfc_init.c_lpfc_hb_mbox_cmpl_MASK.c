
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_hba {scalar_t__ link_state; int hb_tmofunc; TYPE_1__* pport; int mbox_mem_pool; int hbalock; scalar_t__ hb_outstanding; } ;
struct TYPE_2__ {int fc_flag; int load_flag; } ;
typedef int LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct lpfc_hba * VAR_5, LPFC_MBOXQ_t * VAR_6)
{
 unsigned long VAR_7;

 FUNC_3(&VAR_5->hbalock, VAR_7);
 VAR_5->hb_outstanding = 0;
 FUNC_4(&VAR_5->hbalock, VAR_7);


 FUNC_0(VAR_6, VAR_5->mbox_mem_pool);
 if (!(VAR_5->pport->fc_flag & VAR_0) &&
  !(VAR_5->link_state == VAR_2) &&
  !(VAR_5->pport->load_flag & VAR_1))
  FUNC_1(&VAR_5->hb_tmofunc,
     VAR_4 +
     FUNC_2(1000 * VAR_3));
 return;
}
