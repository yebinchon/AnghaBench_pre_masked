
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_gang {int dummy; } ;
struct inode {int i_mode; int * i_fop; int * i_op; int i_gid; int i_sb; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {struct spu_gang* i_gang; int * i_ctx; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct spu_gang* FUNC_1 () ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct inode* FUNC_5 (int ,int) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_5, struct dentry *VAR_6, int VAR_7)
{
 int VAR_8;
 struct inode *VAR_9;
 struct spu_gang *VAR_10;

 VAR_8 = -VAR_0;
 VAR_9 = FUNC_5(VAR_5->i_sb, VAR_7 | VAR_1);
 if (!VAR_9)
  goto out;

 VAR_8 = 0;
 if (VAR_5->i_mode & VAR_2) {
  VAR_9->i_gid = VAR_5->i_gid;
  VAR_9->i_mode &= VAR_2;
 }
 VAR_10 = FUNC_1();
 FUNC_0(VAR_9)->i_ctx = ((void*)0);
 FUNC_0(VAR_9)->i_gang = VAR_10;
 if (!VAR_10)
  goto out_iput;

 VAR_9->i_op = &VAR_3;
 VAR_9->i_fop = &VAR_4;

 FUNC_2(VAR_6, VAR_9);
 FUNC_3(VAR_5);
 FUNC_3(VAR_6->d_inode);
 return VAR_8;

out_iput:
 FUNC_4(VAR_9);
out:
 return VAR_8;
}
