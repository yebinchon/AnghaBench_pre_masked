
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct usb_gadget {int speed; } ;
struct usb_descriptor_header {int dummy; } ;
struct usb_config_descriptor {scalar_t__ bDescriptorType; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct usb_descriptor_header** VAR_6 ;
 scalar_t__ FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (struct usb_gadget*) ;
 struct usb_descriptor_header** VAR_7 ;
 int FUNC_2 (int *,scalar_t__*,int ,struct usb_descriptor_header const**) ;

__attribute__((used)) static int FUNC_3(struct usb_gadget *VAR_8,
  u8 *VAR_9, u8 VAR_10, unsigned VAR_11)
{
 enum usb_device_speed VAR_12 = VAR_8->speed;
 int VAR_13;
 const struct usb_descriptor_header **VAR_14;

 if (VAR_11 > 0)
  return -VAR_0;

 if (FUNC_0(VAR_8) && VAR_10 == VAR_2)
  VAR_12 = (VAR_3 + VAR_4) - VAR_12;
 if (FUNC_0(VAR_8) && VAR_12 == VAR_4)
  VAR_14 = VAR_7;
 else
  VAR_14 = VAR_6;


 if (!FUNC_1(VAR_8))
  VAR_14++;

 VAR_13 = FUNC_2(&VAR_5, VAR_9, VAR_1, VAR_14);
 ((struct usb_config_descriptor *) VAR_9)->bDescriptorType = VAR_10;
 return VAR_13;
}
