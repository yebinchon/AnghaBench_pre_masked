
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {TYPE_1__* sd_jdesc; } ;
struct gfs2_rgrpd {int rd_gl; } ;
struct gfs2_inode {int i_no_addr; int i_inode; } ;
struct gfs2_holder {int dummy; } ;
struct TYPE_2__ {int jd_blocks; } ;


 int VAR_0 ;
 struct gfs2_sbd* FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct gfs2_rgrpd* FUNC_1 (struct gfs2_sbd*,int ,int) ;
 scalar_t__ FUNC_2 (struct gfs2_inode*) ;
 int FUNC_3 (struct gfs2_inode*) ;
 int FUNC_4 (struct gfs2_inode*) ;
 int FUNC_5 (struct gfs2_rgrpd*,struct gfs2_inode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct gfs2_holder*) ;
 int FUNC_8 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_9 (struct gfs2_inode*,int ,int ) ;
 int FUNC_10 (struct gfs2_inode*) ;
 int FUNC_11 (struct gfs2_sbd*) ;
 int FUNC_12 (struct gfs2_sbd*,scalar_t__,int ) ;
 int FUNC_13 (struct gfs2_sbd*) ;

__attribute__((used)) static int FUNC_14(struct gfs2_inode *VAR_6)
{
 struct gfs2_sbd *VAR_7 = FUNC_0(&VAR_6->i_inode);
 struct gfs2_rgrpd *VAR_8;
 struct gfs2_holder VAR_9;
 int VAR_10;

 if (FUNC_6(&VAR_6->i_inode) != 1) {
  if (FUNC_2(VAR_6))
   FUNC_3(VAR_6);
  return -VAR_0;
 }

 VAR_10 = FUNC_11(VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_9(VAR_6, VAR_2, VAR_2);
 if (VAR_10)
  return VAR_10;

 VAR_8 = FUNC_1(VAR_7, VAR_6->i_no_addr, 1);
 if (!VAR_8) {
  FUNC_2(VAR_6);
  VAR_10 = -VAR_0;
  goto out_qs;
 }

 VAR_10 = FUNC_8(VAR_8->rd_gl, VAR_1, 0, &VAR_9);
 if (VAR_10)
  goto out_qs;

 VAR_10 = FUNC_12(VAR_7, VAR_4 + VAR_5 + VAR_3,
     VAR_7->sd_jdesc->jd_blocks);
 if (VAR_10)
  goto out_rg_gunlock;

 FUNC_5(VAR_8, VAR_6);

 FUNC_4(VAR_6);

 FUNC_13(VAR_7);

out_rg_gunlock:
 FUNC_7(&VAR_9);
out_qs:
 FUNC_10(VAR_6);
 return VAR_10;
}
