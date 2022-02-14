
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_gadget {int dummy; } ;
struct usb_config_descriptor {int bDescriptorType; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct usb_gadget *VAR_4,
  u8 *VAR_5, u8 VAR_6, unsigned VAR_7)
{
 int VAR_8;


 if (VAR_7 != 0) {
  return -VAR_0;
 }
 VAR_8 = FUNC_0(&VAR_2,
   VAR_5, VAR_1, VAR_3);
 if (VAR_8 < 0) {
  return VAR_8;
 }
 ((struct usb_config_descriptor *)VAR_5)->bDescriptorType = VAR_6;
 return VAR_8;
}
