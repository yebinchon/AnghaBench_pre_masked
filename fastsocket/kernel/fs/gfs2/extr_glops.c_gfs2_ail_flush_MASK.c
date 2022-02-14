
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int sb_bsize; } ;
struct gfs2_sbd {TYPE_1__ sd_sb; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_log_descriptor {int dummy; } ;
struct gfs2_glock {int gl_ail_count; struct gfs2_sbd* gl_sbd; } ;


 int FUNC_0 (struct gfs2_glock*,int,unsigned int) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (struct gfs2_sbd*,int *) ;
 int FUNC_3 (struct gfs2_sbd*,int ,unsigned int) ;
 int FUNC_4 (struct gfs2_sbd*) ;

void FUNC_5(struct gfs2_glock *VAR_0, bool VAR_1)
{
 struct gfs2_sbd *VAR_2 = VAR_0->gl_sbd;
 unsigned int VAR_3 = FUNC_1(&VAR_0->gl_ail_count);
 unsigned int VAR_4 = (VAR_2->sd_sb.sb_bsize - sizeof(struct gfs2_log_descriptor)) / sizeof(u64);
 int VAR_5;

 if (!VAR_3)
  return;

 while (VAR_3 > VAR_4)
  VAR_4 += (VAR_2->sd_sb.sb_bsize - sizeof(struct gfs2_meta_header)) / sizeof(u64);

 VAR_5 = FUNC_3(VAR_2, 0, VAR_4);
 if (VAR_5)
  return;
 FUNC_0(VAR_0, VAR_1, VAR_4);
 FUNC_4(VAR_2);
 FUNC_2(VAR_2, ((void*)0));
}
