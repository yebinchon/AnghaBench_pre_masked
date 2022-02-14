
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scm_request {TYPE_3__* aob; int error; struct scm_blk_dev* bdev; } ;
struct scm_blk_dev {int rq_lock; int lock; int state; TYPE_2__* scmdev; } ;
struct TYPE_4__ {int eqc; } ;
struct TYPE_6__ {TYPE_1__ response; } ;
struct TYPE_5__ {scalar_t__ address; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (char*,unsigned long) ;
 int FUNC_1 (struct scm_request*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct scm_request *VAR_2)
{
 struct scm_blk_dev *VAR_3 = VAR_2->bdev;
 unsigned long VAR_4;

 if (VAR_2->error != -VAR_0)
  goto restart;


 switch (VAR_2->aob->response.eqc) {
 case 128:
  FUNC_3(&VAR_3->lock, VAR_4);
  if (VAR_3->state != VAR_1)
   FUNC_0("%lu: Write access to the SCM increment is suspended\n",
    (unsigned long) VAR_3->scmdev->address);
  VAR_3->state = VAR_1;
  FUNC_4(&VAR_3->lock, VAR_4);
  goto requeue;
 default:
  break;
 }

restart:
 if (!FUNC_2(VAR_2->aob))
  return;

requeue:
 FUNC_3(&VAR_3->rq_lock, VAR_4);
 FUNC_1(VAR_2);
 FUNC_4(&VAR_3->rq_lock, VAR_4);
}
