
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int sb_bsize; int sb_bsize_shift; } ;
struct gfs2_sbd {int sd_max_rg_data; TYPE_1__ sd_sb; } ;
struct gfs2_inode {int i_gh; int i_gl; } ;
struct gfs2_alloc_parms {unsigned int target; int aflags; } ;
typedef int loff_t ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct gfs2_inode*,int,int*,unsigned int*,unsigned int*) ;
 int FUNC_3 (struct inode*,int,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct gfs2_inode*) ;
 int FUNC_9 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 scalar_t__ FUNC_10 (struct gfs2_inode*) ;
 int FUNC_11 (struct gfs2_inode*) ;
 int FUNC_12 (struct gfs2_inode*) ;
 unsigned int FUNC_13 (struct gfs2_inode*,unsigned int) ;
 int FUNC_14 (struct gfs2_sbd*) ;
 int FUNC_15 (struct gfs2_inode*) ;
 int FUNC_16 (struct inode*,int,int) ;
 int FUNC_17 (struct gfs2_sbd*,unsigned int,int) ;
 int FUNC_18 (struct gfs2_sbd*) ;
 int FUNC_19 (struct gfs2_inode*,int,int,int*) ;
 int FUNC_20 (struct gfs2_inode*,int,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_21 (int) ;

__attribute__((used)) static long FUNC_22(struct inode *VAR_10, int VAR_11, loff_t VAR_12,
      loff_t VAR_13)
{
 struct gfs2_sbd *VAR_14 = FUNC_1(VAR_10);
 struct gfs2_inode *VAR_15 = FUNC_0(VAR_10);
 struct gfs2_alloc_parms VAR_16 = { .aflags = 0, };
 int VAR_17;
 unsigned int VAR_18 = 0, VAR_19 = 0, VAR_20;
 loff_t VAR_21, VAR_22;
 int VAR_23;
 loff_t VAR_24 = ~((loff_t)VAR_14->sd_sb.sb_bsize - 1);
 loff_t VAR_25 = (VAR_12 + VAR_13 - 1) >> VAR_14->sd_sb.sb_bsize_shift;
 loff_t VAR_26 = VAR_9 & VAR_24;
 VAR_25 = (VAR_25 + 1) << VAR_14->sd_sb.sb_bsize_shift;


 if (VAR_11 & ~VAR_2)
  return -VAR_1;

 VAR_23 = FUNC_14(VAR_14);
 if (VAR_23)
  return VAR_23;

 VAR_12 &= VAR_24;

 VAR_13 = VAR_25 - VAR_12;
 VAR_21 = VAR_14->sd_max_rg_data * VAR_14->sd_sb.sb_bsize / 2;
 if (!VAR_21)
  VAR_21 = VAR_9;
 VAR_21 &= VAR_24;
 if (VAR_21 == 0)
  VAR_21 = VAR_14->sd_sb.sb_bsize;

 VAR_23 = FUNC_15(VAR_15);
 if (VAR_23)
  return VAR_23;

 FUNC_6(VAR_15->i_gl, VAR_3, 0, &VAR_15->i_gh);
 VAR_23 = FUNC_5(&VAR_15->i_gh);
 if (FUNC_21(VAR_23))
  goto out_uninit;

 FUNC_16(VAR_10, VAR_12, VAR_13);
 while (VAR_13 > 0) {
  if (VAR_13 < VAR_21)
   VAR_21 = VAR_13;
  FUNC_19(VAR_15, VAR_12, VAR_21, &VAR_17);
  if (!VAR_17) {
   VAR_13 -= VAR_21;
   VAR_12 += VAR_21;
   continue;
  }
  VAR_23 = FUNC_11(VAR_15);
  if (VAR_23)
   goto out_unlock;

retry:
  FUNC_20(VAR_15, VAR_21, &VAR_18, &VAR_19);

  VAR_16.target = VAR_18 + VAR_19;
  VAR_23 = FUNC_9(VAR_15, &VAR_16);
  if (VAR_23) {
   if (VAR_23 == -VAR_0 && VAR_21 > VAR_14->sd_sb.sb_bsize) {
    VAR_21 >>= 1;
    VAR_21 &= VAR_24;
    if (VAR_21 == 0)
     VAR_21 = VAR_14->sd_sb.sb_bsize;
    goto retry;
   }
   goto out_qunlock;
  }
  VAR_22 = VAR_21;
  FUNC_2(VAR_15, (VAR_13 > VAR_26)? VAR_26: VAR_13,
    &VAR_22, &VAR_18, &VAR_19);

  VAR_20 = VAR_5 + VAR_19 + VAR_8 + VAR_6 +
     VAR_7 + FUNC_13(VAR_15, VAR_18 + VAR_19);
  if (FUNC_10(VAR_15))
   VAR_20 += VAR_18 ? VAR_18 : 1;

  VAR_23 = FUNC_17(VAR_14, VAR_20,
      VAR_4/VAR_14->sd_sb.sb_bsize);
  if (VAR_23)
   goto out_trans_fail;

  VAR_23 = FUNC_3(VAR_10, VAR_12, VAR_22, VAR_11);
  FUNC_18(VAR_14);

  if (VAR_23)
   goto out_trans_fail;

  VAR_13 -= VAR_22;
  VAR_12 += VAR_22;
  FUNC_8(VAR_15);
  FUNC_12(VAR_15);
 }
 goto out_unlock;

out_trans_fail:
 FUNC_8(VAR_15);
out_qunlock:
 FUNC_12(VAR_15);
out_unlock:
 FUNC_4(&VAR_15->i_gh);
out_uninit:
 FUNC_7(&VAR_15->i_gh);
 return VAR_23;
}
