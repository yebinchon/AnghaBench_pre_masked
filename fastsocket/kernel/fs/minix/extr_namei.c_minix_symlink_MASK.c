
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; TYPE_1__* i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct inode*,int*) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct inode*,char const*,int) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(struct inode * VAR_2, struct dentry *VAR_3,
   const char * VAR_4)
{
 int VAR_5 = -VAR_0;
 int VAR_6 = FUNC_6(VAR_4)+1;
 struct inode * VAR_7;

 if (VAR_6 > VAR_2->i_sb->s_blocksize)
  goto out;

 VAR_7 = FUNC_3(VAR_2, &VAR_5);
 if (!VAR_7)
  goto out;

 VAR_7->i_mode = VAR_1 | 0777;
 FUNC_4(VAR_7, 0);
 VAR_5 = FUNC_5(VAR_7, VAR_4, VAR_6);
 if (VAR_5)
  goto out_fail;

 VAR_5 = FUNC_0(VAR_3, VAR_7);
out:
 return VAR_5;

out_fail:
 FUNC_1(VAR_7);
 FUNC_2(VAR_7);
 goto out;
}
