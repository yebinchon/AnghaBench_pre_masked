
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_kcopyd_throttle {int dummy; } ;
struct dm_kcopyd_client {int job_pool; int kcopyd_wq; int nr_jobs; int destroyq; int io_client; scalar_t__ nr_free_pages; scalar_t__ nr_reserved_pages; int * pages; int kcopyd_work; int unplug; struct dm_kcopyd_throttle* throttle; int pages_jobs; int io_jobs; int complete_jobs; int job_lock; } ;


 int VAR_0 ;
 struct dm_kcopyd_client* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct dm_kcopyd_client*) ;
 int FUNC_7 (struct dm_kcopyd_client*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int VAR_5 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct dm_kcopyd_client*) ;
 struct dm_kcopyd_client* FUNC_13 (int,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (int *) ;

struct dm_kcopyd_client *FUNC_18(struct dm_kcopyd_throttle *VAR_6)
{
 int VAR_7 = -VAR_0;
 struct dm_kcopyd_client *VAR_8;

 VAR_8 = FUNC_13(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 FUNC_17(&VAR_8->job_lock);
 FUNC_1(&VAR_8->complete_jobs);
 FUNC_1(&VAR_8->io_jobs);
 FUNC_1(&VAR_8->pages_jobs);
 VAR_8->throttle = VAR_6;

 FUNC_16(VAR_8->unplug, 0, sizeof(VAR_8->unplug));

 VAR_8->job_pool = FUNC_14(VAR_2, VAR_4);
 if (!VAR_8->job_pool)
  goto bad_slab;

 FUNC_2(&VAR_8->kcopyd_work, VAR_5);
 VAR_8->kcopyd_wq = FUNC_8("kcopyd");
 if (!VAR_8->kcopyd_wq)
  goto bad_workqueue;

 VAR_8->pages = ((void*)0);
 VAR_8->nr_reserved_pages = VAR_8->nr_free_pages = 0;
 VAR_7 = FUNC_7(VAR_8, VAR_3);
 if (VAR_7)
  goto bad_client_pages;

 VAR_8->io_client = FUNC_10();
 if (FUNC_3(VAR_8->io_client)) {
  VAR_7 = FUNC_4(VAR_8->io_client);
  goto bad_io_client;
 }

 FUNC_11(&VAR_8->destroyq);
 FUNC_5(&VAR_8->nr_jobs, 0);

 return VAR_8;

bad_io_client:
 FUNC_6(VAR_8);
bad_client_pages:
 FUNC_9(VAR_8->kcopyd_wq);
bad_workqueue:
 FUNC_15(VAR_8->job_pool);
bad_slab:
 FUNC_12(VAR_8);

 return FUNC_0(VAR_7);
}
