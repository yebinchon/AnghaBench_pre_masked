
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ov511 {int nr; int curframe; int cbuf_lock; struct usb_ov511* cbuf; int user; int * dev; int lock; scalar_t__ streaming; int wq; TYPE_1__* frame; scalar_t__ vdev; } ;
struct usb_interface {int dummy; } ;
struct TYPE_2__ {int wq; int grabstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct usb_ov511*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (struct usb_ov511*) ;
 int FUNC_5 (struct usb_ov511*) ;
 struct usb_ov511* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_interface*,int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct usb_interface *VAR_3)
{
 struct usb_ov511 *VAR_4 = FUNC_6(VAR_3);
 int VAR_5;

 FUNC_0(3, "");

 FUNC_2(&VAR_4->lock);
 FUNC_7 (VAR_3, ((void*)0));

 if (!VAR_4) {
  FUNC_3(&VAR_4->lock);
  return;
 }


 VAR_2 &= ~(1 << VAR_4->nr);

 if (VAR_4->vdev)
  FUNC_8(VAR_4->vdev);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_4->frame[VAR_5].grabstate = VAR_0;

 VAR_4->curframe = -1;


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_9(&VAR_4->frame[VAR_5].wq);

 FUNC_9(&VAR_4->wq);

 VAR_4->streaming = 0;
 FUNC_5(VAR_4);
 FUNC_3(&VAR_4->lock);

 VAR_4->dev = ((void*)0);


 if (VAR_4 && !VAR_4->user) {
  FUNC_2(&VAR_4->cbuf_lock);
  FUNC_1(VAR_4->cbuf);
  VAR_4->cbuf = ((void*)0);
  FUNC_3(&VAR_4->cbuf_lock);

  FUNC_4(VAR_4);
  FUNC_1(VAR_4);
  VAR_4 = ((void*)0);
 }

 FUNC_0(3, "Disconnect complete");
}
