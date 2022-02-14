
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct qstr {int len; int name; int hash; } ;
struct inode {int dummy; } ;
struct dentry {TYPE_3__* d_op; TYPE_1__* d_inode; } ;
struct cifs_fattr {int dummy; } ;
struct TYPE_7__ {int (* d_hash ) (struct dentry*,struct qstr*) ;} ;
struct TYPE_6__ {scalar_t__ nocase; } ;
struct TYPE_5__ {struct super_block* i_sb; } ;


 int FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (int,char*,int ) ;
 TYPE_3__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 struct inode* FUNC_3 (struct super_block*,struct cifs_fattr*) ;
 TYPE_2__* FUNC_4 (int ) ;
 struct dentry* FUNC_5 (struct dentry*,struct qstr*) ;
 int FUNC_6 (struct dentry*) ;
 struct dentry* FUNC_7 (struct dentry*,struct qstr*) ;
 struct dentry* FUNC_8 (struct dentry*,struct inode*) ;
 int FUNC_9 (struct dentry*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct dentry*,struct qstr*) ;

__attribute__((used)) static struct dentry *
FUNC_12(struct dentry *VAR_2, struct qstr *VAR_3,
      struct cifs_fattr *VAR_4)
{
 struct dentry *VAR_5, *VAR_6;
 struct inode *VAR_7;
 struct super_block *VAR_8 = VAR_2->d_inode->i_sb;

 FUNC_2(1, "For %s", VAR_3->name);

 if (VAR_2->d_op && VAR_2->d_op->d_hash)
  VAR_2->d_op->d_hash(VAR_2, VAR_3);
 else
  VAR_3->hash = FUNC_10(VAR_3->name, VAR_3->len);

 VAR_5 = FUNC_7(VAR_2, VAR_3);
 if (VAR_5) {

  if (VAR_5->d_inode != ((void*)0))
   return VAR_5;
  FUNC_6(VAR_5);
  FUNC_9(VAR_5);
 }

 VAR_5 = FUNC_5(VAR_2, VAR_3);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_7 = FUNC_3(VAR_8, VAR_4);
 if (!VAR_7) {
  FUNC_9(VAR_5);
  return ((void*)0);
 }

 if (FUNC_4(FUNC_0(VAR_8))->nocase)
  VAR_5->d_op = &VAR_0;
 else
  VAR_5->d_op = &VAR_1;

 VAR_6 = FUNC_8(VAR_5, VAR_7);
 if (VAR_6 != ((void*)0)) {
  FUNC_9(VAR_5);
  if (FUNC_1(VAR_6))
   return ((void*)0);
  VAR_5 = VAR_6;
 }

 return VAR_5;
}
