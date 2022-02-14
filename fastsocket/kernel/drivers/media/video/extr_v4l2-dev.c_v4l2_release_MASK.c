
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device_shadow {scalar_t__ lock; } ;
struct video_device {TYPE_1__* fops; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int (* release ) (struct file*) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct file*) ;
 struct video_device* FUNC_3 (struct file*) ;
 struct video_device_shadow* FUNC_4 (struct video_device*) ;
 int FUNC_5 (struct video_device*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, struct file *VAR_1)
{
 struct video_device *VAR_2 = FUNC_3(VAR_1);
 struct video_device_shadow *VAR_3 = FUNC_4(VAR_2);
 int VAR_4 = 0;

 if (VAR_2->fops->release) {
  if (VAR_3 && VAR_3->lock)
   FUNC_0(VAR_3->lock);
  VAR_2->fops->release(VAR_1);
  if (VAR_3 && VAR_3->lock)
   FUNC_1(VAR_3->lock);
 }



 FUNC_5(VAR_2);
 return VAR_4;
}
