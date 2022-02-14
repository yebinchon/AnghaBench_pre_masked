
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int ctxtcnt; int first_user_ctxt; int num_pports; int qpn_mask; int n_krcv_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qib_devdata*,int ) ;

__attribute__((used)) static void FUNC_1(struct qib_devdata *VAR_2)
{
 VAR_2->ctxtcnt = FUNC_0(VAR_2, VAR_0);
 if (VAR_1 > 1) {
  VAR_2->first_user_ctxt = VAR_1 * VAR_2->num_pports;
  if (VAR_2->first_user_ctxt > VAR_2->ctxtcnt)
   VAR_2->first_user_ctxt = VAR_2->ctxtcnt;
  VAR_2->qpn_mask = VAR_2->first_user_ctxt <= 2 ? 2 : 6;
 } else
  VAR_2->first_user_ctxt = VAR_2->num_pports;
 VAR_2->n_krcv_queues = VAR_2->first_user_ctxt;
}
