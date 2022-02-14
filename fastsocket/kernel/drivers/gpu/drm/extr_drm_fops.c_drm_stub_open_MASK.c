
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
typedef struct file_operations {int (* open ) (struct inode*,struct file*) ;} const file_operations ;
struct file {struct file_operations const* f_op; } ;
struct drm_minor {struct drm_device* dev; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_2__ {struct file_operations const* fops; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (struct file_operations const*) ;
 int FUNC_3 (struct file_operations const*) ;
 struct drm_minor* FUNC_4 (int *,int) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct inode*,struct file*) ;

int FUNC_9(struct inode *VAR_3, struct file *VAR_4)
{
 struct drm_device *VAR_5 = ((void*)0);
 struct drm_minor *VAR_6;
 int VAR_7 = FUNC_5(VAR_3);
 int VAR_8 = -VAR_0;
 const struct file_operations *VAR_9;

 FUNC_0("\n");

 FUNC_6(&VAR_1);
 VAR_6 = FUNC_4(&VAR_2, VAR_7);
 if (!VAR_6)
  goto out;

 if (!(VAR_5 = VAR_6->dev))
  goto out;

 if (FUNC_1(VAR_5))
  goto out;

 VAR_9 = VAR_4->f_op;
 VAR_4->f_op = FUNC_2(VAR_5->driver->fops);
 if (VAR_4->f_op == ((void*)0)) {
  VAR_4->f_op = VAR_9;
  goto out;
 }
 if (VAR_4->f_op->open && (VAR_8 = VAR_4->f_op->open(VAR_3, VAR_4))) {
  FUNC_3(VAR_4->f_op);
  VAR_4->f_op = FUNC_2(VAR_9);
 }
 FUNC_3(VAR_9);

out:
 FUNC_7(&VAR_1);
 return VAR_8;
}
