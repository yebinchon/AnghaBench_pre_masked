
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_request {int request; struct scm_blk_dev* bdev; } ;
struct scm_blk_dev {int queued_reqs; int rq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct scm_blk_dev*) ;
 int FUNC_3 (struct scm_request*) ;
 int FUNC_4 (struct scm_request*) ;

void FUNC_5(struct scm_request *VAR_0)
{
 struct scm_blk_dev *VAR_1 = VAR_0->bdev;

 FUNC_3(VAR_0);
 FUNC_1(VAR_1->rq, VAR_0->request);
 FUNC_0(&VAR_1->queued_reqs);
 FUNC_4(VAR_0);
 FUNC_2(VAR_1);
}
