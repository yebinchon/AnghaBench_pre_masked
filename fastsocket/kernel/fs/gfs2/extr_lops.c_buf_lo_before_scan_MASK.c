
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {scalar_t__ sd_replayed_blocks; scalar_t__ sd_found_blocks; } ;
struct gfs2_log_header_host {int dummy; } ;
struct gfs2_jdesc {int jd_inode; } ;


 struct gfs2_sbd* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct gfs2_jdesc *VAR_0,
          struct gfs2_log_header_host *VAR_1, int VAR_2)
{
 struct gfs2_sbd *VAR_3 = FUNC_0(VAR_0->jd_inode);

 if (VAR_2 != 0)
  return;

 VAR_3->sd_found_blocks = 0;
 VAR_3->sd_replayed_blocks = 0;
}
