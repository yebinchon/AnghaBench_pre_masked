
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbvision_frame {scalar_t__ scanstate; long scanlength; int grabstate; int frame; int sequence; int timestamp; } ;
struct usb_usbvision {scalar_t__ isoc_mode; int wait_frame; int frame_num; int queue_lock; struct usbvision_frame* cur_frame; int outqueue; } ;
typedef enum parse_state { ____Placeholder_parse_state } parse_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (struct usb_usbvision*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct usb_usbvision*) ;
 int FUNC_7 (struct usb_usbvision*,long*) ;
 int FUNC_8 (struct usb_usbvision*,long*) ;
 int FUNC_9 (struct usb_usbvision*,long*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct usb_usbvision *VAR_11)
{
 struct usbvision_frame *VAR_12;
 enum parse_state VAR_13;
 long VAR_14 = 0;
 unsigned long VAR_15;

 VAR_12 = VAR_11->cur_frame;

 FUNC_0(VAR_0, "parsing len=%d\n", FUNC_3(VAR_11));

 while (1) {
  VAR_13 = VAR_8;
  if (FUNC_3(VAR_11)) {
   if (VAR_12->scanstate == VAR_10) {
    VAR_13 = FUNC_6(VAR_11);
   } else if (VAR_12->scanstate == VAR_9) {
    if (VAR_11->isoc_mode == VAR_2)
     VAR_13 = FUNC_8(VAR_11, &VAR_14);
    else if (VAR_11->isoc_mode == VAR_3)
     VAR_13 = FUNC_9(VAR_11, &VAR_14);
    else if (VAR_11->isoc_mode == VAR_1)
     VAR_13 = FUNC_7(VAR_11, &VAR_14);
   }
  }
  if (VAR_13 == VAR_6)
   continue;
  if ((VAR_13 == VAR_7) || (VAR_13 == VAR_8))
   break;
  return;
 }

 if (VAR_13 == VAR_7) {
  VAR_12->grabstate = VAR_4;
  FUNC_1(&(VAR_12->timestamp));
  VAR_12->sequence = VAR_11->frame_num;

  FUNC_4(&VAR_11->queue_lock, VAR_15);
  FUNC_2(&(VAR_12->frame), &VAR_11->outqueue);
  VAR_11->cur_frame = ((void*)0);
  FUNC_5(&VAR_11->queue_lock, VAR_15);

  VAR_11->frame_num++;


  if (FUNC_10(&VAR_11->wait_frame)) {
   FUNC_0(VAR_0, "Wake up !");
   FUNC_11(&VAR_11->wait_frame);
  }
 } else {
  VAR_12->grabstate = VAR_5;
 }


 VAR_12->scanlength += VAR_14;
}
