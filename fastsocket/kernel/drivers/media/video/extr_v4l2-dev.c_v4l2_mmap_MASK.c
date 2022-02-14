
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct video_device_shadow {scalar_t__ lock; } ;
struct video_device {TYPE_1__* fops; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int (* mmap ) (struct file*,struct vm_area_struct*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct file*,struct vm_area_struct*) ;
 struct video_device* FUNC_3 (struct file*) ;
 struct video_device_shadow* FUNC_4 (struct video_device*) ;
 scalar_t__ FUNC_5 (struct video_device*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 struct video_device *VAR_4 = FUNC_3(VAR_2);
 struct video_device_shadow *VAR_5 = FUNC_4(VAR_4);
 int VAR_6 = -VAR_0;

 if (!VAR_4->fops->mmap)
  return VAR_6;
 if (VAR_5 && VAR_5->lock && FUNC_0(VAR_5->lock))
  return -VAR_1;
 if (FUNC_5(VAR_4))
  VAR_6 = VAR_4->fops->mmap(VAR_2, VAR_3);
 if (VAR_5 && VAR_5->lock)
  FUNC_1(VAR_5->lock);
 return VAR_6;
}
