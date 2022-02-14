
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_nlink; TYPE_1__* i_mapping; int i_sb; int * i_fop; int * i_op; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct inode*,struct inode*) ;
 struct inode* FUNC_5 (struct inode*,int) ;
 int VAR_7 ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (struct inode*) ;

__attribute__((used)) static int FUNC_11(struct inode * VAR_8, struct dentry * VAR_9, int VAR_10)
{
 struct inode * VAR_11;
 int VAR_12 = -VAR_0;

 if (VAR_8->i_nlink >= VAR_1)
  goto out;

 FUNC_7(VAR_8);

 VAR_11 = FUNC_5 (VAR_8, VAR_3 | VAR_10);
 VAR_12 = FUNC_1(VAR_11);
 if (FUNC_0(VAR_11))
  goto out_dir;

 VAR_11->i_op = &VAR_5;
 VAR_11->i_fop = &VAR_6;
 if (FUNC_9(VAR_11->i_sb, VAR_2))
  VAR_11->i_mapping->a_ops = &VAR_7;
 else
  VAR_11->i_mapping->a_ops = &VAR_4;

 FUNC_7(VAR_11);

 VAR_12 = FUNC_4(VAR_11, VAR_8);
 if (VAR_12)
  goto out_fail;

 VAR_12 = FUNC_3(VAR_9, VAR_11);
 if (VAR_12)
  goto out_fail;

 FUNC_2(VAR_9, VAR_11);
 FUNC_10(VAR_11);
out:
 return VAR_12;

out_fail:
 FUNC_6(VAR_11);
 FUNC_6(VAR_11);
 FUNC_10(VAR_11);
 FUNC_8(VAR_11);
out_dir:
 FUNC_6(VAR_8);
 goto out;
}
