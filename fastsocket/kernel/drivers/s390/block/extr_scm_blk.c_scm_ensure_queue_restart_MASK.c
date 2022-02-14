
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_blk_dev {int rq; int queued_reqs; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct scm_blk_dev *VAR_0)
{
 if (FUNC_0(&VAR_0->queued_reqs)) {

  return;
 }

 FUNC_1(VAR_0->rq);
}
