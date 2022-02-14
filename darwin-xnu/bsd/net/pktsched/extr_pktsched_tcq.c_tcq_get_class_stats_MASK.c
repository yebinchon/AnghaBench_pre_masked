
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct tcq_if {int tif_ifq; } ;
struct tcq_classstats {int sfb; int qstate; int qtype; int dropcnt; int xmitcnt; int period; int qlimit; int qlength; int priority; int class_handle; } ;
struct tcq_class {int * cl_sfb; int cl_q; int cl_dropcnt; int cl_xmitcnt; int cl_period; int cl_pri; int cl_handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 struct tcq_class* FUNC_7 (struct tcq_if*,int ) ;

int
FUNC_8(struct tcq_if *VAR_1, u_int32_t VAR_2,
    struct tcq_classstats *VAR_3)
{
 struct tcq_class *VAR_4;

 FUNC_0(VAR_1->tif_ifq);

 if ((VAR_4 = FUNC_7(VAR_1, VAR_2)) == ((void*)0))
  return (VAR_0);

 VAR_3->class_handle = VAR_4->cl_handle;
 VAR_3->priority = VAR_4->cl_pri;
 VAR_3->qlength = FUNC_2(&VAR_4->cl_q);
 VAR_3->qlimit = FUNC_3(&VAR_4->cl_q);
 VAR_3->period = VAR_4->cl_period;
 VAR_3->xmitcnt = VAR_4->cl_xmitcnt;
 VAR_3->dropcnt = VAR_4->cl_dropcnt;

 VAR_3->qtype = FUNC_5(&VAR_4->cl_q);
 VAR_3->qstate = FUNC_4(&VAR_4->cl_q);

 if (FUNC_1(&VAR_4->cl_q) && VAR_4->cl_sfb != ((void*)0))
  FUNC_6(VAR_4->cl_sfb, &VAR_3->sfb);

 return (0);
}
