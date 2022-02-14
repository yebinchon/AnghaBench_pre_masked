
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(__u32 VAR_2, enum usb_device_speed VAR_3)
{

 if ((VAR_2 < 0) || (VAR_2 >= VAR_1)) {
  FUNC_0("port %u\n", VAR_2);
  return -VAR_0;
 }


 switch (VAR_3) {
 case 129:
 case 131:
 case 130:
 case 128:
  break;
 default:
  FUNC_0("speed %d\n", VAR_3);
  return -VAR_0;
 }

 return 0;
}
