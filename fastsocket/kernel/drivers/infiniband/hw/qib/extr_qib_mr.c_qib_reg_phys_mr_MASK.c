
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u64 ;
struct ib_mr {int dummy; } ;
struct TYPE_6__ {int access_flags; int length; TYPE_2__** map; void* iova; void* user_base; } ;
struct qib_mr {struct ib_mr ibmr; TYPE_3__ mr; } ;
struct ib_phys_buf {scalar_t__ size; scalar_t__ addr; } ;
struct ib_pd {int dummy; } ;
struct TYPE_5__ {TYPE_1__* segs; } ;
struct TYPE_4__ {scalar_t__ length; void* vaddr; } ;


 scalar_t__ FUNC_0 (struct qib_mr*) ;
 int VAR_0 ;
 struct qib_mr* FUNC_1 (int,struct ib_pd*) ;

struct ib_mr *FUNC_2(struct ib_pd *VAR_1,
         struct ib_phys_buf *VAR_2,
         int VAR_3, int VAR_4, u64 *VAR_5)
{
 struct qib_mr *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 struct ib_mr *VAR_10;

 VAR_6 = FUNC_1(VAR_3, VAR_1);
 if (FUNC_0(VAR_6)) {
  VAR_10 = (struct ib_mr *)VAR_6;
  goto bail;
 }

 VAR_6->mr.user_base = *VAR_5;
 VAR_6->mr.iova = *VAR_5;
 VAR_6->mr.access_flags = VAR_4;

 VAR_8 = 0;
 VAR_7 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_6->mr.map[VAR_8]->segs[VAR_7].vaddr = (void *) VAR_2[VAR_9].addr;
  VAR_6->mr.map[VAR_8]->segs[VAR_7].length = VAR_2[VAR_9].size;
  VAR_6->mr.length += VAR_2[VAR_9].size;
  VAR_7++;
  if (VAR_7 == VAR_0) {
   VAR_8++;
   VAR_7 = 0;
  }
 }

 VAR_10 = &VAR_6->ibmr;

bail:
 return VAR_10;
}
