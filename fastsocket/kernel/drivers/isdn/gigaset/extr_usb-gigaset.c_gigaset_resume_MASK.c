
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_4__ {TYPE_1__* usb; } ;
struct cardstate {int connected; int dev; TYPE_2__ hw; } ;
struct TYPE_3__ {int read_urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 struct cardstate* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_2)
{
 struct cardstate *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;


 VAR_3->connected = 1;
 VAR_4 = FUNC_3(VAR_3->hw.usb->read_urb, VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_3->dev, "Could not submit read URB (error %d)\n", -VAR_4);
  return VAR_4;
 }

 FUNC_1(VAR_0, "resume complete");
 return 0;
}
