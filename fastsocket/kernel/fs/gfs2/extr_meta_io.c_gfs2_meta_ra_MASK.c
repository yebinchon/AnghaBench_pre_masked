
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int sb_bsize_shift; } ;
struct gfs2_sbd {TYPE_1__ sd_sb; } ;
struct gfs2_glock {struct gfs2_sbd* gl_sbd; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 struct buffer_head* FUNC_4 (struct gfs2_glock*,int ,int ) ;
 int FUNC_5 (struct gfs2_sbd*,int ) ;
 int VAR_4 ;
 int FUNC_6 (int,int,struct buffer_head**) ;
 int FUNC_7 (struct buffer_head*) ;

struct buffer_head *FUNC_8(struct gfs2_glock *VAR_5, u64 VAR_6, u32 VAR_7)
{
 struct gfs2_sbd *VAR_8 = VAR_5->gl_sbd;
 struct buffer_head *VAR_9, *VAR_10;
 u32 VAR_11 = FUNC_5(VAR_8, VAR_4) >>
     VAR_8->sd_sb.sb_bsize_shift;

 FUNC_0(!VAR_7);

 if (VAR_11 < 1)
  VAR_11 = 1;
 if (VAR_7 > VAR_11)
  VAR_7 = VAR_11;

 VAR_9 = FUNC_4(VAR_5, VAR_6, VAR_1);

 if (FUNC_3(VAR_9))
  goto out;
 if (!FUNC_2(VAR_9))
  FUNC_6(VAR_3 | (1 << VAR_0), 1, &VAR_9);

 VAR_6++;
 VAR_7--;

 while (VAR_7) {
  VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_1);

  if (!FUNC_3(VAR_10) && !FUNC_2(VAR_10))
   FUNC_6(VAR_2, 1, &VAR_10);
  FUNC_1(VAR_10);
  VAR_6++;
  VAR_7--;
  if (!FUNC_2(VAR_9) && FUNC_3(VAR_9))
   goto out;
 }

 FUNC_7(VAR_9);
out:
 return VAR_9;
}
