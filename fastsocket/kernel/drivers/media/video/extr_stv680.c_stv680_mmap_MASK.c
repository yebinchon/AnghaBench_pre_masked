
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; } ;
struct video_device {int dummy; } ;
struct usb_stv {int maxframesize; int lock; scalar_t__ fbuf; int * udev; } ;
struct file {struct video_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*,unsigned long,unsigned long,int,int ) ;
 struct usb_stv* FUNC_3 (struct video_device*) ;
 unsigned long FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5 (struct file *VAR_6, struct vm_area_struct *VAR_7)
{
 struct video_device *VAR_8 = VAR_6->private_data;
 struct usb_stv *VAR_9 = FUNC_3(VAR_8);
 unsigned long VAR_10 = VAR_7->vm_start;
 unsigned long VAR_11 = VAR_7->vm_end-VAR_7->vm_start;
 unsigned long VAR_12, VAR_13;

 FUNC_0(&VAR_9->lock);

 if (VAR_9->udev == ((void*)0)) {
  FUNC_1(&VAR_9->lock);
  return -VAR_2;
 }
 if (VAR_11 > (((VAR_5 * VAR_9->maxframesize) + VAR_4 - 1)
      & ~(VAR_4 - 1))) {
  FUNC_1(&VAR_9->lock);
  return -VAR_1;
 }
 VAR_13 = (unsigned long) VAR_9->fbuf;
 while (VAR_11 > 0) {
  VAR_12 = FUNC_4((void *)VAR_13);
  if (FUNC_2(VAR_7, VAR_10, VAR_12, VAR_4, VAR_3)) {
   FUNC_1(&VAR_9->lock);
   return -VAR_0;
  }
  VAR_10 += VAR_4;
  VAR_13 += VAR_4;
  if (VAR_11 > VAR_4)
   VAR_11 -= VAR_4;
  else
   VAR_11 = 0;
 }
 FUNC_1(&VAR_9->lock);

 return 0;
}
