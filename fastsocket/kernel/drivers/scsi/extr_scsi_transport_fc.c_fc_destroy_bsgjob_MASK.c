
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct fc_bsg_job* sg_list; } ;
struct TYPE_3__ {struct fc_bsg_job* sg_list; } ;
struct fc_bsg_job {TYPE_2__ reply_payload; TYPE_1__ request_payload; int dev; int job_lock; scalar_t__ ref_cnt; } ;


 int FUNC_0 (struct fc_bsg_job*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct fc_bsg_job *VAR_0)
{
 unsigned long VAR_1;

 FUNC_2(&VAR_0->job_lock, VAR_1);
 if (VAR_0->ref_cnt) {
  FUNC_3(&VAR_0->job_lock, VAR_1);
  return;
 }
 FUNC_3(&VAR_0->job_lock, VAR_1);

 FUNC_1(VAR_0->dev);

 FUNC_0(VAR_0->request_payload.sg_list);
 FUNC_0(VAR_0->reply_payload.sg_list);
 FUNC_0(VAR_0);
}
