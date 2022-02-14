
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 char* FUNC_5 (struct dentry*,int ) ;
 int FUNC_6 (char*,int,int ,int ) ;
 struct inode* FUNC_7 (int ) ;
 int FUNC_8 (struct inode*,struct dentry*) ;
 int FUNC_9 (struct inode*,int,int ) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct inode*,char*) ;

int FUNC_13(struct inode *VAR_1, struct dentry *VAR_2, int VAR_3, dev_t VAR_4)
{
 struct inode *VAR_5;
 char *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_7(VAR_1->i_sb);
 if (FUNC_0(VAR_5)) {
  VAR_7 = FUNC_3(VAR_5);
  goto out;
 }

 VAR_7 = FUNC_8(VAR_5, VAR_2);
 if (VAR_7)
  goto out_put;

 VAR_7 = -VAR_0;
 VAR_6 = FUNC_5(VAR_2, 0);
 if (VAR_6 == ((void*)0))
  goto out_put;

 FUNC_9(VAR_5, VAR_3, VAR_4);
 VAR_7 = FUNC_6(VAR_6, VAR_3, FUNC_1(VAR_4), FUNC_2(VAR_4));
 if (VAR_7)
  goto out_free;

 VAR_7 = FUNC_12(VAR_5, VAR_6);
 FUNC_11(VAR_6);
 if (VAR_7)
  goto out_put;

 FUNC_4(VAR_2, VAR_5);
 return 0;

 out_free:
 FUNC_11(VAR_6);
 out_put:
 FUNC_10(VAR_5);
 out:
 return VAR_7;
}
