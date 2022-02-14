
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_nlink; TYPE_1__* i_mapping; int * i_fop; int * i_op; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct inode*,struct inode*) ;
 struct inode* FUNC_5 (struct inode*,int) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_6, struct dentry *VAR_7, int VAR_8)
{
 struct inode *VAR_9;
 int VAR_10 = -VAR_0;

 if (VAR_6->i_nlink >= VAR_1)
  goto out;

 FUNC_7(VAR_6);

 VAR_9 = FUNC_5(VAR_6, VAR_2 | VAR_8);
 VAR_10 = FUNC_1(VAR_9);
 if (FUNC_0(VAR_9))
  goto out_dir;

 VAR_9->i_op = &VAR_4;
 VAR_9->i_fop = &VAR_5;
 VAR_9->i_mapping->a_ops = &VAR_3;

 FUNC_7(VAR_9);

 VAR_10 = FUNC_4(VAR_9, VAR_6);
 if (VAR_10)
  goto out_fail;

 VAR_10 = FUNC_3(VAR_7, VAR_9);
 if (VAR_10)
  goto out_fail;

 FUNC_2(VAR_7, VAR_9);
out:
 return VAR_10;

out_fail:
 FUNC_6(VAR_9);
 FUNC_6(VAR_9);
 FUNC_8(VAR_9);
out_dir:
 FUNC_6(VAR_6);
 goto out;
}
