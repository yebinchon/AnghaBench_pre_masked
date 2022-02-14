
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ipath_qp_table {size_t max; TYPE_1__* map; int lock; struct ipath_qp** table; } ;
struct ipath_qp {struct ipath_qp* next; } ;
struct TYPE_2__ {scalar_t__ page; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

unsigned FUNC_4(struct ipath_qp_table *VAR_0)
{
 unsigned long VAR_1;
 struct ipath_qp *VAR_2;
 u32 VAR_3, VAR_4 = 0;

 FUNC_2(&VAR_0->lock, VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_0->max; VAR_3++) {
  VAR_2 = VAR_0->table[VAR_3];
  VAR_0->table[VAR_3] = ((void*)0);

  for (; VAR_2; VAR_2 = VAR_2->next)
   VAR_4++;
 }
 FUNC_3(&VAR_0->lock, VAR_1);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0->map); VAR_3++)
  if (VAR_0->map[VAR_3].page)
   FUNC_1((unsigned long) VAR_0->map[VAR_3].page);
 return VAR_4;
}
