
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct kstat {int dummy; } ;
struct inode {scalar_t__ i_version; int i_ino; } ;
struct dentry {struct inode* d_inode; } ;


 int FUNC_0 (char*,int ,unsigned long long) ;
 int FUNC_1 (struct inode*,struct kstat*) ;

int FUNC_2(struct vfsmount *VAR_0, struct dentry *VAR_1,
        struct kstat *VAR_2)
{
 struct inode *VAR_3;

 VAR_3 = VAR_1->d_inode;

 FUNC_0("{ ino=%lu v=%llu }", VAR_3->i_ino,
  (unsigned long long)VAR_3->i_version);

 FUNC_1(VAR_3, VAR_2);
 return 0;
}
