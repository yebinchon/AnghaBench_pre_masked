
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int sensor; int lightfreq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct usb_ov511*,int,int) ;
 int FUNC_3 (struct usb_ov511*,int,int,int) ;

__attribute__((used)) static int
FUNC_4(struct usb_ov511 *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_0(4, "%d Hz", VAR_3);

 if (VAR_3 == 60)
  VAR_4 = 1;
 else if (VAR_3 == 50)
  VAR_4 = 0;
 else {
  FUNC_1("Invalid light freq (%d Hz)", VAR_3);
  return -VAR_0;
 }

 switch (VAR_2->sensor) {
 case 132:
  FUNC_3(VAR_2, 0x2a, VAR_4?0x00:0x80, 0x80);
  FUNC_2(VAR_2, 0x2b, VAR_4?0x00:0xac);
  FUNC_3(VAR_2, 0x13, 0x10, 0x10);
  FUNC_3(VAR_2, 0x13, 0x00, 0x10);
  break;
 case 131:
 case 130:
 case 129:
  FUNC_3(VAR_2, 0x2a, VAR_4?0x00:0x80, 0x80);
  FUNC_2(VAR_2, 0x2b, VAR_4?0x00:0xac);
  FUNC_3(VAR_2, 0x76, 0x01, 0x01);
  break;
 case 134:
 case 133:
  FUNC_2(VAR_2, 0x2b, VAR_4?0xa8:0x28);
  FUNC_2(VAR_2, 0x2a, VAR_4?0x84:0xa4);
  break;
 case 136:
 case 135:
 case 128:
  FUNC_0(5, "Unsupported with this sensor");
  return -VAR_1;
 default:
  FUNC_1("Sensor not supported for set_light_freq");
  return -VAR_0;
 }

 VAR_2->lightfreq = VAR_3;

 return 0;
}
