
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_3__ {int sb_bsize; } ;
struct gfs2_sbd {TYPE_2__* sd_rindex; TYPE_1__ sd_sb; int sd_statfs_inode; } ;
struct TYPE_4__ {int i_size; } ;
struct gfs2_inode {int i_gh; TYPE_2__ i_inode; int i_gl; } ;
struct gfs2_dinode {int dummy; } ;
struct gfs2_alloc_parms {unsigned int target; int aflags; } ;
struct file {int dummy; } ;
struct address_space {int host; } ;
typedef int pgoff_t ;
typedef int loff_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 struct gfs2_sbd* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct page*) ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct page*,unsigned int,unsigned int,int ) ;
 int VAR_9 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int ,int ,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct gfs2_inode*) ;
 int FUNC_10 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 scalar_t__ FUNC_11 (struct gfs2_inode*) ;
 scalar_t__ FUNC_12 (struct gfs2_inode*) ;
 int FUNC_13 (struct gfs2_inode*) ;
 int FUNC_14 (struct gfs2_inode*) ;
 scalar_t__ FUNC_15 (struct gfs2_inode*,unsigned int) ;
 int FUNC_16 (struct gfs2_sbd*,unsigned int,int) ;
 int FUNC_17 (struct gfs2_sbd*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (struct gfs2_inode*,struct page*) ;
 int FUNC_20 (struct gfs2_inode*,int,unsigned int,int*) ;
 int FUNC_21 (struct gfs2_inode*,unsigned int,unsigned int*,unsigned int*) ;
 struct page* FUNC_22 (struct address_space*,int,unsigned int) ;
 int FUNC_23 (struct page*) ;
 int FUNC_24 (struct gfs2_inode*,struct page*) ;
 scalar_t__ FUNC_25 (int) ;
 int FUNC_26 (struct page*) ;

__attribute__((used)) static int FUNC_27(struct file *VAR_10, struct address_space *VAR_11,
       loff_t VAR_12, unsigned VAR_13, unsigned VAR_14,
       struct page **VAR_15, void **VAR_16)
{
 struct gfs2_inode *VAR_17 = FUNC_0(VAR_11->host);
 struct gfs2_sbd *VAR_18 = FUNC_1(VAR_11->host);
 struct gfs2_inode *VAR_19 = FUNC_0(VAR_18->sd_statfs_inode);
 unsigned int VAR_20 = 0, VAR_21 = 0, VAR_22;
 unsigned VAR_23 = 0;
 int VAR_24;
 int VAR_25 = 0;
 pgoff_t VAR_26 = VAR_12 >> VAR_4;
 unsigned VAR_27 = VAR_12 & (VAR_5 - 1);
 unsigned VAR_28 = VAR_27 + VAR_13;
 struct page *VAR_29;

 FUNC_7(VAR_17->i_gl, VAR_3, 0, &VAR_17->i_gh);
 VAR_25 = FUNC_5(&VAR_17->i_gh);
 if (FUNC_25(VAR_25))
  goto out_uninit;
 if (&VAR_17->i_inode == VAR_18->sd_rindex) {
  VAR_25 = FUNC_6(VAR_19->i_gl, VAR_3,
        VAR_2, &VAR_19->i_gh);
  if (FUNC_25(VAR_25)) {
   FUNC_4(&VAR_17->i_gh);
   goto out_uninit;
  }
 }

 VAR_25 = FUNC_20(VAR_17, VAR_12, VAR_13, &VAR_24);
 if (VAR_25)
  goto out_unlock;

 if (VAR_24 || FUNC_11(VAR_17))
  FUNC_21(VAR_17, VAR_13, &VAR_20, &VAR_21);

 if (VAR_24) {
  struct gfs2_alloc_parms VAR_30 = { .aflags = 0, };
  VAR_25 = FUNC_13(VAR_17);
  if (VAR_25)
   goto out_unlock;

  VAR_23 = VAR_20 + VAR_21;
  VAR_30.target = VAR_23;
  VAR_25 = FUNC_10(VAR_17, &VAR_30);
  if (VAR_25)
   goto out_qunlock;
 }

 VAR_22 = VAR_6 + VAR_21;
 if (FUNC_11(VAR_17))
  VAR_22 += VAR_20 ? VAR_20 : 1;
 if (VAR_21 || VAR_20)
  VAR_22 += VAR_8 + VAR_7;
 if (&VAR_17->i_inode == VAR_18->sd_rindex)
  VAR_22 += 2 * VAR_8;
 if (VAR_24)
  VAR_22 += FUNC_15(VAR_17, VAR_23);

 VAR_25 = FUNC_16(VAR_18, VAR_22,
     VAR_5/VAR_18->sd_sb.sb_bsize);
 if (VAR_25)
  goto out_trans_fail;

 VAR_25 = -VAR_1;
 VAR_14 |= VAR_0;
 VAR_29 = FUNC_22(VAR_11, VAR_26, VAR_14);
 *VAR_15 = VAR_29;
 if (FUNC_25(!VAR_29))
  goto out_endtrans;

 if (FUNC_12(VAR_17)) {
  VAR_25 = 0;
  if (VAR_12 + VAR_13 > VAR_18->sd_sb.sb_bsize - sizeof(struct gfs2_dinode)) {
   VAR_25 = FUNC_19(VAR_17, VAR_29);
   if (VAR_25 == 0)
    goto prepare_write;
  } else if (!FUNC_2(VAR_29)) {
   VAR_25 = FUNC_24(VAR_17, VAR_29);
  }
  goto out;
 }

prepare_write:
 VAR_25 = FUNC_3(VAR_29, VAR_27, VAR_28, VAR_9);
out:
 if (VAR_25 == 0)
  return 0;

 FUNC_26(VAR_29);
 FUNC_23(VAR_29);
 FUNC_17(VAR_18);
 if (VAR_12 + VAR_13 > VAR_17->i_inode.i_size)
  FUNC_18(&VAR_17->i_inode);
 goto out_trans_fail;

out_endtrans:
 FUNC_17(VAR_18);
out_trans_fail:
 if (VAR_24) {
  FUNC_9(VAR_17);
out_qunlock:
  FUNC_14(VAR_17);
 }
out_unlock:
 if (&VAR_17->i_inode == VAR_18->sd_rindex) {
  FUNC_4(&VAR_19->i_gh);
  FUNC_8(&VAR_19->i_gh);
 }
 FUNC_4(&VAR_17->i_gh);
out_uninit:
 FUNC_8(&VAR_17->i_gh);
 return VAR_25;
}
