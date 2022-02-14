
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_tune {int gt_quota_quantum; int gt_statfs_quantum; } ;
struct gfs2_sbd {int sd_quota_wait; scalar_t__ sd_statfs_force_sync; int sd_trunc_lock; int sd_trunc_list; int sd_vfs; struct gfs2_tune sd_tune; } ;


 int FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 unsigned long FUNC_5 (struct gfs2_sbd*,int ) ;
 int VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 unsigned long FUNC_8 (unsigned long,unsigned long) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (struct gfs2_sbd*,char*,int (*) (int ,int ),unsigned long,unsigned long*,int *) ;
 int FUNC_11 (struct gfs2_sbd*) ;
 int FUNC_12 (struct gfs2_sbd*,char*,int) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (unsigned long) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int VAR_4 ;

int FUNC_17(void *VAR_5)
{
 struct gfs2_sbd *VAR_6 = VAR_5;
 struct gfs2_tune *VAR_7 = &VAR_6->sd_tune;
 unsigned long VAR_8 = 0;
 unsigned long VAR_9 = 0;
 unsigned long VAR_10 = 0;
 FUNC_0(VAR_4);
 int VAR_11;

 while (!FUNC_6()) {


  if (VAR_6->sd_statfs_force_sync) {
   int VAR_12 = FUNC_4(VAR_6->sd_vfs, 0);
   FUNC_12(VAR_6, "statfs", VAR_12);
   VAR_8 = FUNC_5(VAR_6, VAR_3) * VAR_0;
  }
  else
   FUNC_10(VAR_6, "statfs", FUNC_4, VAR_10,
           &VAR_8,
        &VAR_7->gt_statfs_quantum);


  FUNC_10(VAR_6, "sync", FUNC_3, VAR_10,
       &VAR_9, &VAR_7->gt_quota_quantum);


  FUNC_11(VAR_6);

  if (FUNC_2(VAR_2))
   FUNC_13();
  VAR_10 = FUNC_8(VAR_9, VAR_8);

  FUNC_9(&VAR_6->sd_quota_wait, &VAR_4, VAR_1);
  FUNC_15(&VAR_6->sd_trunc_lock);
  VAR_11 = FUNC_7(&VAR_6->sd_trunc_list);
  FUNC_16(&VAR_6->sd_trunc_lock);
  if (VAR_11 && !VAR_6->sd_statfs_force_sync)
   VAR_10 -= FUNC_14(VAR_10);
  else
   VAR_10 = 0;
  FUNC_1(&VAR_6->sd_quota_wait, &VAR_4);
 }

 return 0;
}
