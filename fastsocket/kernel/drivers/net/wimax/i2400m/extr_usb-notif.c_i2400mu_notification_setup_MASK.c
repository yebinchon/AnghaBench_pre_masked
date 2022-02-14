
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct i2400mu {int notif_urb; int usb_dev; TYPE_1__* usb_iface; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct device*,char*,struct i2400mu*,int) ;
 int FUNC_1 (int,struct device*,char*,struct i2400mu*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int,char*,int ,int ,struct i2400mu*,int ) ;
 int FUNC_7 (int ) ;
 struct usb_endpoint_descriptor* FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int) ;

int FUNC_11(struct i2400mu *VAR_6)
{
 struct device *VAR_7 = &VAR_6->usb_iface->dev;
 int VAR_8, VAR_9 = 0;
 struct usb_endpoint_descriptor *VAR_10;
 char *VAR_11;

 FUNC_1(4, VAR_7, "(i2400m %p)\n", VAR_6);
 VAR_11 = FUNC_4(VAR_4, VAR_2 | VAR_1);
 if (VAR_11 == ((void*)0)) {
  FUNC_2(VAR_7, "notification: buffer allocation failed\n");
  VAR_9 = -VAR_0;
  goto error_buf_alloc;
 }

 VAR_6->notif_urb = FUNC_5(0, VAR_2);
 if (!VAR_6->notif_urb) {
  VAR_9 = -VAR_0;
  FUNC_2(VAR_7, "notification: cannot allocate URB\n");
  goto error_alloc_urb;
 }
 VAR_10 = FUNC_8(VAR_6->usb_iface, VAR_3);
 VAR_8 = FUNC_9(VAR_6->usb_dev, VAR_10->bEndpointAddress);
 FUNC_6(VAR_6->notif_urb, VAR_6->usb_dev, VAR_8,
    VAR_11, VAR_4,
    VAR_5, VAR_6, VAR_10->bInterval);
 VAR_9 = FUNC_10(VAR_6->notif_urb, VAR_2);
 if (VAR_9 != 0) {
  FUNC_2(VAR_7, "notification: cannot submit URB: %d\n", VAR_9);
  goto error_submit;
 }
 FUNC_0(4, VAR_7, "(i2400m %p) = %d\n", VAR_6, VAR_9);
 return VAR_9;

error_submit:
 FUNC_7(VAR_6->notif_urb);
error_alloc_urb:
 FUNC_3(VAR_11);
error_buf_alloc:
 FUNC_0(4, VAR_7, "(i2400m %p) = %d\n", VAR_6, VAR_9);
 return VAR_9;
}
