
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int next; int prev; } ;
struct qdio_q {TYPE_1__ entry; } ;
struct qdio_irq {int nr_input_qs; struct qdio_q** input_qs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int VAR_0 ;

void FUNC_5(struct qdio_irq *VAR_1)
{
 struct qdio_q *VAR_2;

 FUNC_0(VAR_1->nr_input_qs < 1);
 VAR_2 = VAR_1->input_qs[0];

 if (!VAR_2 || !VAR_2->entry.prev || !VAR_2->entry.next)
  return;

 FUNC_2(&VAR_0);
 FUNC_1(&VAR_2->entry);
 FUNC_3(&VAR_0);
 FUNC_4();
}
