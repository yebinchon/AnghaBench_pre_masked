
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_kcopyd_client {int job_pool; int io_client; int kcopyd_wq; int pages_jobs; int io_jobs; int complete_jobs; int nr_jobs; int destroyq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dm_kcopyd_client*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct dm_kcopyd_client*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;

void FUNC_9(struct dm_kcopyd_client *VAR_0)
{

 FUNC_8(VAR_0->destroyq, !FUNC_1(&VAR_0->nr_jobs));

 FUNC_0(!FUNC_6(&VAR_0->complete_jobs));
 FUNC_0(!FUNC_6(&VAR_0->io_jobs));
 FUNC_0(!FUNC_6(&VAR_0->pages_jobs));
 FUNC_3(VAR_0->kcopyd_wq);
 FUNC_4(VAR_0->io_client);
 FUNC_2(VAR_0);
 FUNC_7(VAR_0->job_pool);
 FUNC_5(VAR_0);
}
