
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct usb_ov511 {scalar_t__ led_policy; int lock; scalar_t__ user; int decomp_ops; scalar_t__ compress; TYPE_1__* frame; scalar_t__ sub_flag; } ;
struct file {struct video_device* private_data; } ;
struct TYPE_2__ {scalar_t__ bytes_read; int grabstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_ov511*) ;
 int FUNC_4 (struct usb_ov511*) ;
 int FUNC_5 (struct usb_ov511*) ;
 int FUNC_6 (struct usb_ov511*,int) ;
 int FUNC_7 (struct usb_ov511*) ;
 int FUNC_8 (struct usb_ov511*) ;
 struct video_device* FUNC_9 (struct file*) ;
 struct usb_ov511* FUNC_10 (struct video_device*) ;

__attribute__((used)) static int
FUNC_11(struct file *VAR_5)
{
 struct video_device *VAR_6 = FUNC_9(VAR_5);
 struct usb_ov511 *VAR_7 = FUNC_10(VAR_6);
 int VAR_8, VAR_9;

 FUNC_0(4, "opening");

 FUNC_1(&VAR_7->lock);

 VAR_8 = -VAR_0;
 if (VAR_7->user)
  goto out;

 VAR_7->sub_flag = 0;


 VAR_8 = FUNC_7(VAR_7);
 if (VAR_8 < 0)
  goto out;


 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_7->frame[VAR_9].grabstate = VAR_1;
  VAR_7->frame[VAR_9].bytes_read = 0;
 }



 if (VAR_7->compress && !VAR_7->decomp_ops) {
  VAR_8 = FUNC_8(VAR_7);
  if (VAR_8 && !VAR_4)
   goto out;
 }

 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8 < 0)
  goto out;

 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8) {
  FUNC_4(VAR_7);
  goto out;
 }

 VAR_7->user++;
 VAR_5->private_data = VAR_6;

 if (VAR_7->led_policy == VAR_2)
  FUNC_6(VAR_7, 1);

out:
 FUNC_2(&VAR_7->lock);
 return VAR_8;
}
