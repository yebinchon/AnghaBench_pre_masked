
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_freeze_lock; int sd_freeze_count; int sd_freeze_gh; } ;


 int FUNC_0 (struct gfs2_sbd*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct gfs2_sbd *VAR_0)
{
 int VAR_1 = 0;

 FUNC_1(&VAR_0->sd_freeze_lock);

 if (!VAR_0->sd_freeze_count++) {
  VAR_1 = FUNC_0(VAR_0, &VAR_0->sd_freeze_gh);
  if (VAR_1)
   VAR_0->sd_freeze_count--;
 }

 FUNC_2(&VAR_0->sd_freeze_lock);

 return VAR_1;
}
