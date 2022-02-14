
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocrdma_queue_info {scalar_t__ created; } ;
struct TYPE_4__ {struct ocrdma_queue_info cq; struct ocrdma_queue_info sq; } ;
struct TYPE_3__ {int lock; } ;
struct ocrdma_dev {TYPE_2__ mq; TYPE_1__ mqe_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ocrdma_dev*,struct ocrdma_queue_info*) ;
 int FUNC_3 (struct ocrdma_dev*,struct ocrdma_queue_info*,int ) ;

__attribute__((used)) static void FUNC_4(struct ocrdma_dev *VAR_2)
{
 struct ocrdma_queue_info *VAR_3, *VAR_4;


 FUNC_0(&VAR_2->mqe_ctx.lock);
 VAR_3 = &VAR_2->mq.sq;
 if (VAR_3->created) {
  FUNC_3(VAR_2, VAR_3, VAR_1);
  FUNC_2(VAR_2, VAR_3);
 }
 FUNC_1(&VAR_2->mqe_ctx.lock);

 VAR_4 = &VAR_2->mq.cq;
 if (VAR_4->created) {
  FUNC_3(VAR_2, VAR_4, VAR_0);
  FUNC_2(VAR_2, VAR_4);
 }
}
