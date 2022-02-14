
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_nlink; int i_mode; int i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {scalar_t__ s_link_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int FUNC_5 (struct inode*,struct inode*) ;
 struct inode* FUNC_6 (struct inode*,int*) ;
 TYPE_1__* FUNC_7 (int ) ;
 int FUNC_8 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_9(struct inode * VAR_3, struct dentry *VAR_4, int VAR_5)
{
 struct inode * VAR_6;
 int VAR_7 = -VAR_0;

 if (VAR_3->i_nlink >= FUNC_7(VAR_3->i_sb)->s_link_max)
  goto out;

 FUNC_2(VAR_3);

 VAR_6 = FUNC_6(VAR_3, &VAR_7);
 if (!VAR_6)
  goto out_dir;

 VAR_6->i_mode = VAR_1 | VAR_5;
 if (VAR_3->i_mode & VAR_2)
  VAR_6->i_mode |= VAR_2;
 FUNC_8(VAR_6, 0);

 FUNC_2(VAR_6);

 VAR_7 = FUNC_5(VAR_6, VAR_3);
 if (VAR_7)
  goto out_fail;

 VAR_7 = FUNC_4(VAR_4, VAR_6);
 if (VAR_7)
  goto out_fail;

 FUNC_0(VAR_4, VAR_6);
out:
 return VAR_7;

out_fail:
 FUNC_1(VAR_6);
 FUNC_1(VAR_6);
 FUNC_3(VAR_6);
out_dir:
 FUNC_1(VAR_3);
 goto out;
}
