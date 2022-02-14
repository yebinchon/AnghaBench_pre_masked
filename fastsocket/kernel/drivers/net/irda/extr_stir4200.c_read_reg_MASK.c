
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct stir_cb {struct usb_device* usbdev; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_device*,int ,int ,int,int ,int ,int *,int ,int ) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct stir_cb *VAR_5, __u16 VAR_6,
      __u8 *VAR_7, __u16 VAR_8)
{
 struct usb_device *VAR_9 = VAR_5->usbdev;

 return FUNC_0(VAR_9, FUNC_1(VAR_9, 0),
          VAR_1,
          VAR_2 | VAR_4 | VAR_3,
          0, VAR_6, VAR_7, VAR_8,
          VAR_0);
}
