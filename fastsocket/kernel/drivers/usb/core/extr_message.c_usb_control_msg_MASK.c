
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct usb_ctrlrequest {void* wLength; void* wIndex; void* wValue; void* bRequest; void* bRequestType; } ;
typedef void* __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct usb_ctrlrequest*) ;
 struct usb_ctrlrequest* FUNC_2 (int,int ) ;
 int FUNC_3 (struct usb_device*,unsigned int,struct usb_ctrlrequest*,void*,int ,int) ;

int FUNC_4(struct usb_device *VAR_2, unsigned int VAR_3, __u8 VAR_4,
      __u8 VAR_5, __u16 VAR_6, __u16 VAR_7, void *VAR_8,
      __u16 VAR_9, int VAR_10)
{
 struct usb_ctrlrequest *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(sizeof(struct usb_ctrlrequest), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->bRequestType = VAR_5;
 VAR_11->bRequest = VAR_4;
 VAR_11->wValue = FUNC_0(VAR_6);
 VAR_11->wIndex = FUNC_0(VAR_7);
 VAR_11->wLength = FUNC_0(VAR_9);



 VAR_12 = FUNC_3(VAR_2, VAR_3, VAR_11, VAR_8, VAR_9, VAR_10);

 FUNC_1(VAR_11);

 return VAR_12;
}
