
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int sb_bsize_shift; } ;
struct gfs2_sbd {TYPE_1__ sd_sb; } ;
struct gfs2_jdesc {int jd_blocks; int jd_inode; } ;
struct gfs2_inode {int dummy; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 struct gfs2_sbd* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct gfs2_inode*) ;
 int FUNC_4 (struct gfs2_inode*,int ,int,int*) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct gfs2_jdesc *VAR_1)
{
 struct gfs2_inode *VAR_2 = FUNC_0(VAR_1->jd_inode);
 struct gfs2_sbd *VAR_3 = FUNC_1(VAR_1->jd_inode);
 u64 VAR_4 = FUNC_5(VAR_1->jd_inode);
 int VAR_5;
 int VAR_6;

 if (FUNC_2(VAR_1->jd_inode, 8 << 20, 1 << 30))
  return -VAR_0;

 VAR_1->jd_blocks = VAR_4 >> VAR_3->sd_sb.sb_bsize_shift;

 VAR_6 = FUNC_4(VAR_2, 0, VAR_4, &VAR_5);
 if (!VAR_6 && VAR_5) {
  FUNC_3(VAR_2);
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
