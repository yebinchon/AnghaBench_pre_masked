
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qib_sge {scalar_t__ length; scalar_t__ sge_length; unsigned int m; unsigned int n; void* vaddr; struct qib_mregion* mr; } ;
struct TYPE_4__ {int device; } ;
struct qib_pd {TYPE_1__ ibpd; scalar_t__ user; } ;
struct qib_mregion {scalar_t__ lkey; size_t user_base; scalar_t__ length; int access_flags; int page_shift; TYPE_3__** map; scalar_t__ offset; int refcount; TYPE_1__* pd; } ;
struct qib_lkey_table {int * table; } ;
struct qib_ibdev {int dma_mr; } ;
struct ib_sge {scalar_t__ lkey; size_t addr; scalar_t__ length; } ;
struct TYPE_6__ {TYPE_2__* segs; } ;
struct TYPE_5__ {size_t length; void* vaddr; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct qib_mregion* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct qib_ibdev* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct qib_lkey_table *VAR_2, struct qib_pd *VAR_3,
  struct qib_sge *VAR_4, struct ib_sge *VAR_5, int VAR_6)
{
 struct qib_mregion *VAR_7;
 unsigned VAR_8, VAR_9;
 size_t VAR_10;





 FUNC_2();
 if (VAR_5->lkey == 0) {
  struct qib_ibdev *VAR_11 = FUNC_4(VAR_3->ibpd.device);

  if (VAR_3->user)
   goto bail;
  VAR_7 = FUNC_1(VAR_11->dma_mr);
  if (!VAR_7)
   goto bail;
  if (FUNC_5(!FUNC_0(&VAR_7->refcount)))
   goto bail;
  FUNC_3();

  VAR_4->mr = VAR_7;
  VAR_4->vaddr = (void *) VAR_5->addr;
  VAR_4->length = VAR_5->length;
  VAR_4->sge_length = VAR_5->length;
  VAR_4->m = 0;
  VAR_4->n = 0;
  goto ok;
 }
 VAR_7 = FUNC_1(
  VAR_2->table[(VAR_5->lkey >> (32 - VAR_1))]);
 if (FUNC_5(!VAR_7 || VAR_7->lkey != VAR_5->lkey || VAR_7->pd != &VAR_3->ibpd))
  goto bail;

 VAR_10 = VAR_5->addr - VAR_7->user_base;
 if (FUNC_5(VAR_5->addr < VAR_7->user_base ||
       VAR_10 + VAR_5->length > VAR_7->length ||
       (VAR_7->access_flags & VAR_6) != VAR_6))
  goto bail;
 if (FUNC_5(!FUNC_0(&VAR_7->refcount)))
  goto bail;
 FUNC_3();

 VAR_10 += VAR_7->offset;
 if (VAR_7->page_shift) {





  size_t VAR_12;

  VAR_12 = VAR_10 >> VAR_7->page_shift;
  VAR_10 -= (VAR_12 << VAR_7->page_shift);
  VAR_9 = VAR_12/VAR_0;
  VAR_8 = VAR_12%VAR_0;
 } else {
  VAR_9 = 0;
  VAR_8 = 0;
  while (VAR_10 >= VAR_7->map[VAR_9]->segs[VAR_8].length) {
   VAR_10 -= VAR_7->map[VAR_9]->segs[VAR_8].length;
   VAR_8++;
   if (VAR_8 >= VAR_0) {
    VAR_9++;
    VAR_8 = 0;
   }
  }
 }
 VAR_4->mr = VAR_7;
 VAR_4->vaddr = VAR_7->map[VAR_9]->segs[VAR_8].vaddr + VAR_10;
 VAR_4->length = VAR_7->map[VAR_9]->segs[VAR_8].length - VAR_10;
 VAR_4->sge_length = VAR_5->length;
 VAR_4->m = VAR_9;
 VAR_4->n = VAR_8;
ok:
 return 1;
bail:
 FUNC_3();
 return 0;
}
