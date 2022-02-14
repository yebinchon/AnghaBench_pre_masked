
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct kiocb {struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct TYPE_2__ {int dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct dentry {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 struct vfsmount* FUNC_1 (int ) ;
 int FUNC_2 (struct kiocb*,struct iovec const*,unsigned long,int ) ;
 int FUNC_3 (struct vfsmount*,struct dentry*) ;
 int FUNC_4 (struct kiocb*) ;

__attribute__((used)) static ssize_t FUNC_5(struct kiocb *VAR_1,
    const struct iovec *VAR_2,
    unsigned long VAR_3, loff_t VAR_4)
{
 int VAR_5;
 struct dentry *VAR_6;
 struct vfsmount *VAR_7;
 struct file *VAR_8 = VAR_1->ki_filp;

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);




 if (-VAR_0 == VAR_5)
  VAR_5 = FUNC_4(VAR_1);
 if (VAR_5 >= 0) {
  VAR_6 = FUNC_0(VAR_8->f_path.dentry);
  VAR_7 = FUNC_1(VAR_8->f_path.dentry);
  FUNC_3(VAR_7, VAR_6);
 }
 return VAR_5;
}
