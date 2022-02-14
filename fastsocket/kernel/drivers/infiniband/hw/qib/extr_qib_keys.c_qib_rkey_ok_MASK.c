
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct qib_sge {int length; int sge_length; unsigned int m; unsigned int n; void* vaddr; struct qib_mregion* mr; } ;
struct TYPE_6__ {scalar_t__ pd; int device; } ;
struct qib_qp {TYPE_2__ ibqp; } ;
struct TYPE_5__ {int device; } ;
struct qib_pd {scalar_t__ user; TYPE_1__ ibpd; } ;
struct qib_mregion {int lkey; scalar_t__ pd; scalar_t__ iova; int length; int access_flags; int page_shift; TYPE_4__** map; scalar_t__ offset; int refcount; } ;
struct qib_lkey_table {int * table; } ;
struct qib_ibdev {int dma_mr; struct qib_lkey_table lk_table; } ;
struct TYPE_8__ {TYPE_3__* segs; } ;
struct TYPE_7__ {size_t length; void* vaddr; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct qib_mregion* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct qib_ibdev* FUNC_4 (int ) ;
 struct qib_pd* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct qib_qp *VAR_2, struct qib_sge *VAR_3,
  u32 VAR_4, u64 VAR_5, u32 VAR_6, int VAR_7)
{
 struct qib_lkey_table *VAR_8 = &FUNC_4(VAR_2->ibqp.device)->lk_table;
 struct qib_mregion *VAR_9;
 unsigned VAR_10, VAR_11;
 size_t VAR_12;





 FUNC_2();
 if (VAR_6 == 0) {
  struct qib_pd *VAR_13 = FUNC_5(VAR_2->ibqp.pd);
  struct qib_ibdev *VAR_14 = FUNC_4(VAR_13->ibpd.device);

  if (VAR_13->user)
   goto bail;
  VAR_9 = FUNC_1(VAR_14->dma_mr);
  if (!VAR_9)
   goto bail;
  if (FUNC_6(!FUNC_0(&VAR_9->refcount)))
   goto bail;
  FUNC_3();

  VAR_3->mr = VAR_9;
  VAR_3->vaddr = (void *) VAR_5;
  VAR_3->length = VAR_4;
  VAR_3->sge_length = VAR_4;
  VAR_3->m = 0;
  VAR_3->n = 0;
  goto ok;
 }

 VAR_9 = FUNC_1(
  VAR_8->table[(VAR_6 >> (32 - VAR_1))]);
 if (FUNC_6(!VAR_9 || VAR_9->lkey != VAR_6 || VAR_2->ibqp.pd != VAR_9->pd))
  goto bail;

 VAR_12 = VAR_5 - VAR_9->iova;
 if (FUNC_6(VAR_5 < VAR_9->iova || VAR_12 + VAR_4 > VAR_9->length ||
       (VAR_9->access_flags & VAR_7) == 0))
  goto bail;
 if (FUNC_6(!FUNC_0(&VAR_9->refcount)))
  goto bail;
 FUNC_3();

 VAR_12 += VAR_9->offset;
 if (VAR_9->page_shift) {





  size_t VAR_15;

  VAR_15 = VAR_12 >> VAR_9->page_shift;
  VAR_12 -= (VAR_15 << VAR_9->page_shift);
  VAR_11 = VAR_15/VAR_0;
  VAR_10 = VAR_15%VAR_0;
 } else {
  VAR_11 = 0;
  VAR_10 = 0;
  while (VAR_12 >= VAR_9->map[VAR_11]->segs[VAR_10].length) {
   VAR_12 -= VAR_9->map[VAR_11]->segs[VAR_10].length;
   VAR_10++;
   if (VAR_10 >= VAR_0) {
    VAR_11++;
    VAR_10 = 0;
   }
  }
 }
 VAR_3->mr = VAR_9;
 VAR_3->vaddr = VAR_9->map[VAR_11]->segs[VAR_10].vaddr + VAR_12;
 VAR_3->length = VAR_9->map[VAR_11]->segs[VAR_10].length - VAR_12;
 VAR_3->sge_length = VAR_4;
 VAR_3->m = VAR_11;
 VAR_3->n = VAR_10;
ok:
 return 1;
bail:
 FUNC_3();
 return 0;
}
