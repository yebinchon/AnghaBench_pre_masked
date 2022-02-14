
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* cur_window; void* info3; void* info2; void* info1; } ;
struct whc_qset {int max_seq; int max_burst; TYPE_4__ qh; int max_packet; TYPE_3__* ep; } ;
struct usb_wireless_ep_comp_descriptor {int bMaxSequence; int bMaxBurst; } ;
struct usb_device {int portnum; } ;
struct urb {int pipe; TYPE_2__* ep; struct usb_device* dev; } ;
struct TYPE_7__ {scalar_t__ extra; } ;
struct TYPE_5__ {int wMaxPacketSize; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 void* FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct whc_qset *VAR_3, struct urb *VAR_4)
{
 struct usb_device *VAR_5 = VAR_4->dev;
 struct usb_wireless_ep_comp_descriptor *VAR_6;
 bool VAR_7;

 VAR_7 = FUNC_13(VAR_4->pipe);

 VAR_3->max_packet = FUNC_10(VAR_4->ep->desc.wMaxPacketSize);

 VAR_6 = (struct usb_wireless_ep_comp_descriptor *)VAR_3->ep->extra;
 if (VAR_6) {
  VAR_3->max_seq = VAR_6->bMaxSequence;
  VAR_3->max_burst = VAR_6->bMaxBurst;
 } else {
  VAR_3->max_seq = 2;
  VAR_3->max_burst = 1;
 }

 VAR_3->qh.info1 = FUNC_9(
  FUNC_1(FUNC_12(VAR_4->pipe))
  | (VAR_7 ? VAR_1 : VAR_0)
  | FUNC_11(VAR_4->pipe)
  | FUNC_0(FUNC_14(VAR_5->portnum))
  | FUNC_2(VAR_3->max_packet)
  );
 VAR_3->qh.info2 = FUNC_9(
  FUNC_3(VAR_3->max_burst)
  | FUNC_4(0)
  | FUNC_5(3)
  | FUNC_6(3)
  | FUNC_7(VAR_3->max_seq - 1)
  );




 VAR_3->qh.info3 = FUNC_9(
  VAR_2
  | FUNC_8(0)
  );

 VAR_3->qh.cur_window = FUNC_9((1 << VAR_3->max_burst) - 1);
}
