
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct vm_fault {struct page* page; } ;
struct vm_area_struct {TYPE_4__* vm_file; } ;
struct page {int index; scalar_t__ mapping; } ;
struct inode {scalar_t__ i_mapping; int i_sb; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int i_flags; TYPE_3__* i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct gfs2_alloc_parms {unsigned int target; int aflags; } ;
typedef int loff_t ;
struct TYPE_6__ {TYPE_1__* dentry; } ;
struct TYPE_8__ {TYPE_2__ f_path; } ;
struct TYPE_7__ {int gl_flags; } ;
struct TYPE_5__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct page*) ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct gfs2_holder*) ;
 int FUNC_8 (struct gfs2_holder*) ;
 int FUNC_9 (TYPE_3__*,int ,int ,struct gfs2_holder*) ;
 int FUNC_10 (struct gfs2_holder*) ;
 int FUNC_11 (struct gfs2_inode*) ;
 int FUNC_12 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 scalar_t__ FUNC_13 (struct gfs2_inode*) ;
 scalar_t__ FUNC_14 (struct gfs2_inode*) ;
 int FUNC_15 (struct gfs2_inode*) ;
 int FUNC_16 (struct gfs2_inode*) ;
 scalar_t__ FUNC_17 (struct gfs2_inode*,unsigned int) ;
 int FUNC_18 (struct gfs2_sbd*) ;
 int FUNC_19 (struct gfs2_inode*) ;
 int FUNC_20 (struct inode*,int,int ) ;
 int FUNC_21 (struct gfs2_sbd*,unsigned int,int ) ;
 int FUNC_22 (struct gfs2_sbd*) ;
 int FUNC_23 (struct gfs2_inode*,struct page*) ;
 int FUNC_24 (struct gfs2_inode*,int,int ,int*) ;
 int FUNC_25 (struct gfs2_inode*,int ,unsigned int*,unsigned int*) ;
 int FUNC_26 (struct inode*) ;
 int FUNC_27 (struct page*) ;
 int FUNC_28 (struct inode*) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int ,int *) ;
 int FUNC_32 (struct page*) ;
 int FUNC_33 (struct page*) ;
 int FUNC_34 (struct page*) ;

__attribute__((used)) static int FUNC_35(struct vm_area_struct *VAR_10, struct vm_fault *VAR_11)
{
 struct page *VAR_12 = VAR_11->page;
 struct inode *VAR_13 = VAR_10->vm_file->f_path.dentry->d_inode;
 struct gfs2_inode *VAR_14 = FUNC_0(VAR_13);
 struct gfs2_sbd *VAR_15 = FUNC_1(VAR_13);
 struct gfs2_alloc_parms VAR_16 = { .aflags = 0, };
 unsigned long VAR_17;
 u64 VAR_18 = VAR_12->index << VAR_5;
 unsigned int VAR_19, VAR_20, VAR_21;
 int VAR_22 = 0;
 struct gfs2_holder VAR_23;
 loff_t VAR_24;
 int VAR_25;

 FUNC_30(VAR_13->i_sb);


 FUNC_4(VAR_10->vm_file);

 VAR_25 = FUNC_5(VAR_13);
 if (VAR_25)
  goto out;

 VAR_25 = FUNC_19(VAR_14);
 if (VAR_25)
  goto out_write_access;

 FUNC_9(VAR_14->i_gl, VAR_4, 0, &VAR_23);
 VAR_25 = FUNC_8(&VAR_23);
 if (VAR_25)
  goto out_uninit;

 FUNC_31(VAR_3, &VAR_14->i_gl->gl_flags);
 FUNC_31(VAR_2, &VAR_14->i_flags);

 FUNC_20(VAR_13, VAR_18, VAR_6);

 VAR_25 = FUNC_24(VAR_14, VAR_18, VAR_6, &VAR_22);
 if (VAR_25)
  goto out_unlock;

 if (!VAR_22) {
  FUNC_27(VAR_12);
  if (!FUNC_2(VAR_12) || VAR_12->mapping != VAR_13->i_mapping) {
   VAR_25 = -VAR_0;
   FUNC_33(VAR_12);
  }
  goto out_unlock;
 }

 VAR_25 = FUNC_18(VAR_15);
 if (VAR_25)
  goto out_unlock;

 VAR_25 = FUNC_15(VAR_14);
 if (VAR_25)
  goto out_unlock;
 FUNC_25(VAR_14, VAR_6, &VAR_19, &VAR_20);
 VAR_16.target = VAR_19 + VAR_20;
 VAR_25 = FUNC_12(VAR_14, &VAR_16);
 if (VAR_25)
  goto out_quota_unlock;

 VAR_21 = VAR_7 + VAR_20;
 if (FUNC_13(VAR_14))
  VAR_21 += VAR_19 ? VAR_19 : 1;
 if (VAR_20 || VAR_19) {
  VAR_21 += VAR_9 + VAR_8;
  VAR_21 += FUNC_17(VAR_14, VAR_19 + VAR_20);
 }
 VAR_25 = FUNC_21(VAR_15, VAR_21, 0);
 if (VAR_25)
  goto out_trans_fail;

 FUNC_27(VAR_12);
 VAR_25 = -VAR_1;
 VAR_24 = FUNC_26(VAR_13);
 VAR_17 = (VAR_24 - 1) >> VAR_5;

 if (VAR_24 == 0 || (VAR_12->index > VAR_17))
  goto out_trans_end;

 VAR_25 = -VAR_0;



 if (!FUNC_2(VAR_12) || VAR_12->mapping != VAR_13->i_mapping)
  goto out_trans_end;


 VAR_25 = 0;
 if (FUNC_14(VAR_14))
  VAR_25 = FUNC_23(VAR_14, VAR_12);
 if (VAR_25 == 0)
  VAR_25 = FUNC_6(VAR_12);

out_trans_end:
 if (VAR_25)
  FUNC_33(VAR_12);
 FUNC_22(VAR_15);
out_trans_fail:
 FUNC_11(VAR_14);
out_quota_unlock:
 FUNC_16(VAR_14);
out_unlock:
 FUNC_7(&VAR_23);
out_uninit:
 FUNC_10(&VAR_23);
 if (VAR_25 == 0) {
  FUNC_32(VAR_12);
  FUNC_34(VAR_12);
 }
out_write_access:
 FUNC_28(VAR_13);
out:
 FUNC_29(VAR_13->i_sb);
 return FUNC_3(VAR_25);
}
