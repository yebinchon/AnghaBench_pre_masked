
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_pgoff; TYPE_4__* vm_ops; } ;
struct TYPE_8__ {int bdev; } ;
struct radeon_device {TYPE_3__ mman; } ;
struct file {struct drm_file* private_data; } ;
struct drm_file {TYPE_2__* minor; } ;
struct TYPE_9__ {int * fault; } ;
struct TYPE_7__ {TYPE_1__* dev; } ;
struct TYPE_6__ {struct radeon_device* dev_private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,struct vm_area_struct*) ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_1 (struct file*,struct vm_area_struct*,int *) ;
 TYPE_4__* VAR_4 ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct file *VAR_5, struct vm_area_struct *VAR_6)
{
 struct drm_file *VAR_7;
 struct radeon_device *VAR_8;
 int VAR_9;

 if (FUNC_2(VAR_6->vm_pgoff < VAR_0)) {
  return FUNC_0(VAR_5, VAR_6);
 }

 VAR_7 = VAR_5->private_data;
 VAR_8 = VAR_7->minor->dev->dev_private;
 if (VAR_8 == ((void*)0)) {
  return -VAR_1;
 }
 VAR_9 = FUNC_1(VAR_5, VAR_6, &VAR_8->mman.bdev);
 if (FUNC_2(VAR_9 != 0)) {
  return VAR_9;
 }
 if (FUNC_2(VAR_4 == ((void*)0))) {
  VAR_4 = VAR_6->vm_ops;
  VAR_3 = *VAR_4;
  VAR_3.fault = &VAR_2;
 }
 VAR_6->vm_ops = &VAR_3;
 return 0;
}
