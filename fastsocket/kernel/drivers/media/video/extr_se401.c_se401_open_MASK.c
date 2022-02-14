
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct usb_se401 {int user; int maxframesize; scalar_t__ fbuf; } ;
struct file {struct video_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 struct video_device* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3)
{
 struct video_device *VAR_4 = FUNC_3(VAR_3);
 struct usb_se401 *VAR_5 = (struct usb_se401 *)VAR_4;
 int VAR_6 = 0;

 FUNC_0();
 if (VAR_5->user) {
  FUNC_2();
  return -VAR_0;
 }
 VAR_5->fbuf = FUNC_1(VAR_5->maxframesize * VAR_2);
 if (VAR_5->fbuf)
  VAR_3->private_data = VAR_4;
 else
  VAR_6 = -VAR_1;
 VAR_5->user = !VAR_6;
 FUNC_2();

 return VAR_6;
}
