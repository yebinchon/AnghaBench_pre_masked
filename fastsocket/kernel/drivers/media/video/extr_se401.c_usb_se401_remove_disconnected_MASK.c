
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_se401 {struct usb_se401* height; struct usb_se401* width; int camera_name; TYPE_3__* dev; int * inturb; TYPE_2__* scratch; TYPE_1__* sbuf; int ** urb; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {struct usb_se401* data; } ;
struct TYPE_4__ {struct usb_se401* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct usb_se401*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct usb_se401 *VAR_2)
{
 int VAR_3;

 VAR_2->dev = ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_2->urb[VAR_3]) {
   FUNC_3(VAR_2->urb[VAR_3]);
   FUNC_2(VAR_2->urb[VAR_3]);
   VAR_2->urb[VAR_3] = ((void*)0);
   FUNC_1(VAR_2->sbuf[VAR_3].data);
  }

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_1(VAR_2->scratch[VAR_3].data);

 if (VAR_2->inturb) {
  FUNC_3(VAR_2->inturb);
  FUNC_2(VAR_2->inturb);
 }
 FUNC_0(&VAR_2->dev->dev, "%s disconnected", VAR_2->camera_name);


 FUNC_1(VAR_2->width);
 FUNC_1(VAR_2->height);
 FUNC_1(VAR_2);
}
