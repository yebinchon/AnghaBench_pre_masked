
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ status; } ;
struct TYPE_10__ {TYPE_3__ power; } ;
struct usb_interface {int needs_altsetting0; scalar_t__ needs_remote_wakeup; int condition; TYPE_6__* altsetting; TYPE_4__ dev; TYPE_2__* cur_altsetting; } ;
struct usb_driver {int (* disconnect ) (struct usb_interface*) ;int soft_unbind; } ;
struct usb_device {int dummy; } ;
struct device {int driver; } ;
struct TYPE_11__ {int bInterfaceNumber; } ;
struct TYPE_12__ {TYPE_5__ desc; } ;
struct TYPE_7__ {scalar_t__ bAlternateSetting; } ;
struct TYPE_8__ {TYPE_1__ desc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct usb_interface*) ;
 struct usb_driver* FUNC_3 (int ) ;
 struct usb_interface* FUNC_4 (struct device*) ;
 int FUNC_5 (struct usb_device*) ;
 int FUNC_6 (struct usb_device*) ;
 int FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (struct usb_device*,struct usb_interface*,int) ;
 int FUNC_9 (struct usb_device*,struct usb_interface*,int) ;
 int FUNC_10 (struct usb_device*,int ,int ) ;
 int FUNC_11 (struct usb_interface*,int *) ;
 int FUNC_12 (struct usb_device*) ;
 int FUNC_13 (struct usb_device*) ;

__attribute__((used)) static int FUNC_14(struct device *VAR_3)
{
 struct usb_driver *VAR_4 = FUNC_3(VAR_3->driver);
 struct usb_interface *VAR_5 = FUNC_4(VAR_3);
 struct usb_device *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_5->condition = VAR_1;


 VAR_6 = FUNC_0(VAR_5);
 VAR_7 = FUNC_5(VAR_6);






 VAR_9 = FUNC_12(VAR_6);




 if (!VAR_4->soft_unbind)
  FUNC_8(VAR_6, VAR_5, 0);

 VAR_4->disconnect(VAR_5);
 FUNC_7(VAR_5);







 if (VAR_5->cur_altsetting->desc.bAlternateSetting == 0) {



  FUNC_9(VAR_6, VAR_5, 0);
 } else if (!VAR_7 && VAR_5->dev.power.status == VAR_0) {
  VAR_8 = FUNC_10(VAR_6, VAR_5->altsetting[0].
    desc.bInterfaceNumber, 0);
  if (VAR_8 < 0)
   VAR_5->needs_altsetting0 = 1;
 } else {
  VAR_5->needs_altsetting0 = 1;
 }
 FUNC_11(VAR_5, ((void*)0));

 VAR_5->condition = VAR_2;
 FUNC_1(VAR_5);
 VAR_5->needs_remote_wakeup = 0;


 if (!VAR_9)
  FUNC_13(VAR_6);

 if (!VAR_7)
  FUNC_6(VAR_6);

 return 0;
}
