
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct usb_stv {int maxframesize; scalar_t__ removed; scalar_t__ user; int fbuf; scalar_t__ streaming; TYPE_1__* frame; } ;
struct file {struct video_device* private_data; } ;
struct TYPE_2__ {int grabstate; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct usb_stv*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct usb_stv*) ;
 int FUNC_4 (struct usb_stv*) ;
 struct usb_stv* FUNC_5 (struct video_device*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_2)
{
 struct video_device *VAR_3 = VAR_2->private_data;
 struct usb_stv *VAR_4 = FUNC_5(VAR_3);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_4->frame[VAR_5].grabstate = VAR_0;
 if (VAR_4->streaming)
  FUNC_3 (VAR_4);

 if ((VAR_5 = FUNC_4 (VAR_4)) < 0)
  FUNC_0 (1, "STV(e): stop_video failed in stv_close");

 FUNC_2 (VAR_4->fbuf, VAR_4->maxframesize * VAR_1);
 VAR_4->user = 0;

 if (VAR_4->removed) {
  FUNC_1(VAR_4);
  VAR_4 = ((void*)0);
  FUNC_0 (0, "STV(i): device unregistered");
 }
 VAR_2->private_data = ((void*)0);
 return 0;
}
