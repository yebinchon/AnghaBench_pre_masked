
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct snd_line6_pcm* line6pcm; TYPE_2__* usbdev; } ;
struct usb_line6_toneport {TYPE_3__ line6; } ;
struct usb_interface {int dev; } ;
struct snd_line6_pcm {int dummy; } ;
struct TYPE_4__ {scalar_t__ idProduct; } ;
struct TYPE_5__ {TYPE_1__ descriptor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct snd_line6_pcm*) ;
 int FUNC_3 (struct snd_line6_pcm*) ;
 struct usb_line6_toneport* FUNC_4 (struct usb_interface*) ;

void FUNC_5(struct usb_interface *VAR_3)
{
 struct usb_line6_toneport *VAR_4;

 if (VAR_3 == ((void*)0))
  return;
 VAR_4 = FUNC_4(VAR_3);

 if (VAR_4->line6.usbdev->descriptor.idProduct != VAR_0) {
  FUNC_0(&VAR_3->dev, &VAR_2);
  FUNC_0(&VAR_3->dev, &VAR_1);
 }

 if (VAR_4 != ((void*)0)) {
  struct snd_line6_pcm *VAR_5 = VAR_4->line6.line6pcm;

  if (VAR_5 != ((void*)0)) {
   FUNC_3(VAR_5);
   FUNC_2(VAR_5);
  }
 }

 FUNC_1(VAR_3);
}
