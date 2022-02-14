
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int sensor; unsigned short brightness; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;






 int FUNC_1 (struct usb_ov511*,int ) ;

__attribute__((used)) static int
FUNC_2(struct usb_ov511 *VAR_2, unsigned short *VAR_3)
{
 int VAR_4;

 switch (VAR_2->sensor) {
 case 131:
 case 129:
 case 130:
 case 133:
 case 132:
  VAR_4 = FUNC_1(VAR_2, VAR_1);
  if (VAR_4 < 0)
   return VAR_4;
  else
   *VAR_3 = VAR_4 << 8;
  break;
 case 128:
  *VAR_3 = VAR_2->brightness;
  break;
 default:
  FUNC_0(3, "Unsupported with this sensor");
  return -VAR_0;
 }

 FUNC_0(3, "%d", *VAR_3);
 VAR_2->brightness = *VAR_3;

 return 0;
}
