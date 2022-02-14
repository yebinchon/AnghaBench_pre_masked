
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct urb {int dummy; } ;
struct i2400m {int bm_ack_buf; } ;
struct i2400mu {int usb_dev; int usb_iface; struct i2400m i2400m; } ;
struct completion {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct urb*,int ,int,int ,int ,int ,struct completion*,int ) ;
 struct usb_endpoint_descriptor* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct urb*,int ) ;

__attribute__((used)) static
int FUNC_4(struct i2400mu *VAR_4, struct urb *VAR_5,
    struct completion *VAR_6)
{
 struct i2400m *VAR_7 = &VAR_4->i2400m;
 struct usb_endpoint_descriptor *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_4->usb_iface, VAR_1);
 VAR_9 = FUNC_2(VAR_4->usb_dev, VAR_8->bEndpointAddress);
 FUNC_0(VAR_5, VAR_4->usb_dev, VAR_9,
    VAR_7->bm_ack_buf, VAR_2,
    VAR_3, VAR_6,
    VAR_8->bInterval);
 return FUNC_3(VAR_5, VAR_0);
}
