
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int buf; } ;
struct usb_gadget {int dummy; } ;
struct lun {scalar_t__ registered; int dev; } ;
struct fsg_dev {int nluns; scalar_t__ state; int ep0; TYPE_1__* buffhds; int thread_notifier; struct lun* luns; int atomic_bitflags; struct usb_request* ep0req; } ;
struct TYPE_2__ {int buf; } ;


 int FUNC_0 (struct fsg_dev*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct lun*) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 struct fsg_dev* FUNC_6 (struct usb_gadget*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct fsg_dev*,int ) ;
 int FUNC_9 (struct usb_gadget*,int *) ;
 int FUNC_10 (int ,struct usb_request*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct usb_gadget *VAR_6)
{
 struct fsg_dev *VAR_7 = FUNC_6(VAR_6);
 int VAR_8;
 struct lun *VAR_9;
 struct usb_request *VAR_10 = VAR_7->ep0req;

 FUNC_0(VAR_7, "unbind\n");
 FUNC_1(VAR_3, &VAR_7->atomic_bitflags);


 for (VAR_8 = 0; VAR_8 < VAR_7->nluns; ++VAR_8) {
  VAR_9 = &VAR_7->luns[VAR_8];
  if (VAR_9->registered) {
   FUNC_4(&VAR_9->dev, &VAR_5);
   FUNC_4(&VAR_9->dev, &VAR_4);
   FUNC_2(VAR_9);
   FUNC_5(&VAR_9->dev);
   VAR_9->registered = 0;
  }
 }


 if (VAR_7->state != VAR_1) {
  FUNC_8(VAR_7, VAR_0);
  FUNC_11(&VAR_7->thread_notifier);


  FUNC_3(&VAR_7->thread_notifier);
 }


 for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8)
  FUNC_7(VAR_7->buffhds[VAR_8].buf);


 if (VAR_10) {
  FUNC_7(VAR_10->buf);
  FUNC_10(VAR_7->ep0, VAR_10);
 }

 FUNC_9(VAR_6, ((void*)0));
}
