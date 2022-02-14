
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {struct gfs2_sbd* s_fs_info; } ;
struct TYPE_4__ {scalar_t__ ar_quota; } ;
struct gfs2_sbd {int sd_fsb2bb_shift; TYPE_1__ sd_args; int sd_quota_inode; } ;
struct TYPE_5__ {int qb_value; int qb_limit; int qb_warn; } ;
struct gfs2_quota_data {TYPE_2__ qd_qb; int qd_gl; } ;
struct gfs2_quota {int dummy; } ;
struct TYPE_6__ {int i_mutex; } ;
struct gfs2_inode {TYPE_3__ i_inode; int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct gfs2_alloc_parms {unsigned int target; int aflags; } ;
struct fs_disk_quota {int d_fieldmask; int d_blk_softlimit; int d_blk_hardlimit; int d_bcount; int d_id; int d_flags; } ;
typedef int qid_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gfs2_inode*,int ,int ,struct gfs2_quota_data*,struct fs_disk_quota*) ;
 int FUNC_3 (struct gfs2_holder*) ;
 int FUNC_4 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 scalar_t__ FUNC_7 (struct gfs2_inode*) ;
 scalar_t__ FUNC_8 (struct gfs2_inode*,unsigned int) ;
 int FUNC_9 (struct gfs2_inode*) ;
 int FUNC_10 (struct gfs2_sbd*,scalar_t__,int ) ;
 int FUNC_11 (struct gfs2_sbd*) ;
 int FUNC_12 (struct gfs2_inode*,int ,int,int*) ;
 int FUNC_13 (struct gfs2_inode*,int,unsigned int*,unsigned int*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct gfs2_quota_data*) ;
 int FUNC_17 (struct gfs2_sbd*,int,int ,struct gfs2_quota_data**) ;
 int FUNC_18 (struct gfs2_quota_data*) ;
 int FUNC_19 (struct gfs2_sbd*,struct gfs2_quota_data*) ;

__attribute__((used)) static int FUNC_20(struct super_block *VAR_13, int VAR_14, qid_t VAR_15,
      struct fs_disk_quota *VAR_16)
{
 struct gfs2_sbd *VAR_17 = VAR_13->s_fs_info;
 struct gfs2_inode *VAR_18 = FUNC_0(VAR_17->sd_quota_inode);
 struct gfs2_quota_data *VAR_19;
 struct gfs2_holder VAR_20, VAR_21;
 unsigned int VAR_22, VAR_23;
 unsigned int VAR_24 = 0;
 int VAR_25;
 loff_t VAR_26;
 int VAR_27;

 if (VAR_17->sd_args.ar_quota == VAR_6)
  return -VAR_1;

 switch(VAR_14) {
 case 128:
  VAR_14 = VAR_9;
  if (VAR_16->d_flags != VAR_12)
   return -VAR_0;
  break;
 case 129:
  VAR_14 = VAR_8;
  if (VAR_16->d_flags != VAR_11)
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_16->d_fieldmask & ~VAR_5)
  return -VAR_0;
 if (VAR_16->d_id != VAR_15)
  return -VAR_0;

 VAR_27 = FUNC_17(VAR_17, VAR_14, VAR_15, &VAR_19);
 if (VAR_27)
  return VAR_27;

 VAR_27 = FUNC_9(VAR_18);
 if (VAR_27)
  goto out_unlockput;

 FUNC_14(&VAR_18->i_inode.i_mutex);
 VAR_27 = FUNC_4(VAR_19->qd_gl, VAR_7, 0, &VAR_20);
 if (VAR_27)
  goto out_put;
 VAR_27 = FUNC_4(VAR_18->i_gl, VAR_7, 0, &VAR_21);
 if (VAR_27)
  goto out_q;


 VAR_27 = FUNC_19(VAR_17, VAR_19);
 if (VAR_27)
  goto out_i;


 if ((VAR_16->d_fieldmask & VAR_4) &&
     ((VAR_16->d_blk_softlimit >> VAR_17->sd_fsb2bb_shift) == FUNC_1(VAR_19->qd_qb.qb_warn)))
  VAR_16->d_fieldmask ^= VAR_4;

 if ((VAR_16->d_fieldmask & VAR_3) &&
     ((VAR_16->d_blk_hardlimit >> VAR_17->sd_fsb2bb_shift) == FUNC_1(VAR_19->qd_qb.qb_limit)))
  VAR_16->d_fieldmask ^= VAR_3;

 if ((VAR_16->d_fieldmask & VAR_2) &&
     ((VAR_16->d_bcount >> VAR_17->sd_fsb2bb_shift) == FUNC_1(VAR_19->qd_qb.qb_value)))
  VAR_16->d_fieldmask ^= VAR_2;

 if (VAR_16->d_fieldmask == 0)
  goto out_i;

 VAR_26 = FUNC_16(VAR_19);
 VAR_27 = FUNC_12(VAR_18, VAR_26, sizeof(struct gfs2_quota),
       &VAR_25);
 if (VAR_27)
  goto out_i;
 if (FUNC_7(VAR_18))
  VAR_25 = 1;
 if (VAR_25) {
  struct gfs2_alloc_parms VAR_28 = { .aflags = 0, };
  FUNC_13(VAR_18, sizeof(struct gfs2_quota),
           &VAR_22, &VAR_23);
  VAR_24 = 1 + VAR_22 + VAR_23;
  VAR_28.target = VAR_24;
  VAR_27 = FUNC_6(VAR_18, &VAR_28);
  if (VAR_27)
   goto out_i;
  VAR_24 += FUNC_8(VAR_18, VAR_24);
 }



 VAR_27 = FUNC_10(VAR_17, VAR_24 + VAR_10 + 2, 0);
 if (VAR_27)
  goto out_release;


 VAR_27 = FUNC_2(VAR_18, VAR_26, 0, VAR_19, VAR_16);

 FUNC_11(VAR_17);
out_release:
 if (VAR_25)
  FUNC_5(VAR_18);
out_i:
 FUNC_3(&VAR_21);
out_q:
 FUNC_3(&VAR_20);
out_unlockput:
 FUNC_15(&VAR_18->i_inode.i_mutex);
out_put:
 FUNC_18(VAR_19);
 return VAR_27;
}
