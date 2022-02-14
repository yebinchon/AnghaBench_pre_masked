
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct qfq_if {int qif_ifq; } ;
struct qfq_classstats {int weight; int sfb; int qstate; int qtype; int dropcnt; int xmitcnt; int period; int qlimit; int qlength; int lmax; int index; int class_handle; } ;
struct qfq_class {int cl_inv_w; int * cl_sfb; int cl_q; int cl_dropcnt; int cl_xmitcnt; int cl_period; int cl_lmax; TYPE_1__* cl_grp; int cl_handle; } ;
struct TYPE_2__ {int qfg_index; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 struct qfq_class* FUNC_2 (struct qfq_if*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;

int
FUNC_8(struct qfq_if *VAR_2, u_int32_t VAR_3,
    struct qfq_classstats *VAR_4)
{
 struct qfq_class *VAR_5;

 FUNC_0(VAR_2->qif_ifq);

 if ((VAR_5 = FUNC_2(VAR_2, VAR_3)) == ((void*)0))
  return (VAR_0);

 VAR_4->class_handle = VAR_5->cl_handle;
 VAR_4->index = VAR_5->cl_grp->qfg_index;
 VAR_4->weight = (VAR_1 / VAR_5->cl_inv_w);
 VAR_4->lmax = VAR_5->cl_lmax;
 VAR_4->qlength = FUNC_3(&VAR_5->cl_q);
 VAR_4->qlimit = FUNC_4(&VAR_5->cl_q);
 VAR_4->period = VAR_5->cl_period;
 VAR_4->xmitcnt = VAR_5->cl_xmitcnt;
 VAR_4->dropcnt = VAR_5->cl_dropcnt;

 VAR_4->qtype = FUNC_6(&VAR_5->cl_q);
 VAR_4->qstate = FUNC_5(&VAR_5->cl_q);

 if (FUNC_1(&VAR_5->cl_q) && VAR_5->cl_sfb != ((void*)0))
  FUNC_7(VAR_5->cl_sfb, &VAR_4->sfb);

 return (0);
}
