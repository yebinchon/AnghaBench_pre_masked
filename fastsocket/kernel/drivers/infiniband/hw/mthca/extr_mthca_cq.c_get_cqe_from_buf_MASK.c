
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mthca_cqe {int dummy; } ;
struct TYPE_4__ {struct mthca_cqe* buf; } ;
struct TYPE_6__ {TYPE_2__* page_list; TYPE_1__ direct; } ;
struct mthca_cq_buf {TYPE_3__ queue; scalar_t__ is_direct; } ;
struct TYPE_5__ {struct mthca_cqe* buf; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline struct mthca_cqe *FUNC_0(struct mthca_cq_buf *VAR_2,
       int VAR_3)
{
 if (VAR_2->is_direct)
  return VAR_2->queue.direct.buf + (VAR_3 * VAR_0);
 else
  return VAR_2->queue.page_list[VAR_3 * VAR_0 / VAR_1].buf
   + (VAR_3 * VAR_0) % VAR_1;
}
