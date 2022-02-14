
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {char const* name; scalar_t__ len; int hash; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; struct qstr d_name; } ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char const*,scalar_t__,int ) ;
 int FUNC_3 (struct inode*,char const*,scalar_t__) ;
 int FUNC_4 (struct inode*,struct dentry*,int ,int) ;
 int FUNC_5 (int ,struct qstr*,int *,struct qstr*) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_4, struct dentry *VAR_5, const char *VAR_6)
{
 struct qstr VAR_7;
 struct qstr VAR_8 = VAR_5->d_name;
 struct inode *VAR_9;
 int VAR_10;

 VAR_8.hash = FUNC_2(VAR_5->d_name.name, VAR_5->d_name.len, 0);

 VAR_7.name = VAR_6;
 VAR_7.len = FUNC_6(VAR_6);

 VAR_10 = FUNC_5(FUNC_0(VAR_4), &VAR_8, ((void*)0), &VAR_7);
 if (VAR_10)
  goto err_out_exit;

 VAR_10 = FUNC_4(VAR_4, VAR_5, 0, VAR_0 | VAR_3 | VAR_1 | VAR_2);
 if (VAR_10)
  goto err_out_exit;

 VAR_9 = VAR_5->d_inode;

 VAR_10 = FUNC_3(VAR_9, VAR_6, VAR_7.len + 1);
 if (VAR_10)
  goto err_out_put;

 return 0;

err_out_put:
 FUNC_1(VAR_9);
err_out_exit:
 return VAR_10;
}
