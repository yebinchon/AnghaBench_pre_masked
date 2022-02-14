
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct timespec {int tv_nsec; int tv_sec; } ;
struct super_block {int s_flags; struct gfs2_sbd* s_fs_info; } ;
struct inode {int i_data; int i_atime; int i_mode; struct super_block* i_sb; } ;
struct gfs2_sbd {TYPE_1__* sd_jdesc; } ;
struct gfs2_holder {int gh_flags; int gh_iflags; } ;
struct gfs2_inode {int i_diskflags; struct gfs2_holder i_iopen_gh; int i_res; TYPE_2__* i_gl; scalar_t__ i_eattr; int i_flags; int i_no_addr; } ;
struct gfs2_dinode {int di_atime_nsec; int di_atime; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct address_space {int dummy; } ;
struct TYPE_10__ {int flags; } ;
struct TYPE_9__ {int gl_flags; } ;
struct TYPE_8__ {int jd_blocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct inode*) ;
 TYPE_7__* VAR_15 ;
 int FUNC_6 (struct address_space*) ;
 int FUNC_7 (struct address_space*) ;
 int FUNC_8 (struct gfs2_sbd*,char*,int) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (struct gfs2_sbd*,int ,int ) ;
 int FUNC_11 (struct gfs2_inode*) ;
 int FUNC_12 (struct gfs2_inode*,scalar_t__) ;
 int FUNC_13 (struct gfs2_inode*) ;
 int FUNC_14 (struct gfs2_inode*) ;
 int FUNC_15 (struct gfs2_inode*) ;
 struct address_space* FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (struct gfs2_holder*) ;
 int FUNC_18 (struct gfs2_holder*) ;
 int FUNC_19 (struct gfs2_holder*) ;
 int FUNC_20 (struct gfs2_holder*) ;
 int FUNC_21 (TYPE_2__*,int ,int ,struct gfs2_holder*) ;
 int FUNC_22 (int ,int,struct gfs2_holder*) ;
 int FUNC_23 (struct gfs2_holder*) ;
 int FUNC_24 (struct gfs2_inode*) ;
 int FUNC_25 (struct gfs2_inode*) ;
 int FUNC_26 (struct gfs2_sbd*,TYPE_2__*) ;
 int FUNC_27 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_28 (struct gfs2_inode*) ;
 scalar_t__ FUNC_29 (int ) ;
 int FUNC_30 (struct gfs2_inode*) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (TYPE_2__*,struct buffer_head*) ;
 int FUNC_33 (struct gfs2_sbd*,int ,int ) ;
 int FUNC_34 (struct gfs2_sbd*) ;
 scalar_t__ FUNC_35 (int ,int *) ;
 scalar_t__ FUNC_36 (int *,struct timespec*) ;
 int FUNC_37 (int *,int ) ;
 scalar_t__ FUNC_38 (int) ;
 int FUNC_39 (struct inode*,int) ;

__attribute__((used)) static void FUNC_40(struct inode *VAR_16)
{
 struct super_block *VAR_17 = VAR_16->i_sb;
 struct gfs2_sbd *VAR_18 = VAR_17->s_fs_info;
 struct gfs2_inode *VAR_19 = FUNC_0(VAR_16);
 struct gfs2_holder VAR_20;
 int VAR_21;

 if (VAR_17->s_flags & VAR_12)
  goto out;


 VAR_21 = FUNC_21(VAR_19->i_gl, VAR_11, VAR_8, &VAR_20);
 if (FUNC_38(VAR_21)) {
  VAR_19->i_iopen_gh.gh_flags |= VAR_7;
  FUNC_18(&VAR_19->i_iopen_gh);
  goto out;
 }

 if (!FUNC_35(VAR_3, &VAR_19->i_flags)) {
  VAR_21 = FUNC_10(VAR_18, VAR_19->i_no_addr, VAR_1);
  if (VAR_21)
   goto out_truncate;
 }

 if (FUNC_35(VAR_4, &VAR_19->i_flags)) {
  VAR_21 = FUNC_24(VAR_19);
  if (VAR_21)
   goto out_truncate;
 }

 VAR_19->i_iopen_gh.gh_flags |= VAR_7;
 FUNC_19(&VAR_19->i_iopen_gh);
 FUNC_22(VAR_11, VAR_10 | VAR_7, &VAR_19->i_iopen_gh);
 VAR_21 = FUNC_20(&VAR_19->i_iopen_gh);
 if (VAR_21)
  goto out_truncate;



 if (FUNC_1(VAR_16->i_mode) &&
     (VAR_19->i_diskflags & VAR_2)) {
  VAR_21 = FUNC_13(VAR_19);
  if (VAR_21)
   goto out_unlock;
 }

 if (VAR_19->i_eattr) {
  VAR_21 = FUNC_14(VAR_19);
  if (VAR_21)
   goto out_unlock;
 }

 if (!FUNC_25(VAR_19)) {
  VAR_21 = FUNC_15(VAR_19);
  if (VAR_21)
   goto out_unlock;
 }

 VAR_21 = FUNC_11(VAR_19);
 goto out_unlock;

out_truncate:
 if (FUNC_35(VAR_5, &VAR_19->i_gl->gl_flags) &&
            !(VAR_15->flags & VAR_13)) {
  struct buffer_head *VAR_22;
  struct gfs2_dinode *VAR_23;
  struct timespec VAR_24;
  VAR_21 = FUNC_27(VAR_19, &VAR_22);
  if (!VAR_21) {
   VAR_23 = (struct gfs2_dinode *)VAR_22->b_data;
   VAR_24.tv_sec = FUNC_3(VAR_23->di_atime);
   VAR_24.tv_nsec = FUNC_2(VAR_23->di_atime_nsec);
   if (FUNC_36(&VAR_16->i_atime, &VAR_24) > 0) {
    VAR_21 = FUNC_33(VAR_18, VAR_14, 0);
    if (VAR_21 == 0) {
     FUNC_32(VAR_19->i_gl, VAR_22);
     FUNC_12(VAR_19, VAR_22->b_data);
     FUNC_34(VAR_18);
    }
   }
   FUNC_4(VAR_22);
  }
 }
 FUNC_26(VAR_18, VAR_19->i_gl);
 if (FUNC_35(VAR_5, &VAR_19->i_gl->gl_flags)) {
  struct address_space *VAR_25 = FUNC_16(VAR_19->i_gl);
  FUNC_7(VAR_25);
  FUNC_6(VAR_25);
 }
 FUNC_39(VAR_16, 1);
 FUNC_9(VAR_19->i_gl, 0);


 VAR_21 = FUNC_33(VAR_18, 0, VAR_18->sd_jdesc->jd_blocks);
 if (VAR_21)
  goto out_unlock;

 FUNC_37(&VAR_16->i_data, 0);
 FUNC_34(VAR_18);

out_unlock:

 if (FUNC_29(VAR_19->i_res))
  FUNC_31(VAR_19->i_res);

 if (FUNC_35(VAR_9, &VAR_19->i_iopen_gh.gh_iflags)) {
  VAR_19->i_iopen_gh.gh_flags |= VAR_7;
  FUNC_17(&VAR_19->i_iopen_gh);
 }
 FUNC_23(&VAR_19->i_iopen_gh);
 FUNC_18(&VAR_20);
 if (VAR_21 && VAR_21 != VAR_6 && VAR_21 != -VAR_0)
  FUNC_8(VAR_18, "gfs2_delete_inode: %d\n", VAR_21);
out:

 FUNC_37(&VAR_16->i_data, 0);
 FUNC_30(VAR_19);
 FUNC_28(VAR_19);
 FUNC_5(VAR_16);
}
