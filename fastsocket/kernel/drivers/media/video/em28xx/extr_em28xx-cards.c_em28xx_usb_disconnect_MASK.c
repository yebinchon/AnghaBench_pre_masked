
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct em28xx {struct em28xx* alt_max_pkt_size; scalar_t__ users; int lock; int state; int wait_stream; int wait_frame; TYPE_1__* vdev; int v4l2_dev; int open; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct em28xx*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct em28xx*) ;
 int FUNC_3 (struct em28xx*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct em28xx*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct em28xx* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (struct usb_interface*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct usb_interface *VAR_2)
{
 struct em28xx *VAR_3;

 VAR_3 = FUNC_8(VAR_2);
 FUNC_9(VAR_2, ((void*)0));

 if (!VAR_3)
  return;

 FUNC_1("disconnecting %s\n", VAR_3->vdev->name);



 FUNC_6(&VAR_3->lock);

 FUNC_13(&VAR_3->open);

 FUNC_10(&VAR_3->v4l2_dev);

 if (VAR_3->users) {
  FUNC_4
      ("device %s is open! Deregistration and memory "
       "deallocation are deferred on close.\n",
       FUNC_11(VAR_3->vdev));

  VAR_3->state |= VAR_1;
  FUNC_3(VAR_3);
  VAR_3->state |= VAR_0;
  FUNC_12(&VAR_3->wait_frame);
  FUNC_12(&VAR_3->wait_stream);
 } else {
  VAR_3->state |= VAR_0;
  FUNC_2(VAR_3);
 }

 FUNC_0(VAR_3);

 FUNC_7(&VAR_3->lock);

 if (!VAR_3->users) {
  FUNC_5(VAR_3->alt_max_pkt_size);
  FUNC_5(VAR_3);
 }
}
