
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_if {int qif_maxclasses; int qif_ifq; struct qfq_class** qif_class_tbl; } ;
struct qfq_class {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct qfq_if*,struct qfq_class*,int ,int *,int *) ;

void
FUNC_4(struct qfq_if *VAR_0)
{
 struct qfq_class *VAR_1;
 int VAR_2;

 FUNC_1(VAR_0->qif_ifq);

 for (VAR_2 = 0; VAR_2 < VAR_0->qif_maxclasses; VAR_2++) {
  if ((VAR_1 = VAR_0->qif_class_tbl[VAR_2]) != ((void*)0))
   FUNC_3(VAR_0, VAR_1, 0, ((void*)0), ((void*)0));
 }
 FUNC_2(FUNC_0(VAR_0->qif_ifq) == 0);
}
