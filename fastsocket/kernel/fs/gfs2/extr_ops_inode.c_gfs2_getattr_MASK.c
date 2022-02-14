
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct kstat {int dummy; } ;
struct inode {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct inode*,struct kstat*) ;
 int FUNC_2 (struct gfs2_holder*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,struct gfs2_holder*) ;

__attribute__((used)) static int FUNC_5(struct vfsmount *VAR_2, struct dentry *VAR_3,
   struct kstat *VAR_4)
{
 struct inode *VAR_5 = VAR_3->d_inode;
 struct gfs2_inode *VAR_6 = FUNC_0(VAR_5);
 struct gfs2_holder VAR_7;
 int VAR_8;
 int VAR_9 = 0;

 if (FUNC_3(VAR_6->i_gl) == ((void*)0)) {
  VAR_8 = FUNC_4(VAR_6->i_gl, VAR_1, VAR_0, &VAR_7);
  if (VAR_8)
   return VAR_8;
  VAR_9 = 1;
 }

 FUNC_1(VAR_5, VAR_4);
 if (VAR_9)
  FUNC_2(&VAR_7);

 return 0;
}
