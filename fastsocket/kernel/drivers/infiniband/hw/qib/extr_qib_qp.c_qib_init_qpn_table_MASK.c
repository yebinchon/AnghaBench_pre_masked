
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_qpn_table {int last; int nmaps; int mask; int lock; } ;
struct qib_devdata {int qpn_mask; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct qib_devdata *VAR_0, struct qib_qpn_table *VAR_1)
{
 FUNC_0(&VAR_1->lock);
 VAR_1->last = 1;
 VAR_1->nmaps = 1;
 VAR_1->mask = VAR_0->qpn_mask;
}
