
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct mcs_cb {struct usb_device* usbdev; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct usb_device*,int ,int ,int ,int ,int ,int *,int ,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct mcs_cb *VAR_3, __u16 VAR_4, __u16 VAR_5)
{
 struct usb_device *VAR_6 = VAR_3->usbdev;
 return FUNC_1(VAR_6, FUNC_2(VAR_6, 0), VAR_1,
          VAR_2, VAR_5, VAR_4, ((void*)0), 0,
          FUNC_0(VAR_0));
}
