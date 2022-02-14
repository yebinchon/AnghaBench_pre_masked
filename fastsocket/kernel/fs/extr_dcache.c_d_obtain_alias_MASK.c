
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {char* name; } ;
struct inode {int d_lock; TYPE_1__* i_sb; int d_hash; int i_dentry; int d_alias; int d_flags; struct inode* d_inode; TYPE_1__* d_sb; struct inode* d_parent; } ;
struct dentry {int d_lock; TYPE_1__* i_sb; int d_hash; int i_dentry; int d_alias; int d_flags; struct dentry* d_inode; TYPE_1__* d_sb; struct dentry* d_parent; } ;
struct TYPE_2__ {int s_anon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (int *,struct qstr const*) ;
 struct inode* FUNC_5 (struct inode*) ;
 int VAR_4 ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct inode*,struct inode*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

struct dentry *FUNC_13(struct inode *VAR_5)
{
 static const struct qstr VAR_6 = { .name = "" };
 struct dentry *VAR_7;
 struct dentry *VAR_8;

 if (!VAR_5)
  return FUNC_1(-VAR_3);
 if (FUNC_2(VAR_5))
  return FUNC_0(VAR_5);

 VAR_8 = FUNC_5(VAR_5);
 if (VAR_8)
  goto out_iput;

 VAR_7 = FUNC_4(((void*)0), &VAR_6);
 if (!VAR_7) {
  VAR_8 = FUNC_1(-VAR_2);
  goto out_iput;
 }
 VAR_7->d_parent = VAR_7;

 FUNC_11(&VAR_4);
 VAR_8 = FUNC_3(VAR_5);
 if (VAR_8) {
  FUNC_12(&VAR_4);
  FUNC_6(VAR_7);
  goto out_iput;
 }


 FUNC_11(&VAR_7->d_lock);
 VAR_7->d_sb = VAR_5->i_sb;
 VAR_7->d_inode = VAR_5;
 VAR_7->d_flags |= VAR_0;
 VAR_7->d_flags &= ~VAR_1;
 FUNC_9(&VAR_7->d_alias, &VAR_5->i_dentry);
 FUNC_7(&VAR_7->d_hash, &VAR_5->i_sb->s_anon);
 FUNC_12(&VAR_7->d_lock);
 FUNC_12(&VAR_4);

 FUNC_10(VAR_7, VAR_5);
 return VAR_7;

 out_iput:
 if (VAR_8 && !FUNC_2(VAR_8))
  FUNC_10(VAR_8, VAR_5);
 FUNC_8(VAR_5);
 return VAR_8;
}
