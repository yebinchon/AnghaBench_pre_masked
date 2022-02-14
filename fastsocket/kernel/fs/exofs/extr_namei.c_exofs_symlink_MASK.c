
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {unsigned int s_blocksize; } ;
struct inode {unsigned int i_size; int * i_op; TYPE_1__* i_mapping; struct super_block* i_sb; } ;
struct exofs_i_info {int i_data; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct exofs_i_info* FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct inode*,int) ;
 int VAR_5 ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int ,char const*,unsigned int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (struct inode*,char const*,unsigned int) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_6, struct dentry *VAR_7,
     const char *VAR_8)
{
 struct super_block *VAR_9 = VAR_6->i_sb;
 int VAR_10 = -VAR_0;
 unsigned VAR_11 = FUNC_11(VAR_8)+1;
 struct inode *VAR_12;
 struct exofs_i_info *VAR_13;

 if (VAR_11 > VAR_9->s_blocksize)
  goto out;

 VAR_12 = FUNC_4(VAR_6, VAR_1 | VAR_2);
 VAR_10 = FUNC_1(VAR_12);
 if (FUNC_0(VAR_12))
  goto out;

 VAR_13 = FUNC_3(VAR_12);
 if (VAR_11 > sizeof(VAR_13->i_data)) {

  VAR_12->i_op = &VAR_5;
  VAR_12->i_mapping->a_ops = &VAR_3;
  FUNC_9(VAR_13->i_data, 0, sizeof(VAR_13->i_data));

  VAR_10 = FUNC_10(VAR_12, VAR_8, VAR_11);
  if (VAR_10)
   goto out_fail;
 } else {

  VAR_12->i_op = &VAR_4;
  FUNC_8(VAR_13->i_data, VAR_8, VAR_11);
  VAR_12->i_size = VAR_11-1;
 }
 FUNC_7(VAR_12);

 VAR_10 = FUNC_2(VAR_7, VAR_12);
out:
 return VAR_10;

out_fail:
 FUNC_5(VAR_12);
 FUNC_6(VAR_12);
 goto out;
}
