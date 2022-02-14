
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct kstat {int dummy; } ;
struct inode {int dummy; } ;
struct fuse_conn {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct fuse_conn*) ;
 int FUNC_1 (struct inode*,struct kstat*,int *,int *) ;
 struct fuse_conn* FUNC_2 (struct inode*) ;

__attribute__((used)) static int FUNC_3(struct vfsmount *VAR_1, struct dentry *VAR_2,
   struct kstat *VAR_3)
{
 struct inode *VAR_4 = VAR_2->d_inode;
 struct fuse_conn *VAR_5 = FUNC_2(VAR_4);

 if (!FUNC_0(VAR_5))
  return -VAR_0;

 return FUNC_1(VAR_4, VAR_3, ((void*)0), ((void*)0));
}
