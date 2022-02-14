
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; } ;
struct video_device {int dummy; } ;
struct usb_ov511 {int lock; scalar_t__ fbuf; int maxheight; int maxwidth; int * dev; } ;
struct file {struct video_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct vm_area_struct*,unsigned long,unsigned long,int,int ) ;
 struct usb_ov511* FUNC_5 (struct video_device*) ;
 unsigned long FUNC_6 (void*) ;

__attribute__((used)) static int
FUNC_7(struct file *VAR_7, struct vm_area_struct *VAR_8)
{
 struct video_device *VAR_9 = VAR_7->private_data;
 unsigned long VAR_10 = VAR_8->vm_start;
 unsigned long VAR_11 = VAR_8->vm_end - VAR_8->vm_start;
 struct usb_ov511 *VAR_12 = FUNC_5(VAR_9);
 unsigned long VAR_13, VAR_14;

 if (VAR_12->dev == ((void*)0))
  return -VAR_3;

 FUNC_1(4, "mmap: %ld (%lX) bytes", VAR_11, VAR_11);

 if (VAR_11 > (((VAR_4
        * FUNC_0(VAR_12->maxwidth, VAR_12->maxheight)
        + VAR_6 - 1) & ~(VAR_6 - 1))))
  return -VAR_2;

 if (FUNC_2(&VAR_12->lock))
  return -VAR_1;

 VAR_14 = (unsigned long)VAR_12->fbuf;
 while (VAR_11 > 0) {
  VAR_13 = FUNC_6((void *)VAR_14);
  if (FUNC_4(VAR_8, VAR_10, VAR_13, VAR_6, VAR_5)) {
   FUNC_3(&VAR_12->lock);
   return -VAR_0;
  }
  VAR_10 += VAR_6;
  VAR_14 += VAR_6;
  if (VAR_11 > VAR_6)
   VAR_11 -= VAR_6;
  else
   VAR_11 = 0;
 }

 FUNC_3(&VAR_12->lock);
 return 0;
}
