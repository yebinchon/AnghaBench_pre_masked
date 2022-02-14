
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int sensor; unsigned short hue; scalar_t__ stop_during_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,...) ;





 int FUNC_1 (struct usb_ov511*,int,unsigned short) ;
 scalar_t__ FUNC_2 (struct usb_ov511*) ;
 scalar_t__ FUNC_3 (struct usb_ov511*) ;

__attribute__((used)) static int
FUNC_4(struct usb_ov511 *VAR_4, unsigned short VAR_5)
{
 int VAR_6;

 FUNC_0(3, "%d", VAR_5);

 if (VAR_4->stop_during_set)
  if (FUNC_3(VAR_4) < 0)
   return -VAR_0;

 switch (VAR_4->sensor) {
 case 130:
 case 132:
 case 131:
  VAR_6 = FUNC_1(VAR_4, VAR_3, 0xFF - (VAR_5 >> 8));
  if (VAR_6 < 0)
   goto out;

  VAR_6 = FUNC_1(VAR_4, VAR_2, VAR_5 >> 8);
  if (VAR_6 < 0)
   goto out;
  break;
 case 129:
  break;
 case 128:
  VAR_6 = FUNC_1(VAR_4, 0x0d, (VAR_5 + 32768) >> 8);
  if (VAR_6 < 0)
   goto out;
  break;
 default:
  FUNC_0(3, "Unsupported with this sensor");
  VAR_6 = -VAR_1;
  goto out;
 }

 VAR_6 = 0;
 VAR_4->hue = VAR_5;
out:
 if (FUNC_2(VAR_4) < 0)
  return -VAR_0;

 return VAR_6;
}
