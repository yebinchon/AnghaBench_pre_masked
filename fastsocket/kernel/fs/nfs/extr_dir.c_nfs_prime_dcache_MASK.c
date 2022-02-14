
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {int len; char* name; int hash; } ;
struct nfs_entry {int len; char* name; int fattr; int fh; } ;
struct inode {int d_sb; int d_op; struct inode* d_inode; } ;
struct dentry {int d_sb; int d_op; struct dentry* d_inode; } ;
struct TYPE_2__ {int dentry_ops; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct inode*,struct qstr*) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct inode*,struct qstr*) ;
 struct inode* FUNC_5 (struct inode*,struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (char*,int) ;
 struct inode* FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct inode*,int ) ;
 scalar_t__ FUNC_10 (struct inode*,struct nfs_entry*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*,int ) ;

__attribute__((used)) static
void FUNC_13(struct dentry *VAR_0, struct nfs_entry *VAR_1)
{
 struct qstr VAR_2 = {
  .len = VAR_1->len,
  .name = VAR_1->name,
 };
 struct dentry *VAR_3;
 struct dentry *VAR_4;
 struct inode *VAR_5 = VAR_0->d_inode;
 struct inode *VAR_6;

 if (VAR_2.name[0] == '.') {
  if (VAR_2.len == 1)
   return;
  if (VAR_2.len == 2 && VAR_2.name[1] == '.')
   return;
 }
 VAR_2.hash = FUNC_7(VAR_2.name, VAR_2.len);

 VAR_3 = FUNC_4(VAR_0, &VAR_2);
 if (VAR_3 != ((void*)0)) {
  if (FUNC_10(VAR_3, VAR_1)) {
   FUNC_12(VAR_3, FUNC_11(VAR_5));
   FUNC_9(VAR_3->d_inode, VAR_1->fattr);
   goto out;
  } else {
   FUNC_3(VAR_3);
   FUNC_6(VAR_3);
  }
 }

 VAR_3 = FUNC_2(VAR_0, &VAR_2);
 if (VAR_3 == ((void*)0))
  return;

 VAR_3->d_op = FUNC_1(VAR_5)->dentry_ops;
 VAR_6 = FUNC_8(VAR_3->d_sb, VAR_1->fh, VAR_1->fattr);
 if (FUNC_0(VAR_6))
  goto out;

 VAR_4 = FUNC_5(VAR_3, VAR_6);
 if (FUNC_0(VAR_4))
  goto out;
 else if (VAR_4) {
  FUNC_12(VAR_4, FUNC_11(VAR_5));
  FUNC_6(VAR_4);
 } else
  FUNC_12(VAR_3, FUNC_11(VAR_5));

out:
 FUNC_6(VAR_3);
}
