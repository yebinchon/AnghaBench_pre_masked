
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int dummy; } ;
struct inode {int i_sb; } ;
struct dentry {int * d_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 char* FUNC_4 (struct dentry*,int ) ;
 int VAR_2 ;
 struct inode* FUNC_5 (int ) ;
 int FUNC_6 (struct inode*,struct dentry*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct inode*,char*) ;

struct dentry *FUNC_10(struct inode *VAR_3, struct dentry *VAR_4,
        struct nameidata *VAR_5)
{
 struct inode *VAR_6;
 char *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_5(VAR_3->i_sb);
 if (FUNC_1(VAR_6)) {
  VAR_8 = FUNC_2(VAR_6);
  goto out;
 }

 VAR_8 = FUNC_6(VAR_6, VAR_4);
 if (VAR_8)
  goto out_put;

 VAR_8 = -VAR_1;
 VAR_7 = FUNC_4(VAR_4, 0);
 if (VAR_7 == ((void*)0))
  goto out_put;

 VAR_8 = FUNC_9(VAR_6, VAR_7);
 FUNC_8(VAR_7);
 if (VAR_8 == -VAR_0) {
  FUNC_7(VAR_6);
  VAR_6 = ((void*)0);
 }
 else if (VAR_8)
  goto out_put;

 FUNC_3(VAR_4, VAR_6);
 VAR_4->d_op = &VAR_2;
 return ((void*)0);

 out_put:
 FUNC_7(VAR_6);
 out:
 return FUNC_0(VAR_8);
}
