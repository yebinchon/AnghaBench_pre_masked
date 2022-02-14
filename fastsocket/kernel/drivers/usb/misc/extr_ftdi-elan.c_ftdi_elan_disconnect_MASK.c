
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int minor; } ;
struct usb_ftdi {int disconnected; TYPE_1__* udev; scalar_t__ registered; scalar_t__ initialized; scalar_t__ enumerated; scalar_t__ synchronized; int platform_dev; struct usb_class_driver* class; } ;
struct usb_class_driver {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usb_ftdi*) ;
 int FUNC_3 (struct usb_ftdi*) ;
 int FUNC_4 (struct usb_ftdi*) ;
 int FUNC_5 (struct usb_ftdi*) ;
 int FUNC_6 (struct usb_ftdi*) ;
 int FUNC_7 (struct usb_ftdi*) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (struct usb_interface*,struct usb_class_driver*) ;
 struct usb_ftdi* FUNC_10 (struct usb_interface*) ;
 int FUNC_11 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_12(struct usb_interface *VAR_3)
{
        struct usb_ftdi *VAR_4 = FUNC_10(VAR_3);
        VAR_4->disconnected += 1;
        if (VAR_4->class) {
                int VAR_5 = VAR_3->minor;
                struct usb_class_driver *VAR_6 = VAR_4->class;
                FUNC_11(VAR_3, ((void*)0));
                FUNC_9(VAR_3, VAR_6);
                FUNC_0(&VAR_4->udev->dev, "USB FTDI U132 jtag interface on min"
                        "or %d now disconnected\n", VAR_5);
        } else {
                FUNC_7(VAR_4);
                FUNC_2(VAR_4);
                FUNC_6(VAR_4);
                FUNC_3(VAR_4);
                FUNC_4(VAR_4);
                if (VAR_4->registered) {
                        FUNC_8(&VAR_4->platform_dev);
                        VAR_4->synchronized = 0;
                        VAR_4->enumerated = 0;
                        VAR_4->initialized = 0;
                        VAR_4->registered = 0;
                }
                FUNC_1(VAR_2);
                FUNC_1(VAR_0);
                FUNC_1(VAR_1);
                VAR_4->disconnected += 1;
                FUNC_11(VAR_3, ((void*)0));
                FUNC_0(&VAR_4->udev->dev, "USB FTDI U132 host controller inter"
                        "face now disconnected\n");
        }
        FUNC_5(VAR_4);
}
