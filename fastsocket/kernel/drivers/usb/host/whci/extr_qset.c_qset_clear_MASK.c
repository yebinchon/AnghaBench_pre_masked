
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int overlay; scalar_t__* scratch; scalar_t__ err_count; int link; } ;
struct whc_qset {int remove_complete; TYPE_1__ qh; scalar_t__ ntds; scalar_t__ td_end; scalar_t__ td_start; } ;
struct whc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;

void FUNC_4(struct whc *VAR_2, struct whc_qset *VAR_3)
{
 VAR_3->td_start = VAR_3->td_end = VAR_3->ntds = 0;

 VAR_3->qh.link = FUNC_1(FUNC_0(8) | VAR_0);
 VAR_3->qh.status = VAR_3->qh.status & VAR_1;
 VAR_3->qh.err_count = 0;
 VAR_3->qh.scratch[0] = 0;
 VAR_3->qh.scratch[1] = 0;
 VAR_3->qh.scratch[2] = 0;

 FUNC_3(&VAR_3->qh.overlay, 0, sizeof(VAR_3->qh.overlay));

 FUNC_2(&VAR_3->remove_complete);
}
