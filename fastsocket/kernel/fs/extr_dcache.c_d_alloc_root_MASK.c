
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {char* name; int len; } ;
struct inode {int i_sb; } ;
struct dentry {struct dentry* d_parent; int d_sb; } ;


 struct dentry* FUNC_0 (int *,struct qstr const*) ;
 int FUNC_1 (struct dentry*,struct inode*) ;

struct dentry * FUNC_2(struct inode * VAR_0)
{
 struct dentry *VAR_1 = ((void*)0);

 if (VAR_0) {
  static const struct qstr VAR_2 = { .name = "/", .len = 1 };

  VAR_1 = FUNC_0(((void*)0), &VAR_2);
  if (VAR_1) {
   VAR_1->d_sb = VAR_0->i_sb;
   VAR_1->d_parent = VAR_1;
   FUNC_1(VAR_1, VAR_0);
  }
 }
 return VAR_1;
}
