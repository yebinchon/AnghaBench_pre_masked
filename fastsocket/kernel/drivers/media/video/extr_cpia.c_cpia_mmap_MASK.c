
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; } ;
struct video_device {int dummy; } ;
struct file {struct video_device* private_data; } ;
struct cam_data {int busy_lock; scalar_t__ frame_buf; int ops; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (char*,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_1 (struct cam_data*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 struct cam_data* FUNC_5 (struct video_device*) ;
 unsigned long FUNC_6 (void*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_8, struct vm_area_struct *VAR_9)
{
 struct video_device *VAR_10 = VAR_8->private_data;
 unsigned long VAR_11 = VAR_9->vm_start;
 unsigned long VAR_12 = VAR_9->vm_end - VAR_9->vm_start;
 unsigned long VAR_13, VAR_14;
 struct cam_data *VAR_15 = FUNC_5(VAR_10);
 int VAR_16;

 if (!VAR_15 || !VAR_15->ops)
  return -VAR_4;

 FUNC_0("cpia_mmap: %ld\n", VAR_12);

 if (VAR_12 > VAR_5*VAR_0)
  return -VAR_3;

 if (!VAR_15 || !VAR_15->ops)
  return -VAR_4;


 if (FUNC_2(&VAR_15->busy_lock))
  return -VAR_2;

 if (!VAR_15->frame_buf) {
  if ((VAR_16 = FUNC_1(VAR_15))) {
   FUNC_3(&VAR_15->busy_lock);
   return VAR_16;
  }
 }

 VAR_14 = (unsigned long)(VAR_15->frame_buf);
 while (VAR_12 > 0) {
  VAR_13 = FUNC_6((void *)VAR_14);
  if (FUNC_4(VAR_9, VAR_11, VAR_13, VAR_7, VAR_6)) {
   FUNC_3(&VAR_15->busy_lock);
   return -VAR_1;
  }
  VAR_11 += VAR_7;
  VAR_14 += VAR_7;
  if (VAR_12 > VAR_7)
   VAR_12 -= VAR_7;
  else
   VAR_12 = 0;
 }

 FUNC_0("cpia_mmap: %ld\n", VAR_12);
 FUNC_3(&VAR_15->busy_lock);

 return 0;
}
