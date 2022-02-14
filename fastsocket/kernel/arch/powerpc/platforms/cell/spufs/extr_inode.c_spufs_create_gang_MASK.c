
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct inode {int i_mutex; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct vfsmount*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,struct dentry*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct inode*,struct dentry*,int) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_1,
   struct dentry *VAR_2,
   struct vfsmount *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_7(VAR_1, VAR_2, VAR_4 & VAR_0);
 if (VAR_5)
  goto out;





 VAR_5 = FUNC_6(FUNC_1(VAR_2), FUNC_3(VAR_3));
 if (VAR_5 < 0) {
  int VAR_6 = FUNC_5(VAR_1, VAR_2);
  FUNC_0(VAR_6);
 }

out:
 FUNC_4(&VAR_1->i_mutex);
 FUNC_2(VAR_2);
 return VAR_5;
}
