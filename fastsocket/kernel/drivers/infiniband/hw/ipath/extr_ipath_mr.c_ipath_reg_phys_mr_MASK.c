
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u64 ;
struct ib_mr {int dummy; } ;
struct TYPE_7__ {int access_flags; int max_segs; scalar_t__ length; TYPE_2__** map; scalar_t__ offset; void* iova; void* user_base; struct ib_pd* pd; } ;
struct ipath_mr {struct ib_mr ibmr; TYPE_3__ mr; int * umem; } ;
struct ib_phys_buf {scalar_t__ size; scalar_t__ addr; } ;
struct ib_pd {int device; } ;
struct TYPE_8__ {int lk_table; } ;
struct TYPE_6__ {TYPE_1__* segs; } ;
struct TYPE_5__ {scalar_t__ length; void* vaddr; } ;


 int VAR_0 ;
 struct ib_mr* FUNC_0 (int ) ;
 int VAR_1 ;
 struct ipath_mr* FUNC_1 (int,int *) ;
 TYPE_4__* FUNC_2 (int ) ;

struct ib_mr *FUNC_3(struct ib_pd *VAR_2,
    struct ib_phys_buf *VAR_3,
    int VAR_4, int VAR_5, u64 *VAR_6)
{
 struct ipath_mr *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 struct ib_mr *VAR_11;

 VAR_7 = FUNC_1(VAR_4, &FUNC_2(VAR_2->device)->lk_table);
 if (VAR_7 == ((void*)0)) {
  VAR_11 = FUNC_0(-VAR_0);
  goto bail;
 }

 VAR_7->mr.pd = VAR_2;
 VAR_7->mr.user_base = *VAR_6;
 VAR_7->mr.iova = *VAR_6;
 VAR_7->mr.length = 0;
 VAR_7->mr.offset = 0;
 VAR_7->mr.access_flags = VAR_5;
 VAR_7->mr.max_segs = VAR_4;
 VAR_7->umem = ((void*)0);

 VAR_9 = 0;
 VAR_8 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_7->mr.map[VAR_9]->segs[VAR_8].vaddr = (void *) VAR_3[VAR_10].addr;
  VAR_7->mr.map[VAR_9]->segs[VAR_8].length = VAR_3[VAR_10].size;
  VAR_7->mr.length += VAR_3[VAR_10].size;
  VAR_8++;
  if (VAR_8 == VAR_1) {
   VAR_9++;
   VAR_8 = 0;
  }
 }

 VAR_11 = &VAR_7->ibmr;

bail:
 return VAR_11;
}
