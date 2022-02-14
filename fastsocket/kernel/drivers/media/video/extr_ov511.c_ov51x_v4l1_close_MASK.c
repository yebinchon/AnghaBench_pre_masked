
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct usb_ov511 {scalar_t__ led_policy; int cbuf_lock; struct usb_ov511* cbuf; scalar_t__ dev; int lock; int user; } ;
struct file {struct video_device* private_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct usb_ov511*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_ov511*) ;
 int FUNC_5 (struct usb_ov511*,int ) ;
 int FUNC_6 (struct usb_ov511*) ;
 struct usb_ov511* FUNC_7 (struct video_device*) ;

__attribute__((used)) static int
FUNC_8(struct file *VAR_1)
{
 struct video_device *VAR_2 = VAR_1->private_data;
 struct usb_ov511 *VAR_3 = FUNC_7(VAR_2);

 FUNC_0(4, "ov511_close");

 FUNC_2(&VAR_3->lock);

 VAR_3->user--;
 FUNC_6(VAR_3);

 if (VAR_3->led_policy == VAR_0)
  FUNC_5(VAR_3, 0);

 if (VAR_3->dev)
  FUNC_4(VAR_3);

 FUNC_3(&VAR_3->lock);



 if (!VAR_3->dev) {
  FUNC_2(&VAR_3->cbuf_lock);
  FUNC_1(VAR_3->cbuf);
  VAR_3->cbuf = ((void*)0);
  FUNC_3(&VAR_3->cbuf_lock);

  FUNC_4(VAR_3);
  FUNC_1(VAR_3);
  VAR_3 = ((void*)0);
 }

 VAR_1->private_data = ((void*)0);
 return 0;
}
