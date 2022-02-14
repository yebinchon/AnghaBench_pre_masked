
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct usb_se401 {int maxframesize; scalar_t__ user; scalar_t__ streaming; TYPE_2__* frame; TYPE_1__* dev; scalar_t__ removed; int fbuf; } ;
struct file {struct video_device* private_data; } ;
struct TYPE_4__ {int grabstate; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct usb_se401*) ;
 int FUNC_3 (struct usb_se401*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2)
{
 struct video_device *VAR_3 = VAR_2->private_data;
 struct usb_se401 *VAR_4 = (struct usb_se401 *)VAR_3;
 int VAR_5;

 FUNC_1(VAR_4->fbuf, VAR_4->maxframesize * VAR_1);
 if (VAR_4->removed) {
  FUNC_0(&VAR_4->dev->dev, "device unregistered\n");
  FUNC_3(VAR_4);
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   VAR_4->frame[VAR_5].grabstate = VAR_0;
  if (VAR_4->streaming)
   FUNC_2(VAR_4);
  VAR_4->user = 0;
 }
 VAR_2->private_data = ((void*)0);
 return 0;
}
