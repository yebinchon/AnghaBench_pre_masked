
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int errors; struct fc_bsg_job* special; } ;
struct fc_bsg_job {int job_lock; int ref_cnt; int state_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*,int ) ;
 int FUNC_1 (struct fc_bsg_job*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct request *VAR_1)
{
 struct fc_bsg_job *VAR_2 = VAR_1->special;
 unsigned long VAR_3;

 FUNC_2(&VAR_2->job_lock, VAR_3);
 VAR_2->state_flags |= VAR_0;
 VAR_2->ref_cnt--;
 FUNC_3(&VAR_2->job_lock, VAR_3);

 FUNC_0(VAR_1, VAR_1->errors);
 FUNC_1(VAR_2);
}
