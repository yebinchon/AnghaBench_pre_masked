
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct usb_stv {int user; int maxframesize; int fbuf; } ;
struct file {struct video_device* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct usb_stv*) ;
 int FUNC_4 () ;
 struct video_device* FUNC_5 (struct file*) ;
 struct usb_stv* FUNC_6 (struct video_device*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_2)
{
 struct video_device *VAR_3 = FUNC_5(VAR_2);
 struct usb_stv *VAR_4 = FUNC_6(VAR_3);
 int VAR_5 = 0;


 FUNC_1();
 VAR_4->user = 1;
 VAR_5 = FUNC_3 (VAR_4);

 if (VAR_5 >= 0) {
  VAR_4->fbuf = FUNC_2 (VAR_4->maxframesize * VAR_1);
  if (!VAR_4->fbuf) {
   FUNC_0 (0, "STV(e): Could not rvmalloc frame bufer");
   VAR_5 = -VAR_0;
  }
  VAR_2->private_data = VAR_3;
 }
 if (VAR_5)
  VAR_4->user = 0;
 FUNC_4();

 return VAR_5;
}
