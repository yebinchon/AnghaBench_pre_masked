
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial {TYPE_2__** port; struct usb_device* dev; } ;
struct TYPE_3__ {int bcdDevice; } ;
struct usb_device {TYPE_1__ descriptor; int dev; } ;
struct belkin_sa_private {int bad_flow_control; scalar_t__ last_msr; scalar_t__ last_lsr; scalar_t__ control_state; int lock; } ;
struct TYPE_4__ {int write_wait; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *) ;
 struct belkin_sa_private* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,struct belkin_sa_private*) ;

__attribute__((used)) static int FUNC_6(struct usb_serial *VAR_1)
{
 struct usb_device *VAR_2 = VAR_1->dev;
 struct belkin_sa_private *VAR_3;


 VAR_3 = FUNC_2(sizeof(struct belkin_sa_private), VAR_0);
 if (!VAR_3)
  return -1;

 FUNC_4(&VAR_3->lock);
 VAR_3->control_state = 0;
 VAR_3->last_lsr = 0;
 VAR_3->last_msr = 0;

 VAR_3->bad_flow_control =
  (FUNC_3(VAR_2->descriptor.bcdDevice) <= 0x0206) ? 1 : 0;
 FUNC_0(&VAR_2->dev, "bcdDevice: %04x, bfc: %d\n",
     FUNC_3(VAR_2->descriptor.bcdDevice),
     VAR_3->bad_flow_control);

 FUNC_1(&VAR_1->port[0]->write_wait);
 FUNC_5(VAR_1->port[0], VAR_3);

 return 0;
}
