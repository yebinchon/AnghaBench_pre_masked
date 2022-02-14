
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_rgrpd {int rd_gl; } ;
struct TYPE_2__ {scalar_t__ i_nlink; } ;
struct gfs2_inode {TYPE_1__ i_inode; int i_no_addr; int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct dentry {int d_name; struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct gfs2_rgrpd* FUNC_2 (struct gfs2_sbd*,int ,int) ;
 int FUNC_3 (struct gfs2_inode*,int) ;
 int FUNC_4 (struct gfs2_inode*,int *) ;
 int FUNC_5 (struct gfs2_holder*) ;
 int FUNC_6 (struct gfs2_holder*) ;
 int FUNC_7 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_8 (struct gfs2_holder*) ;
 int FUNC_9 (struct gfs2_sbd*) ;
 int FUNC_10 (struct gfs2_sbd*,scalar_t__,int ) ;
 int FUNC_11 (struct gfs2_sbd*) ;
 int FUNC_12 (struct gfs2_inode*,int *,struct gfs2_inode*) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_6, struct dentry *VAR_7)
{
 struct gfs2_inode *VAR_8 = FUNC_0(VAR_6);
 struct gfs2_sbd *VAR_9 = FUNC_1(VAR_6);
 struct gfs2_inode *VAR_10 = FUNC_0(VAR_7->d_inode);
 struct gfs2_holder VAR_11[3];
 struct gfs2_rgrpd *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_9(VAR_9);
 if (VAR_13)
  return VAR_13;

 VAR_13 = -VAR_1;

 FUNC_7(VAR_8->i_gl, VAR_2, 0, VAR_11);
 FUNC_7(VAR_10->i_gl, VAR_2, 0, VAR_11 + 1);

 VAR_12 = FUNC_2(VAR_9, VAR_10->i_no_addr, 1);
 if (!VAR_12)
  goto out_inodes;
 FUNC_7(VAR_12->rd_gl, VAR_2, 0, VAR_11 + 2);


 VAR_13 = FUNC_6(VAR_11);
 if (VAR_13)
  goto out_parent;

 VAR_13 = FUNC_6(VAR_11 + 1);
 if (VAR_13)
  goto out_child;

 VAR_13 = -VAR_0;
 if (VAR_10->i_inode.i_nlink == 0)
  goto out_rgrp;

 VAR_13 = FUNC_6(VAR_11 + 2);
 if (VAR_13)
  goto out_rgrp;

 VAR_13 = FUNC_12(VAR_8, &VAR_7->d_name, VAR_10);
 if (VAR_13)
  goto out_gunlock;

 VAR_13 = FUNC_10(VAR_9, 2*VAR_3 + VAR_4 + VAR_5, 0);
 if (VAR_13)
  goto out_gunlock;

 VAR_13 = FUNC_4(VAR_8, &VAR_7->d_name);
        if (VAR_13)
                goto out_end_trans;

 VAR_13 = FUNC_3(VAR_10, -1);

out_end_trans:
 FUNC_11(VAR_9);
out_gunlock:
 FUNC_5(VAR_11 + 2);
out_rgrp:
 FUNC_5(VAR_11 + 1);
out_child:
 FUNC_5(VAR_11);
out_parent:
 FUNC_8(VAR_11 + 2);
out_inodes:
 FUNC_8(VAR_11 + 1);
 FUNC_8(VAR_11);
 return VAR_13;
}
