
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_rgrpd {int rd_gl; } ;
struct TYPE_2__ {scalar_t__ i_nlink; } ;
struct gfs2_inode {int i_entries; TYPE_1__ i_inode; int i_no_addr; int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct dentry {int d_name; struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct gfs2_rgrpd* FUNC_2 (struct gfs2_sbd*,int ,int) ;
 scalar_t__ FUNC_3 (struct gfs2_inode*) ;
 int FUNC_4 (struct gfs2_inode*) ;
 int FUNC_5 (struct gfs2_holder*) ;
 int FUNC_6 (struct gfs2_holder*) ;
 int FUNC_7 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_8 (struct gfs2_holder*) ;
 int FUNC_9 (struct gfs2_sbd*) ;
 int FUNC_10 (struct gfs2_inode*,int *,struct gfs2_inode*) ;
 int FUNC_11 (struct gfs2_sbd*,scalar_t__,int ) ;
 int FUNC_12 (struct gfs2_sbd*) ;
 int FUNC_13 (struct gfs2_inode*,int *,struct gfs2_inode*) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_7, struct dentry *VAR_8)
{
 struct gfs2_inode *VAR_9 = FUNC_0(VAR_7);
 struct gfs2_sbd *VAR_10 = FUNC_1(VAR_7);
 struct gfs2_inode *VAR_11 = FUNC_0(VAR_8->d_inode);
 struct gfs2_holder VAR_12[3];
 struct gfs2_rgrpd *VAR_13;
 int VAR_14;

 VAR_14 = FUNC_9(VAR_10);
 if (VAR_14)
  return VAR_14;

 FUNC_7(VAR_9->i_gl, VAR_3, 0, VAR_12);
 FUNC_7(VAR_11->i_gl, VAR_3, 0, VAR_12 + 1);

 VAR_13 = FUNC_2(VAR_10, VAR_11->i_no_addr, 1);
 FUNC_7(VAR_13->rd_gl, VAR_3, 0, VAR_12 + 2);

 VAR_14 = FUNC_6(VAR_12);
 if (VAR_14)
  goto out_parent;

 VAR_14 = FUNC_6(VAR_12 + 1);
 if (VAR_14)
  goto out_child;

 VAR_14 = -VAR_1;
 if (VAR_11->i_inode.i_nlink == 0)
  goto out_rgrp;

 VAR_14 = FUNC_6(VAR_12 + 2);
 if (VAR_14)
  goto out_rgrp;

 VAR_14 = FUNC_13(VAR_9, &VAR_8->d_name, VAR_11);
 if (VAR_14)
  goto out_gunlock;

 if (VAR_11->i_entries < 2) {
  if (FUNC_3(VAR_11))
   FUNC_4(VAR_11);
  VAR_14 = -VAR_0;
  goto out_gunlock;
 }
 if (VAR_11->i_entries > 2) {
  VAR_14 = -VAR_2;
  goto out_gunlock;
 }
 VAR_14 = FUNC_11(VAR_10, 2 * VAR_4 + 3 * VAR_5 + VAR_6, 0);
 if (VAR_14)
  goto out_gunlock;

 VAR_14 = FUNC_10(VAR_9, &VAR_8->d_name, VAR_11);

 FUNC_12(VAR_10);

out_gunlock:
 FUNC_5(VAR_12 + 2);
out_rgrp:
 FUNC_8(VAR_12 + 2);
 FUNC_5(VAR_12 + 1);
out_child:
 FUNC_8(VAR_12 + 1);
 FUNC_5(VAR_12);
out_parent:
 FUNC_8(VAR_12);
 return VAR_14;
}
