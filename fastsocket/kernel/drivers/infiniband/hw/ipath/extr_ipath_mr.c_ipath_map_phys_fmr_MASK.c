
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u64 ;
typedef int u32 ;
struct ipath_lkey_table {int lock; } ;
struct TYPE_7__ {int max_segs; int length; TYPE_2__** map; void* iova; void* user_base; } ;
struct ipath_fmr {int page_shift; TYPE_3__ mr; } ;
struct ib_fmr {int device; } ;
struct TYPE_8__ {struct ipath_lkey_table lk_table; } ;
struct TYPE_6__ {TYPE_1__* segs; } ;
struct TYPE_5__ {int length; void* vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 TYPE_4__* FUNC_2 (int ) ;
 struct ipath_fmr* FUNC_3 (struct ib_fmr*) ;

int FUNC_4(struct ib_fmr *VAR_2, u64 * VAR_3,
         int VAR_4, u64 VAR_5)
{
 struct ipath_fmr *VAR_6 = FUNC_3(VAR_2);
 struct ipath_lkey_table *VAR_7;
 unsigned long VAR_8;
 int VAR_9, VAR_10, VAR_11;
 u32 VAR_12;
 int VAR_13;

 if (VAR_4 > VAR_6->mr.max_segs) {
  VAR_13 = -VAR_0;
  goto bail;
 }
 VAR_7 = &FUNC_2(VAR_2->device)->lk_table;
 FUNC_0(&VAR_7->lock, VAR_8);
 VAR_6->mr.user_base = VAR_5;
 VAR_6->mr.iova = VAR_5;
 VAR_12 = 1 << VAR_6->page_shift;
 VAR_6->mr.length = VAR_4 * VAR_12;
 VAR_9 = 0;
 VAR_10 = 0;
 VAR_12 = 1 << VAR_6->page_shift;
 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  VAR_6->mr.map[VAR_9]->segs[VAR_10].vaddr = (void *) VAR_3[VAR_11];
  VAR_6->mr.map[VAR_9]->segs[VAR_10].length = VAR_12;
  if (++VAR_10 == VAR_1) {
   VAR_9++;
   VAR_10 = 0;
  }
 }
 FUNC_1(&VAR_7->lock, VAR_8);
 VAR_13 = 0;

bail:
 return VAR_13;
}
