
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_tune {unsigned int gt_quota_scale_num; unsigned int gt_quota_scale_den; int gt_spin; } ;
struct gfs2_sbd {struct gfs2_tune sd_tune; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,char*,unsigned int*,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_4(struct gfs2_sbd *VAR_3, const char *VAR_4,
     size_t VAR_5)
{
 struct gfs2_tune *VAR_6 = &VAR_3->sd_tune;
 unsigned int VAR_7, VAR_8;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 if (FUNC_3(VAR_4, "%u %u", &VAR_7, &VAR_8) != 2 || !VAR_8)
  return -VAR_2;

 FUNC_1(&VAR_6->gt_spin);
 VAR_6->gt_quota_scale_num = VAR_7;
 VAR_6->gt_quota_scale_den = VAR_8;
 FUNC_2(&VAR_6->gt_spin);
 return VAR_5;
}
