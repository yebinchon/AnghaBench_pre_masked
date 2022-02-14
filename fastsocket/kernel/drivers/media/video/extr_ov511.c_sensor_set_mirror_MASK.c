
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int sensor; int mirror; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct usb_ov511*,int,int,int) ;

__attribute__((used)) static int
FUNC_3(struct usb_ov511 *VAR_2, int VAR_3)
{
 FUNC_0(4, " (%s)", VAR_3 ? "turn on" : "turn off");

 switch (VAR_2->sensor) {
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
  FUNC_2(VAR_2, 0x12, VAR_3?0x40:0x00, 0x40);
  break;
 case 136:
 case 135:
 case 128:
  FUNC_0(5, "Unsupported with this sensor");
  return -VAR_1;
 default:
  FUNC_1("Sensor not supported for set_mirror");
  return -VAR_0;
 }

 VAR_2->mirror = VAR_3;

 return 0;
}
