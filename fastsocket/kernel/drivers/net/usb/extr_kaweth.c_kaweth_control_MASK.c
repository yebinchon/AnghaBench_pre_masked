
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {void* wLength; void* wIndex; void* wValue; void* bRequest; void* bRequestType; } ;
struct kaweth_device {int dev; } ;
typedef void* __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,unsigned int,struct usb_ctrlrequest*,void*,int ,int) ;
 int FUNC_4 (struct usb_ctrlrequest*) ;
 struct usb_ctrlrequest* FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct kaweth_device *VAR_3,
     unsigned int VAR_4,
     __u8 VAR_5,
     __u8 VAR_6,
     __u16 VAR_7,
     __u16 VAR_8,
     void *VAR_9,
     __u16 VAR_10,
     int VAR_11)
{
 struct usb_ctrlrequest *VAR_12;
 int VAR_13;

 FUNC_1("kaweth_control()");

 if(FUNC_2()) {
  FUNC_1("in_interrupt()");
  return -VAR_0;
 }

 VAR_12 = FUNC_5(sizeof(struct usb_ctrlrequest), VAR_2);

 if (!VAR_12) {
  FUNC_1("kmalloc() failed");
  return -VAR_1;
 }

 VAR_12->bRequestType = VAR_6;
 VAR_12->bRequest = VAR_5;
 VAR_12->wValue = FUNC_0(VAR_7);
 VAR_12->wIndex = FUNC_0(VAR_8);
 VAR_12->wLength = FUNC_0(VAR_10);

 VAR_13 = FUNC_3(VAR_3->dev,
          VAR_4,
          VAR_12,
          VAR_9,
          VAR_10,
          VAR_11);

 FUNC_4(VAR_12);
 return VAR_13;
}
