
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_8__ {struct cx231xx* alt_max_pkt_size; } ;
struct TYPE_7__ {struct cx231xx* alt_max_pkt_size; } ;
struct TYPE_6__ {struct cx231xx* alt_max_pkt_size; } ;
struct TYPE_5__ {struct cx231xx* alt_max_pkt_size; } ;
struct cx231xx {TYPE_4__ ts1_mode; TYPE_3__ sliced_cc_mode; TYPE_2__ vbi_mode; TYPE_1__ video_mode; scalar_t__ users; int lock; int state; int wait_stream; int wait_frame; scalar_t__ USE_ISO; int vdev; int open; int v4l2_dev; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx231xx*) ;
 int FUNC_1 (struct cx231xx*) ;
 int FUNC_2 (struct cx231xx*) ;
 int FUNC_3 (struct cx231xx*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct cx231xx*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct cx231xx* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (struct usb_interface*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct usb_interface *VAR_2)
{
 struct cx231xx *VAR_3;

 VAR_3 = FUNC_8(VAR_2);
 FUNC_9(VAR_2, ((void*)0));

 if (!VAR_3)
  return;

 if (!VAR_3->udev)
  return;


 FUNC_10(&VAR_3->v4l2_dev);



 FUNC_6(&VAR_3->lock);

 FUNC_13(&VAR_3->open);

 if (VAR_3->users) {
  FUNC_4
      ("device %s is open! Deregistration and memory "
       "deallocation are deferred on close.\n",
       FUNC_11(VAR_3->vdev));

  VAR_3->state |= VAR_1;
  if (VAR_3->USE_ISO)
   FUNC_3(VAR_3);
  else
   FUNC_2(VAR_3);
  VAR_3->state |= VAR_0;
  FUNC_12(&VAR_3->wait_frame);
  FUNC_12(&VAR_3->wait_stream);
 } else {
  VAR_3->state |= VAR_0;
  FUNC_1(VAR_3);
 }

 FUNC_0(VAR_3);

 FUNC_7(&VAR_3->lock);

 if (!VAR_3->users) {
  FUNC_5(VAR_3->video_mode.alt_max_pkt_size);
  FUNC_5(VAR_3->vbi_mode.alt_max_pkt_size);
  FUNC_5(VAR_3->sliced_cc_mode.alt_max_pkt_size);
  FUNC_5(VAR_3->ts1_mode.alt_max_pkt_size);
  FUNC_5(VAR_3);
  VAR_3 = ((void*)0);
 }
}
