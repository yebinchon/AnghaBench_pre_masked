
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct inode {int i_atime; int i_mtime; int i_size; TYPE_2__* i_sb; struct address_space* i_mapping; } ;
struct gfs2_sbd {int sd_fsb2bb_shift; } ;
struct TYPE_3__ {int qb_value; void* qb_limit; void* qb_warn; } ;
struct gfs2_quota_data {TYPE_1__ qd_qb; } ;
struct gfs2_quota {int qu_value; void* qu_limit; void* qu_warn; } ;
struct gfs2_inode {int i_gl; struct inode i_inode; } ;
struct fs_disk_quota {int d_fieldmask; int d_blk_softlimit; int d_blk_hardlimit; int d_bcount; } ;
struct buffer_head {int b_size; struct buffer_head* b_this_page; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ s64 ;
typedef int q ;
typedef int loff_t ;
struct TYPE_4__ {unsigned int s_blocksize; int s_blocksize_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct gfs2_sbd* FUNC_0 (struct inode*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct page*,unsigned int,int ) ;
 struct page* FUNC_8 (struct address_space*,unsigned long,int ) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct inode*,unsigned int,struct buffer_head*,int) ;
 int FUNC_11 (struct gfs2_inode*,int *,char*,int*,int) ;
 scalar_t__ FUNC_12 (struct gfs2_inode*) ;
 int FUNC_13 (int ,struct buffer_head*) ;
 int FUNC_14 (struct gfs2_inode*,int *) ;
 int FUNC_15 (struct inode*,int ) ;
 void* FUNC_16 (struct page*,int ) ;
 int FUNC_17 (void*,int ) ;
 int FUNC_18 (int ,int,struct buffer_head**) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (void*,void*,int) ;
 int FUNC_21 (struct gfs2_quota*,int ,int) ;
 struct buffer_head* FUNC_22 (struct page*) ;
 int FUNC_23 (struct page*) ;
 int FUNC_24 (struct page*) ;
 int FUNC_25 (struct buffer_head*) ;
 int FUNC_26 (struct page*) ;
 int FUNC_27 (struct buffer_head*) ;
 int FUNC_28 (struct page*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_29(struct gfs2_inode *VAR_11, loff_t VAR_12,
        s64 VAR_13, struct gfs2_quota_data *VAR_14,
        struct fs_disk_quota *VAR_15)
{
 struct inode *VAR_16 = &VAR_11->i_inode;
 struct gfs2_sbd *VAR_17 = FUNC_0(VAR_16);
 struct address_space *VAR_18 = VAR_16->i_mapping;
 unsigned long VAR_19 = VAR_12 >> VAR_8;
 unsigned VAR_20 = VAR_12 & (VAR_9 - 1);
 unsigned VAR_21, VAR_22, VAR_23;
 struct buffer_head *VAR_24;
 struct page *VAR_25;
 void *VAR_26, *VAR_27;
 struct gfs2_quota VAR_28, *VAR_29;
 int VAR_30, VAR_31;
 u64 VAR_32;

 if (FUNC_12(VAR_11)) {
  VAR_30 = FUNC_14(VAR_11, ((void*)0));
  if (VAR_30)
   return VAR_30;
 }

 FUNC_21(&VAR_28, 0, sizeof(struct gfs2_quota));
 VAR_30 = FUNC_11(VAR_11, ((void*)0), (char *)&VAR_28, &VAR_12, sizeof(VAR_28));
 if (VAR_30 < 0)
  return VAR_30;

 VAR_30 = -VAR_1;
 VAR_29 = &VAR_28;
 VAR_29->qu_value = FUNC_2(VAR_29->qu_value);
 VAR_29->qu_value += VAR_13;
 VAR_29->qu_value = FUNC_6(VAR_29->qu_value);
 VAR_14->qd_qb.qb_value = VAR_29->qu_value;
 if (VAR_15) {
  if (VAR_15->d_fieldmask & VAR_5) {
   VAR_29->qu_warn = FUNC_6(VAR_15->d_blk_softlimit >> VAR_17->sd_fsb2bb_shift);
   VAR_14->qd_qb.qb_warn = VAR_29->qu_warn;
  }
  if (VAR_15->d_fieldmask & VAR_4) {
   VAR_29->qu_limit = FUNC_6(VAR_15->d_blk_hardlimit >> VAR_17->sd_fsb2bb_shift);
   VAR_14->qd_qb.qb_limit = VAR_29->qu_limit;
  }
  if (VAR_15->d_fieldmask & VAR_3) {
   VAR_29->qu_value = FUNC_6(VAR_15->d_bcount >> VAR_17->sd_fsb2bb_shift);
   VAR_14->qd_qb.qb_value = VAR_29->qu_value;
  }
 }


 VAR_27 = VAR_29;
 VAR_31 = sizeof(struct gfs2_quota);
get_a_page:
 VAR_25 = FUNC_8(VAR_18, VAR_19, VAR_6);
 if (!VAR_25)
  return -VAR_2;

 VAR_21 = VAR_16->i_sb->s_blocksize;
 VAR_22 = VAR_19 << (VAR_8 - VAR_16->i_sb->s_blocksize_bits);

 if (!FUNC_24(VAR_25))
  FUNC_7(VAR_25, VAR_21, 0);

 VAR_24 = FUNC_22(VAR_25);
 VAR_23 = VAR_21;
 while (VAR_20 >= VAR_23) {
  VAR_24 = VAR_24->b_this_page;
  VAR_22++;
  VAR_23 += VAR_21;
 }

 if (!FUNC_3(VAR_24)) {
  FUNC_10(VAR_16, VAR_22, VAR_24, 1);
  if (!FUNC_3(VAR_24))
   goto unlock_out;

  if (FUNC_4(VAR_24))
   FUNC_28(VAR_25, VAR_23 - VAR_21, VAR_24->b_size);
 }

 if (FUNC_1(VAR_25))
  FUNC_25(VAR_24);

 if (!FUNC_5(VAR_24)) {
  FUNC_18(VAR_10, 1, &VAR_24);
  FUNC_27(VAR_24);
  if (!FUNC_5(VAR_24))
   goto unlock_out;
 }

 FUNC_13(VAR_11->i_gl, VAR_24);

 VAR_26 = FUNC_16(VAR_25, VAR_7);
 if (VAR_20 + sizeof(struct gfs2_quota) > VAR_9)
  VAR_31 = VAR_9 - VAR_20;
 FUNC_20(VAR_26 + VAR_20, VAR_27, VAR_31);
 FUNC_9(VAR_25);
 FUNC_17(VAR_26, VAR_7);
 FUNC_26(VAR_25);
 FUNC_23(VAR_25);



 if ((VAR_20 + sizeof(struct gfs2_quota)) > VAR_9) {
  VAR_27 = VAR_27 + VAR_31;
  VAR_31 = sizeof(struct gfs2_quota) - VAR_31;
  VAR_20 = 0;
  VAR_19++;
  goto get_a_page;
 }

 VAR_32 = VAR_12 + sizeof(struct gfs2_quota);
 if (VAR_32 > VAR_16->i_size)
  FUNC_15(VAR_16, VAR_32);
 VAR_16->i_mtime = VAR_16->i_atime = VAR_0;
 FUNC_19(VAR_16);
 return 0;

unlock_out:
 FUNC_26(VAR_25);
 FUNC_23(VAR_25);
 return VAR_30;
}
