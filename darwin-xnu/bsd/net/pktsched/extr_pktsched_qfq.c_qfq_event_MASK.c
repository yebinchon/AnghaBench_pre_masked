
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_if {int qif_maxclasses; struct qfq_class** qif_class_tbl; int qif_ifq; } ;
struct qfq_class {int dummy; } ;
typedef int cqev_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct qfq_if*,struct qfq_class*,int ) ;

void
FUNC_2(struct qfq_if *VAR_0, cqev_t VAR_1)
{
 struct qfq_class *VAR_2;
 int VAR_3;

 FUNC_0(VAR_0->qif_ifq);

 for (VAR_3 = 0; VAR_3 < VAR_0->qif_maxclasses; VAR_3++)
  if ((VAR_2 = VAR_0->qif_class_tbl[VAR_3]) != ((void*)0))
   FUNC_1(VAR_0, VAR_2, VAR_1);
}
