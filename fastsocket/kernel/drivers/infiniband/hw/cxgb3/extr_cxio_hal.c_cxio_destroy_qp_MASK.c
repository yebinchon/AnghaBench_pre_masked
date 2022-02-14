
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union t3_wr {int dummy; } t3_wr ;
struct t3_wq {unsigned long size_log2; unsigned long rq_size_log2; int qpid; int rq; int rq_addr; int sq; int queue; } ;
struct cxio_ucontext {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct cxio_rdev {TYPE_2__ rnic_info; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct cxio_rdev*,int ,unsigned long) ;
 int FUNC_1 (int *,unsigned long,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct t3_wq*,int ) ;
 int FUNC_4 (struct cxio_rdev*,int ,struct cxio_ucontext*) ;

int FUNC_5(struct cxio_rdev *VAR_1, struct t3_wq *VAR_2,
      struct cxio_ucontext *VAR_3)
{
 FUNC_1(&(VAR_1->rnic_info.pdev->dev),
     (1UL << (VAR_2->size_log2))
     * sizeof(union t3_wr), VAR_2->queue,
     FUNC_3(VAR_2, VAR_0));
 FUNC_2(VAR_2->sq);
 FUNC_0(VAR_1, VAR_2->rq_addr, (1UL << VAR_2->rq_size_log2));
 FUNC_2(VAR_2->rq);
 FUNC_4(VAR_1, VAR_2->qpid, VAR_3);
 return 0;
}
