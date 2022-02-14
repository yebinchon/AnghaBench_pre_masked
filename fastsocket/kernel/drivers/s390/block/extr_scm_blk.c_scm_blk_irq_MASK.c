
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_request {int error; int list; struct scm_blk_dev* bdev; } ;
struct scm_device {int dummy; } ;
struct scm_blk_dev {int tasklet; int lock; int finished_requests; } ;


 int FUNC_0 (struct scm_request*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct scm_device *VAR_0, void *VAR_1, int VAR_2)
{
 struct scm_request *VAR_3 = VAR_1;
 struct scm_blk_dev *VAR_4 = VAR_3->bdev;

 VAR_3->error = VAR_2;
 if (VAR_2)
  FUNC_0(VAR_3);

 FUNC_2(&VAR_4->lock);
 FUNC_1(&VAR_3->list, &VAR_4->finished_requests);
 FUNC_3(&VAR_4->lock);
 FUNC_4(&VAR_4->tasklet);
}
