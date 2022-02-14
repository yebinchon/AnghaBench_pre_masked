
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int sensor; unsigned char exposure; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct usb_ov511*,int) ;

__attribute__((used)) static int
FUNC_3(struct usb_ov511 *VAR_2, unsigned char *VAR_3)
{
 int VAR_4;

 switch (VAR_2->sensor) {
 case 132:
 case 134:
 case 133:
 case 131:
 case 130:
 case 129:
  VAR_4 = FUNC_2(VAR_2, 0x10);
  if (VAR_4 < 0)
   return VAR_4;
  else
   *VAR_3 = VAR_4;
  break;
 case 136:
 case 135:
 case 128:
  VAR_3 = ((void*)0);
  FUNC_0(3, "Unsupported with this sensor");
  return -VAR_1;
 default:
  FUNC_1("Sensor not supported for get_exposure");
  return -VAR_0;
 }

 FUNC_0(3, "%d", *VAR_3);
 VAR_2->exposure = *VAR_3;

 return 0;
}
