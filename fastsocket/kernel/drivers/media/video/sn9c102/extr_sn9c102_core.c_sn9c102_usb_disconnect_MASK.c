
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct sn9c102_device {int kref; int wait_open; int state; int wait_stream; int wait_frame; TYPE_1__* v4ldev; scalar_t__ users; } ;
struct TYPE_2__ {int num; int name; } ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct sn9c102_device*) ;
 int FUNC_4 (int *) ;
 struct sn9c102_device* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct usb_interface* VAR_4)
{
 struct sn9c102_device* VAR_5;

 FUNC_1(&VAR_2);

 VAR_5 = FUNC_5(VAR_4);

 FUNC_0(2, "Disconnecting %s...", VAR_5->v4ldev->name);

 if (VAR_5->users) {
  FUNC_0(2, "Device /dev/video%d is open! Deregistration and "
         "memory deallocation are deferred.",
      VAR_5->v4ldev->num);
  VAR_5->state |= VAR_1;
  FUNC_3(VAR_5);
  VAR_5->state |= VAR_0;
  FUNC_7(&VAR_5->wait_frame);
  FUNC_6(&VAR_5->wait_stream);
 } else
  VAR_5->state |= VAR_0;

 FUNC_8(&VAR_5->wait_open);

 FUNC_2(&VAR_5->kref, VAR_3);

 FUNC_4(&VAR_2);
}
