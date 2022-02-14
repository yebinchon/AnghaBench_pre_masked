
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hub_descriptor {int dummy; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct usb_device*) ;
 int FUNC_1 (struct usb_device*,int ,int ,int,unsigned int,int ,void*,int,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_device *VAR_9, void *VAR_10)
{
 int VAR_11, VAR_12, VAR_13;
 unsigned VAR_14;

 if (FUNC_0(VAR_9)) {
  VAR_14 = VAR_5;
  VAR_13 = VAR_6;
 } else {
  VAR_14 = VAR_3;
  VAR_13 = sizeof(struct usb_hub_descriptor);
 }

 for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
  VAR_12 = FUNC_1(VAR_9, FUNC_2(VAR_9, 0),
   VAR_7, VAR_2 | VAR_8,
   VAR_14 << 8, 0, VAR_10, VAR_13,
   VAR_1);
  if (VAR_12 >= (VAR_4 + 2))
   return VAR_12;
 }
 return -VAR_0;
}
