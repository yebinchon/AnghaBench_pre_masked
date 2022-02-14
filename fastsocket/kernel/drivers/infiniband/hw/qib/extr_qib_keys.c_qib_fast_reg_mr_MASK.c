
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_8__ {scalar_t__ pd; int device; } ;
struct qib_qp {TYPE_1__ ibqp; } ;
struct qib_pd {scalar_t__ user; } ;
struct qib_mregion {scalar_t__ pd; size_t max_segs; int lkey; size_t length; TYPE_6__** map; int access_flags; int iova; int user_base; } ;
struct qib_lkey_table {int lock; int * table; } ;
struct TYPE_10__ {int rkey; size_t page_list_len; unsigned long page_shift; size_t length; TYPE_2__* page_list; int access_flags; int iova_start; } ;
struct TYPE_11__ {TYPE_3__ fast_reg; } ;
struct ib_send_wr {TYPE_4__ wr; } ;
struct TYPE_14__ {struct qib_lkey_table lk_table; } ;
struct TYPE_13__ {TYPE_5__* segs; } ;
struct TYPE_12__ {size_t length; void* vaddr; } ;
struct TYPE_9__ {scalar_t__* page_list; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct qib_mregion* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 TYPE_7__* FUNC_4 (int ) ;
 struct qib_pd* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct qib_qp *VAR_3, struct ib_send_wr *VAR_4)
{
 struct qib_lkey_table *VAR_5 = &FUNC_4(VAR_3->ibqp.device)->lk_table;
 struct qib_pd *VAR_6 = FUNC_5(VAR_3->ibqp.pd);
 struct qib_mregion *VAR_7;
 u32 VAR_8 = VAR_4->wr.fast_reg.rkey;
 unsigned VAR_9, VAR_10, VAR_11;
 int VAR_12 = -VAR_0;
 unsigned long VAR_13;
 u64 *VAR_14;
 size_t VAR_15;

 FUNC_2(&VAR_5->lock, VAR_13);
 if (VAR_6->user || VAR_8 == 0)
  goto bail;

 VAR_7 = FUNC_1(
  VAR_5->table[(VAR_8 >> (32 - VAR_2))],
  FUNC_0(&VAR_5->lock));
 if (FUNC_6(VAR_7 == ((void*)0) || VAR_3->ibqp.pd != VAR_7->pd))
  goto bail;

 if (VAR_4->wr.fast_reg.page_list_len > VAR_7->max_segs)
  goto bail;

 VAR_15 = 1UL << VAR_4->wr.fast_reg.page_shift;
 if (VAR_4->wr.fast_reg.length > VAR_15 * VAR_4->wr.fast_reg.page_list_len)
  goto bail;

 VAR_7->user_base = VAR_4->wr.fast_reg.iova_start;
 VAR_7->iova = VAR_4->wr.fast_reg.iova_start;
 VAR_7->lkey = VAR_8;
 VAR_7->length = VAR_4->wr.fast_reg.length;
 VAR_7->access_flags = VAR_4->wr.fast_reg.access_flags;
 VAR_14 = VAR_4->wr.fast_reg.page_list->page_list;
 VAR_11 = 0;
 VAR_10 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_4->wr.fast_reg.page_list_len; VAR_9++) {
  VAR_7->map[VAR_11]->segs[VAR_10].vaddr = (void *) VAR_14[VAR_9];
  VAR_7->map[VAR_11]->segs[VAR_10].length = VAR_15;
  if (++VAR_10 == VAR_1) {
   VAR_11++;
   VAR_10 = 0;
  }
 }

 VAR_12 = 0;
bail:
 FUNC_3(&VAR_5->lock, VAR_13);
 return VAR_12;
}
