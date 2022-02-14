
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vicam_camera {int open_count; int cam_lock; struct usb_device* udev; struct vicam_camera* cntrlbuf; int framebuf; struct vicam_camera* raw_image; } ;
struct usb_device {int dummy; } ;
struct file {struct vicam_camera* private_data; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vicam_camera*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct vicam_camera*,int ) ;

__attribute__((used)) static int
FUNC_6(struct file *VAR_2)
{
 struct vicam_camera *VAR_3 = VAR_2->private_data;
 int VAR_4;
 struct usb_device *VAR_5;

 FUNC_0("close\n");





 FUNC_5(VAR_3, 0);

 FUNC_1(VAR_3->raw_image);
 FUNC_4(VAR_3->framebuf, VAR_1 * VAR_0);
 FUNC_1(VAR_3->cntrlbuf);

 FUNC_2(&VAR_3->cam_lock);

 VAR_3->open_count--;
 VAR_4 = VAR_3->open_count;
 VAR_5 = VAR_3->udev;

 FUNC_3(&VAR_3->cam_lock);

 if (!VAR_4 && !VAR_5) {
  FUNC_1(VAR_3);
 }

 return 0;
}
