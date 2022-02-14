
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct qstr {scalar_t__ len; } ;
struct inode {unsigned int i_mode; unsigned int i_size; TYPE_4__* i_sb; int i_ctime; int i_mtime; int i_atime; int i_rdev; } ;
struct gfs2_sbd {TYPE_1__* sd_root_dir; int sd_vfs; } ;
struct gfs2_holder {TYPE_2__* gh_gl; } ;
struct gfs2_inode {int i_diskflags; int i_flags; struct gfs2_glock* i_gl; struct gfs2_holder i_iopen_gh; int i_no_addr; scalar_t__ i_entries; scalar_t__ i_depth; scalar_t__ i_height; scalar_t__ i_eattr; int i_goal; int i_inode; } ;
struct gfs2_glock {struct gfs2_inode* gl_object; } ;
struct dentry {struct qstr d_name; } ;
struct buffer_head {int dummy; } ;
typedef int dev_t ;
struct TYPE_8__ {TYPE_3__* s_op; } ;
struct TYPE_7__ {int (* destroy_inode ) (struct inode*) ;} ;
struct TYPE_6__ {struct gfs2_inode* gl_object; } ;
struct TYPE_5__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct inode*) ;
 int VAR_14 ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int FUNC_5 (struct gfs2_inode*,int ) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct gfs2_inode*,struct qstr const*,unsigned int) ;
 int FUNC_8 (struct dentry*,struct inode*) ;
 int FUNC_9 (struct gfs2_inode*,struct inode*) ;
 int FUNC_10 (struct inode*,struct qstr const*) ;
 int FUNC_11 (struct gfs2_holder*) ;
 int FUNC_12 (int,struct gfs2_holder*) ;
 int FUNC_13 (struct gfs2_sbd*,int ,int *,int ,struct gfs2_glock**) ;
 int FUNC_14 (struct gfs2_glock*,int ,int ,struct gfs2_holder*) ;
 int FUNC_15 (struct gfs2_glock*) ;
 int VAR_15 ;
 int FUNC_16 (struct gfs2_inode*) ;
 int FUNC_17 (struct gfs2_inode*) ;
 int VAR_16 ;
 struct inode* FUNC_18 (struct inode*,struct qstr*,int ) ;
 int FUNC_19 (struct gfs2_inode*) ;
 int FUNC_20 (struct gfs2_sbd*) ;
 int FUNC_21 (struct gfs2_inode*) ;
 int FUNC_22 (struct gfs2_inode*) ;
 int FUNC_23 (struct gfs2_inode*,struct gfs2_inode*) ;
 int FUNC_24 (struct inode*,int) ;
 int FUNC_25 (struct inode*) ;
 int FUNC_26 (struct gfs2_sbd*,int ,int ) ;
 int FUNC_27 (struct gfs2_sbd*) ;
 int FUNC_28 (struct gfs2_inode*,struct gfs2_inode*,char const*,struct buffer_head**) ;
 int FUNC_29 (struct inode*) ;
 int FUNC_30 (struct inode*) ;
 int FUNC_31 (struct gfs2_inode*,struct qstr const*,struct gfs2_inode*,int) ;
 int FUNC_32 (struct inode*) ;
 int FUNC_33 (struct gfs2_inode*,struct inode*) ;
 struct inode* FUNC_34 (int ) ;
 int FUNC_35 (int ,int *) ;
 int FUNC_36 (struct inode*) ;

int FUNC_37(struct inode *VAR_17, struct dentry *VAR_18,
        unsigned int VAR_19, dev_t VAR_20, const char *VAR_21,
        unsigned int VAR_22, int VAR_23)
{
 const struct qstr *VAR_24 = &VAR_18->d_name;
 struct gfs2_holder VAR_25[2];
 struct inode *VAR_26 = ((void*)0);
 struct gfs2_inode *VAR_27 = FUNC_0(VAR_17), *VAR_28;
 struct gfs2_sbd *VAR_29 = FUNC_1(&VAR_27->i_inode);
 struct gfs2_glock *VAR_30;
 int VAR_31;
 struct buffer_head *VAR_32 = ((void*)0);
 u32 VAR_33 = 0;
 int VAR_34;

 if (!VAR_24->len || VAR_24->len > VAR_7)
  return -VAR_3;

 VAR_31 = FUNC_21(VAR_27);
 if (VAR_31)
  return VAR_31;

 VAR_31 = FUNC_20(VAR_29);
 if (VAR_31)
  return VAR_31;

 VAR_31 = FUNC_14(VAR_27->i_gl, VAR_12, 0, VAR_25);
 if (VAR_31)
  goto fail;

 VAR_31 = FUNC_7(VAR_27, VAR_24, VAR_19);
 if ((VAR_31 == -VAR_2) && FUNC_4(VAR_19) && !VAR_23) {
  VAR_26 = FUNC_18(VAR_17, &VAR_18->d_name, 0);
  if (VAR_26)
   FUNC_11(VAR_25);
  if (!FUNC_2(VAR_26))
   FUNC_8(VAR_18, VAR_26);
  return FUNC_2(VAR_26) ? FUNC_3(VAR_26) : 0;
 }
 if (VAR_31)
  goto fail_gunlock;

 VAR_34 = VAR_31 = FUNC_10(VAR_17, VAR_24);
 if (VAR_31 < 0)
  goto fail_gunlock;

 VAR_26 = FUNC_34(VAR_29->sd_vfs);
 if (!VAR_26) {
  FUNC_11(VAR_25);
  return -VAR_4;
 }
 VAR_28 = FUNC_0(VAR_26);
 VAR_31 = FUNC_21(VAR_28);
 if (VAR_31)
  goto fail_free_inode;

 FUNC_35(VAR_9, &VAR_28->i_flags);
 VAR_26->i_mode = VAR_19;
 VAR_26->i_rdev = VAR_20;
 VAR_26->i_size = VAR_22;
 VAR_26->i_atime = VAR_26->i_mtime = VAR_26->i_ctime = VAR_1;
 FUNC_24(VAR_26, 1);
 FUNC_33(VAR_27, VAR_26);
 VAR_28->i_goal = VAR_27->i_goal;
 VAR_28->i_diskflags = 0;
 VAR_28->i_eattr = 0;
 VAR_28->i_height = 0;
 VAR_28->i_depth = 0;
 VAR_28->i_entries = 0;

 if ((FUNC_0(VAR_29->sd_root_dir->d_inode) == VAR_27) ||
     (VAR_27->i_diskflags & VAR_6))
  VAR_33 |= VAR_5;

 VAR_31 = FUNC_5(VAR_28, VAR_33);
 if (VAR_31)
  goto fail_free_inode;

 VAR_31 = FUNC_13(VAR_29, VAR_28->i_no_addr, &VAR_15, VAR_0, &VAR_28->i_gl);
 if (VAR_31)
  goto fail_free_inode;

 VAR_28->i_gl->gl_object = VAR_28;
 VAR_31 = FUNC_14(VAR_28->i_gl, VAR_12, VAR_11, VAR_25 + 1);
 if (VAR_31)
  goto fail_free_inode;

 VAR_31 = FUNC_26(VAR_29, VAR_14, 0);
 if (VAR_31)
  goto fail_gunlock2;

 FUNC_28(VAR_27, VAR_28, VAR_21, &VAR_32);
 FUNC_27(VAR_29);

 VAR_31 = FUNC_13(VAR_29, VAR_28->i_no_addr, &VAR_16, VAR_0, &VAR_30);
 if (VAR_31)
  goto fail_gunlock2;

 VAR_31 = FUNC_14(VAR_30, VAR_13, VAR_10, &VAR_28->i_iopen_gh);
 if (VAR_31)
  goto fail_gunlock2;

 VAR_28->i_iopen_gh.gh_gl->gl_object = VAR_28;
 FUNC_15(VAR_30);
 FUNC_25(VAR_26);
 FUNC_29(VAR_26);

 VAR_31 = FUNC_16(VAR_28);
 if (VAR_31)
  goto fail_gunlock3;

 VAR_31 = FUNC_9(VAR_27, VAR_26);
 if (VAR_31)
  goto fail_gunlock3;

 VAR_31 = FUNC_23(VAR_27, VAR_28);
 if (VAR_31)
  goto fail_gunlock3;

 VAR_31 = FUNC_31(VAR_27, VAR_24, VAR_28, VAR_34);
 if (VAR_31)
  goto fail_gunlock3;

 if (VAR_32)
  FUNC_6(VAR_32);

 FUNC_27(VAR_29);
 FUNC_17(VAR_27);
 FUNC_19(VAR_27);
 FUNC_32(VAR_26);
 FUNC_12(2, VAR_25);
 FUNC_8(VAR_18, VAR_26);
 return 0;

fail_gunlock3:
 FUNC_11(VAR_25 + 1);
 if (VAR_28->i_gl)
  FUNC_15(VAR_28->i_gl);
 goto fail_gunlock;

fail_gunlock2:
 FUNC_11(VAR_25 + 1);
fail_free_inode:
 if (VAR_28->i_gl)
  FUNC_15(VAR_28->i_gl);
 FUNC_22(VAR_28);
 VAR_26->i_sb->s_op->destroy_inode(VAR_26);
 VAR_26 = ((void*)0);
fail_gunlock:
 FUNC_11(VAR_25);
 if (VAR_26 && !FUNC_2(VAR_26)) {
  FUNC_35(VAR_8, &FUNC_0(VAR_26)->i_flags);
  FUNC_30(VAR_26);
 }
fail:
 if (VAR_32)
  FUNC_6(VAR_32);
 return VAR_31;
}
