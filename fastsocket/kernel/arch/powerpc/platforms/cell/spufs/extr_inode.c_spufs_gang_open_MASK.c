
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct file {int * f_op; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_0 ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 () ;
 struct file* FUNC_3 (struct dentry*,struct vfsmount*,int ,int ) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (int,struct file*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct vfsmount*) ;
 int FUNC_8 (int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_9(struct dentry *VAR_2, struct vfsmount *VAR_3)
{
 int VAR_4;
 struct file *VAR_5;

 VAR_4 = FUNC_6();
 if (VAR_4 < 0) {
  FUNC_4(VAR_2);
  FUNC_7(VAR_3);
  goto out;
 }

 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_0, FUNC_2());
 if (FUNC_0(VAR_5)) {
  FUNC_8(VAR_4);
  VAR_4 = FUNC_1(VAR_5);
  goto out;
 }

 VAR_5->f_op = &VAR_1;
 FUNC_5(VAR_4, VAR_5);
out:
 return VAR_4;
}
