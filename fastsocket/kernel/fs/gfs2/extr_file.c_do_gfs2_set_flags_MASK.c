
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct inode {int i_mapping; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int i_diskflags; int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct TYPE_4__ {int mnt; TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct buffer_head {int b_data; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct gfs2_inode*,int ) ;
 int FUNC_9 (struct gfs2_holder*) ;
 int FUNC_10 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_11 (struct gfs2_sbd*,int ) ;
 int FUNC_12 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (int ,struct buffer_head*) ;
 int FUNC_17 (struct gfs2_sbd*,int ,int ) ;
 int FUNC_18 (struct gfs2_sbd*) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;

__attribute__((used)) static int FUNC_22(struct file *VAR_11, u32 VAR_12, u32 VAR_13)
{
 struct inode *VAR_14 = VAR_11->f_path.dentry->d_inode;
 struct gfs2_inode *VAR_15 = FUNC_0(VAR_14);
 struct gfs2_sbd *VAR_16 = FUNC_1(VAR_14);
 struct buffer_head *VAR_17;
 struct gfs2_holder VAR_18;
 int VAR_19;
 u32 VAR_20, VAR_21;

 VAR_19 = FUNC_21(VAR_11->f_path.mnt);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_10(VAR_15->i_gl, VAR_8, 0, &VAR_18);
 if (VAR_19)
  goto out_drop_write;

 VAR_19 = -VAR_1;
 if (!FUNC_19(VAR_14))
  goto out;

 VAR_19 = 0;
 VAR_21 = VAR_15->i_diskflags;
 VAR_20 = (VAR_21 & ~VAR_13) | (VAR_12 & VAR_13);
 if ((VAR_20 ^ VAR_21) == 0)
  goto out;

 VAR_19 = -VAR_2;
 if ((VAR_20 ^ VAR_21) & ~VAR_7)
  goto out;

 VAR_19 = -VAR_3;
 if (FUNC_3(VAR_14) && (VAR_20 & VAR_5))
  goto out;
 if (FUNC_2(VAR_14) && (VAR_20 & VAR_4))
  goto out;
 if (((VAR_20 ^ VAR_21) & VAR_5) &&
     !FUNC_5(VAR_0))
  goto out;
 if (!FUNC_3(VAR_14)) {
  VAR_19 = FUNC_13(VAR_14, VAR_9);
  if (VAR_19)
   goto out;
 }
 if ((VAR_21 ^ VAR_20) & VAR_6) {
  if (VAR_21 & VAR_6)
   FUNC_11(VAR_16, VAR_15->i_gl);
  VAR_19 = FUNC_7(VAR_14->i_mapping);
  if (VAR_19)
   goto out;
  VAR_19 = FUNC_6(VAR_14->i_mapping);
  if (VAR_19)
   goto out;
 }
 VAR_19 = FUNC_17(VAR_16, VAR_10, 0);
 if (VAR_19)
  goto out;
 VAR_19 = FUNC_12(VAR_15, &VAR_17);
 if (VAR_19)
  goto out_trans_end;
 FUNC_16(VAR_15->i_gl, VAR_17);
 VAR_15->i_diskflags = VAR_20;
 FUNC_8(VAR_15, VAR_17->b_data);
 FUNC_4(VAR_17);
 FUNC_15(VAR_14);
 FUNC_14(VAR_14);
out_trans_end:
 FUNC_18(VAR_16);
out:
 FUNC_9(&VAR_18);
out_drop_write:
 FUNC_20(VAR_11->f_path.mnt);
 return VAR_19;
}
