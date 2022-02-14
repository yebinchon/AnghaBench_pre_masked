
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct kstat {int blocks; } ;
struct dentry {int d_inode; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ,struct kstat*) ;
 int FUNC_3 (int ,int ,struct kstat*) ;

int FUNC_4(struct vfsmount *VAR_0, struct dentry *VAR_1,
       struct kstat *VAR_2)
{
 struct kstat VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(FUNC_1(VAR_1),
    FUNC_0(VAR_1), &VAR_3);
 if (!VAR_4) {
  FUNC_2(VAR_1->d_inode, VAR_2);
  VAR_2->blocks = VAR_3.blocks;
 }
 return VAR_4;
}
