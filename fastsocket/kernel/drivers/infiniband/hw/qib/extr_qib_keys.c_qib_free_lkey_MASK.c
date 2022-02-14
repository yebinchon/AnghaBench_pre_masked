
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qib_mregion {int lkey; scalar_t__ lkey_published; TYPE_1__* pd; } ;
struct qib_lkey_table {int lock; int * table; } ;
struct qib_ibdev {int dma_mr; struct qib_lkey_table lk_table; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (struct qib_mregion*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct qib_ibdev* FUNC_4 (int ) ;

void FUNC_5(struct qib_mregion *VAR_1)
{
 unsigned long VAR_2;
 u32 VAR_3 = VAR_1->lkey;
 u32 VAR_4;
 struct qib_ibdev *VAR_5 = FUNC_4(VAR_1->pd->device);
 struct qib_lkey_table *VAR_6 = &VAR_5->lk_table;

 FUNC_2(&VAR_6->lock, VAR_2);
 if (!VAR_1->lkey_published)
  goto out;
 if (VAR_3 == 0)
  FUNC_1(VAR_5->dma_mr, ((void*)0));
 else {
  VAR_4 = VAR_3 >> (32 - VAR_0);
  FUNC_1(VAR_6->table[VAR_4], ((void*)0));
 }
 FUNC_0(VAR_1);
 VAR_1->lkey_published = 0;
out:
 FUNC_3(&VAR_6->lock, VAR_2);
}
