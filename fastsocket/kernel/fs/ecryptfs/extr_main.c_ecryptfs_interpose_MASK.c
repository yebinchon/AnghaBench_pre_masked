
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct super_block {int dummy; } ;
struct inode {scalar_t__ i_sb; int i_state; int i_rdev; int i_mode; int * i_fop; int * i_op; } ;
struct dentry {int * d_op; struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (struct super_block*) ;
 int VAR_10 ;
 int FUNC_5 (struct inode*,struct inode*,int *) ;
 int FUNC_6 (struct inode*,struct inode*) ;
 struct inode* FUNC_7 (struct super_block*,unsigned long,int ,int ,struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,int ,int ) ;
 int FUNC_10 (struct inode*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct inode*) ;

int FUNC_13(struct dentry *VAR_11, struct dentry *VAR_12,
         struct super_block *VAR_13, u32 VAR_14)
{
 struct inode *VAR_15;
 struct inode *VAR_16;
 int VAR_17 = 0;

 VAR_15 = VAR_11->d_inode;
 if (VAR_15->i_sb != FUNC_4(VAR_13)) {
  VAR_17 = -VAR_3;
  goto out;
 }
 if (!FUNC_8(VAR_15)) {
  VAR_17 = -VAR_2;
  goto out;
 }
 VAR_16 = FUNC_7(VAR_13, (unsigned long)VAR_15,
        VAR_9, VAR_8,
        VAR_15);
 if (!VAR_16) {
  VAR_17 = -VAR_0;
  FUNC_10(VAR_15);
  goto out;
 }
 if (VAR_16->i_state & VAR_4)
  FUNC_12(VAR_16);
 else
  FUNC_10(VAR_15);
 if (FUNC_1(VAR_15->i_mode))
  VAR_16->i_op = &VAR_10;
 else if (FUNC_0(VAR_15->i_mode))
  VAR_16->i_op = &VAR_6;
 if (FUNC_0(VAR_15->i_mode))
  VAR_16->i_fop = &VAR_5;
 if (FUNC_11(VAR_15->i_mode))
  FUNC_9(VAR_16, VAR_15->i_mode,
       VAR_15->i_rdev);
 VAR_12->d_op = &VAR_7;
 FUNC_5(VAR_16, VAR_15, ((void*)0));


 FUNC_6(VAR_16, VAR_15);
 if (VAR_14 & VAR_1)
  FUNC_2(VAR_12, VAR_16);
 else
  FUNC_3(VAR_12, VAR_16);
out:
 return VAR_17;
}
