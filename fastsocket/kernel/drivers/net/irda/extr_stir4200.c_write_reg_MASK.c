
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct stir_cb {TYPE_1__* netdev; struct usb_device* usbdev; } ;
typedef int __u8 ;
typedef int __u16 ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (struct usb_device*,int ,int ,int,int ,int ,int *,int ,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct stir_cb *VAR_5, __u16 VAR_6, __u8 VAR_7)
{
 struct usb_device *VAR_8 = VAR_5->usbdev;

 FUNC_0("%s: write reg %d = 0x%x\n",
   VAR_5->netdev->name, VAR_6, VAR_7);
 return FUNC_1(VAR_8, FUNC_2(VAR_8, 0),
          VAR_1,
          VAR_2|VAR_4|VAR_3,
          VAR_7, VAR_6, ((void*)0), 0,
          VAR_0);
}
