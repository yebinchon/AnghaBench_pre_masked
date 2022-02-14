
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {struct usb_device* udev; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (void*,void*,int ) ;
 int FUNC_3 (struct usb_device*,int ,int ,int ,int,int ,void*,int ,int ) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct usbnet *VAR_5, u16 VAR_6, u16 VAR_7, void *VAR_8)
{
 struct usb_device *VAR_9 = VAR_5->udev;
 int VAR_10;
 void *VAR_11;

 VAR_11 = FUNC_1(VAR_7, VAR_1);
 if (VAR_11 == ((void*)0))
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_9, FUNC_4(VAR_9, 0), VAR_4,
         VAR_3, 0x0000, VAR_6, VAR_11,
         VAR_7, VAR_2);
 FUNC_2(VAR_8, VAR_11, VAR_7);
 FUNC_0(VAR_11);

 return VAR_10;
}
