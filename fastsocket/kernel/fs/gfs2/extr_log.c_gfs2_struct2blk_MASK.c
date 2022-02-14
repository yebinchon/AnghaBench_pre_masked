
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sb_bsize; } ;
struct gfs2_sbd {TYPE_1__ sd_sb; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_log_descriptor {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;

unsigned int FUNC_1(struct gfs2_sbd *VAR_0, unsigned int VAR_1,
        unsigned int VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4, VAR_5;

 VAR_3 = 1;
 VAR_4 = (VAR_0->sd_sb.sb_bsize - sizeof(struct gfs2_log_descriptor)) / VAR_2;

 if (VAR_1 > VAR_4) {
  VAR_5 = (VAR_0->sd_sb.sb_bsize -
     sizeof(struct gfs2_meta_header)) / VAR_2;
  VAR_3 += FUNC_0(VAR_1 - VAR_4, VAR_5);
 }

 return VAR_3;
}
