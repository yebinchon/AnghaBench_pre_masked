
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ipath_sge {scalar_t__ length; scalar_t__ sge_length; unsigned int m; unsigned int n; void* vaddr; struct ipath_mregion* mr; } ;
struct TYPE_5__ {scalar_t__ pd; int device; } ;
struct ipath_qp {TYPE_1__ ibqp; } ;
struct ipath_pd {scalar_t__ user; } ;
struct ipath_mregion {int lkey; scalar_t__ pd; size_t user_base; scalar_t__ length; int access_flags; TYPE_3__** map; scalar_t__ offset; } ;
struct ipath_lkey_table {struct ipath_mregion** table; } ;
struct ib_sge {int lkey; size_t addr; scalar_t__ length; } ;
struct TYPE_8__ {struct ipath_lkey_table lk_table; } ;
struct TYPE_7__ {TYPE_2__* segs; } ;
struct TYPE_6__ {size_t length; void* vaddr; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int ) ;
 struct ipath_pd* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct ipath_qp *VAR_2, struct ipath_sge *VAR_3,
    struct ib_sge *VAR_4, int VAR_5)
{
 struct ipath_lkey_table *VAR_6 = &FUNC_0(VAR_2->ibqp.device)->lk_table;
 struct ipath_mregion *VAR_7;
 unsigned VAR_8, VAR_9;
 size_t VAR_10;
 int VAR_11;





 if (VAR_4->lkey == 0) {

  struct ipath_pd *VAR_12 = FUNC_1(VAR_2->ibqp.pd);

  if (VAR_12->user) {
   VAR_11 = 0;
   goto bail;
  }
  VAR_3->mr = ((void*)0);
  VAR_3->vaddr = (void *) VAR_4->addr;
  VAR_3->length = VAR_4->length;
  VAR_3->sge_length = VAR_4->length;
  VAR_11 = 1;
  goto bail;
 }
 VAR_7 = VAR_6->table[(VAR_4->lkey >> (32 - VAR_1))];
 if (FUNC_2(VAR_7 == ((void*)0) || VAR_7->lkey != VAR_4->lkey ||
       VAR_2->ibqp.pd != VAR_7->pd)) {
  VAR_11 = 0;
  goto bail;
 }

 VAR_10 = VAR_4->addr - VAR_7->user_base;
 if (FUNC_2(VAR_4->addr < VAR_7->user_base ||
       VAR_10 + VAR_4->length > VAR_7->length ||
       (VAR_7->access_flags & VAR_5) != VAR_5)) {
  VAR_11 = 0;
  goto bail;
 }

 VAR_10 += VAR_7->offset;
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
 VAR_3->mr = VAR_7;
 VAR_3->vaddr = VAR_7->map[VAR_9]->segs[VAR_8].vaddr + VAR_10;
 VAR_3->length = VAR_7->map[VAR_9]->segs[VAR_8].length - VAR_10;
 VAR_3->sge_length = VAR_4->length;
 VAR_3->m = VAR_9;
 VAR_3->n = VAR_8;

 VAR_11 = 1;

bail:
 return VAR_11;
}
