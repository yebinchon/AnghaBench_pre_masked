
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct qib_mregion {int lkey_published; size_t lkey; TYPE_1__* pd; } ;
struct qib_lkey_table {size_t next; int max; int gen; int lock; int ** table; } ;
struct qib_ibdev {int * dma_mr; struct qib_lkey_table lk_table; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qib_mregion*) ;
 int FUNC_1 (int *,struct qib_mregion*) ;
 struct qib_mregion* FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct qib_ibdev* FUNC_5 (int ) ;

int FUNC_6(struct qib_mregion *VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 int VAR_7 = 0;
 struct qib_ibdev *VAR_8 = FUNC_5(VAR_2->pd->device);
 struct qib_lkey_table *VAR_9 = &VAR_8->lk_table;

 FUNC_3(&VAR_9->lock, VAR_4);


 if (VAR_3) {
  struct qib_mregion *VAR_10;

  VAR_10 = FUNC_2(VAR_8->dma_mr);
  if (!VAR_10) {
   FUNC_0(VAR_2);
   FUNC_1(VAR_8->dma_mr, VAR_2);
   VAR_2->lkey_published = 1;
  }
  goto success;
 }


 VAR_5 = VAR_9->next;
 VAR_6 = VAR_5;
 for (;;) {
  if (VAR_9->table[VAR_5] == ((void*)0))
   break;
  VAR_5 = (VAR_5 + 1) & (VAR_9->max - 1);
  if (VAR_5 == VAR_6)
   goto bail;
 }
 VAR_9->next = (VAR_5 + 1) & (VAR_9->max - 1);




 VAR_9->gen++;
 VAR_2->lkey = (VAR_5 << (32 - VAR_1)) |
  ((((1 << (24 - VAR_1)) - 1) & VAR_9->gen)
   << 8);
 if (VAR_2->lkey == 0) {
  VAR_2->lkey |= 1 << 8;
  VAR_9->gen++;
 }
 FUNC_0(VAR_2);
 FUNC_1(VAR_9->table[VAR_5], VAR_2);
 VAR_2->lkey_published = 1;
success:
 FUNC_4(&VAR_9->lock, VAR_4);
out:
 return VAR_7;
bail:
 FUNC_4(&VAR_9->lock, VAR_4);
 VAR_7 = -VAR_0;
 goto out;
}
