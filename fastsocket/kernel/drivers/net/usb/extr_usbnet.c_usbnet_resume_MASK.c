
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ qlen; int lock; } ;
struct usbnet {int flags; int bh; TYPE_1__* net; TYPE_3__ txq; int delay; int wait; int intf; int deferred; int suspend_count; } ;
struct usb_interface {int dummy; } ;
struct urb {scalar_t__ context; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int trans_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct usbnet*) ;
 int FUNC_1 (TYPE_3__*,struct sk_buff*) ;
 int FUNC_2 (struct usbnet*,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct sk_buff*) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct usbnet*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct urb*) ;
 struct urb* FUNC_16 (int *) ;
 struct usbnet* FUNC_17 (struct usb_interface*) ;
 int FUNC_18 (struct urb*,int ) ;

int FUNC_19 (struct usb_interface *VAR_7)
{
 struct usbnet *VAR_8 = FUNC_17(VAR_7);
 struct sk_buff *VAR_9;
 struct urb *VAR_10;
 int VAR_11;

 if (!--VAR_8->suspend_count) {

  FUNC_2(VAR_8, VAR_5);

  FUNC_9(&VAR_8->txq.lock);
  while ((VAR_10 = FUNC_16(&VAR_8->deferred))) {

   VAR_9 = (struct sk_buff *)VAR_10->context;
   VAR_11 = FUNC_18(VAR_10, VAR_4);
   if (VAR_11 < 0) {
    FUNC_4(VAR_9);
    FUNC_15(VAR_10);
    FUNC_14(VAR_8->intf);
   } else {
    VAR_8->net->trans_start = VAR_6;
    FUNC_1(&VAR_8->txq, VAR_9);
   }
  }

  FUNC_8();
  FUNC_3(VAR_1, &VAR_8->flags);
  FUNC_10(&VAR_8->txq.lock);

  if (FUNC_12(VAR_2, &VAR_8->flags)) {

   if (!VAR_8->wait &&
    FUNC_5(VAR_8->net) &&
    !FUNC_13(&VAR_8->delay) &&
    !FUNC_12(VAR_3, &VAR_8->flags))
     FUNC_7(VAR_8, VAR_5);

   if (!(VAR_8->txq.qlen >= FUNC_0(VAR_8)))
    FUNC_6(VAR_8->net);
   FUNC_11 (&VAR_8->bh);
  }
 }

 FUNC_3(VAR_0, &VAR_8->flags);

 return 0;
}
