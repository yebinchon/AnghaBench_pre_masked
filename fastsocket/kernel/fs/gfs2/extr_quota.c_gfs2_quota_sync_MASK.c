
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct gfs2_sbd* s_fs_info; } ;
struct gfs2_sbd {scalar_t__ sd_quota_sync_gen; } ;
struct gfs2_quota_data {scalar_t__ qd_sync_gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,struct gfs2_quota_data**) ;
 unsigned int FUNC_1 (struct gfs2_sbd*,int ) ;
 int VAR_2 ;
 struct gfs2_quota_data** FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (struct gfs2_quota_data**) ;
 int FUNC_4 (struct gfs2_sbd*,struct gfs2_quota_data**) ;
 int FUNC_5 (struct gfs2_quota_data*) ;

int FUNC_6(struct super_block *VAR_3, int VAR_4)
{
 struct gfs2_sbd *VAR_5 = VAR_3->s_fs_info;
 struct gfs2_quota_data **VAR_6;
 unsigned int VAR_7 = FUNC_1(VAR_5, VAR_2);
 unsigned int VAR_8;
 unsigned int VAR_9;
 int VAR_10 = 0;

 VAR_5->sd_quota_sync_gen++;

 VAR_6 = FUNC_2(VAR_7, sizeof(struct gfs2_quota_data *), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 do {
  VAR_8 = 0;

  for (;;) {
   VAR_10 = FUNC_4(VAR_5, VAR_6 + VAR_8);
   if (VAR_10 || !VAR_6[VAR_8])
    break;
   if (++VAR_8 == VAR_7)
    break;
  }

  if (VAR_8) {
   if (!VAR_10)
    VAR_10 = FUNC_0(VAR_8, VAR_6);
   if (!VAR_10)
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
     VAR_6[VAR_9]->qd_sync_gen =
      VAR_5->sd_quota_sync_gen;

   for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
    FUNC_5(VAR_6[VAR_9]);
  }
 } while (!VAR_10 && VAR_8 == VAR_7);

 FUNC_3(VAR_6);

 return VAR_10;
}
