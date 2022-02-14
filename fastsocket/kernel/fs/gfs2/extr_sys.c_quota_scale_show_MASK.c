
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gt_quota_scale_num; int gt_quota_scale_den; } ;
struct gfs2_sbd {TYPE_1__ sd_tune; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct gfs2_sbd *VAR_1, char *VAR_2)
{
 return FUNC_0(VAR_2, VAR_0, "%u %u\n",
   VAR_1->sd_tune.gt_quota_scale_num,
   VAR_1->sd_tune.gt_quota_scale_den);
}
