
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct usb_descriptor_header {int dummy; } ;
struct usb_config_descriptor {scalar_t__ bDescriptorType; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;
struct TYPE_2__ {unsigned int bNumConfigurations; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 struct usb_descriptor_header** VAR_6 ;
 struct usb_descriptor_header** VAR_7 ;
 int FUNC_0 (int *,scalar_t__*,int ,struct usb_descriptor_header const**) ;

__attribute__((used)) static int
FUNC_1(enum usb_device_speed VAR_8, u8 *VAR_9, u8 VAR_10, unsigned VAR_11,
  int VAR_12)
{
 int VAR_13;
 const struct usb_descriptor_header **VAR_14;
 VAR_14 = VAR_6;


 if (VAR_11 >= VAR_5.bNumConfigurations)
  return -VAR_0;


 if (!VAR_12)
  VAR_14++;

 VAR_13 = FUNC_0(&VAR_4, VAR_9, VAR_1,
   VAR_14);
 if (VAR_13 < 0)
  return VAR_13;
 ((struct usb_config_descriptor *) VAR_9)->bDescriptorType = VAR_10;
 return VAR_13;
}
