
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_4__ {TYPE_1__* usb; } ;
struct cardstate {TYPE_2__ hw; int write_tasklet; scalar_t__ connected; } ;
typedef int pm_message_t ;
struct TYPE_3__ {int bulk_out_urb; int read_urb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 struct cardstate* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_1, pm_message_t VAR_2)
{
 struct cardstate *VAR_3 = FUNC_2(VAR_1);


 VAR_3->connected = 0;
 FUNC_3(VAR_3->hw.usb->read_urb);
 FUNC_1(&VAR_3->write_tasklet);
 FUNC_3(VAR_3->hw.usb->bulk_out_urb);

 FUNC_0(VAR_0, "suspend complete");
 return 0;
}
