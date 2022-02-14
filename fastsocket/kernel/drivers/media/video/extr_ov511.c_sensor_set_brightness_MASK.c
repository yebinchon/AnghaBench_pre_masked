
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int sensor; unsigned short brightness; int auto_brt; scalar_t__ stop_during_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,...) ;






 int FUNC_1 (struct usb_ov511*,int,unsigned short) ;
 scalar_t__ FUNC_2 (struct usb_ov511*) ;
 scalar_t__ FUNC_3 (struct usb_ov511*) ;

__attribute__((used)) static int
FUNC_4(struct usb_ov511 *VAR_3, unsigned short VAR_4)
{
 int VAR_5;

 FUNC_0(4, "%d", VAR_4);

 if (VAR_3->stop_during_set)
  if (FUNC_3(VAR_3) < 0)
   return -VAR_0;

 switch (VAR_3->sensor) {
 case 131:
 case 129:
 case 133:
 case 132:
  VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_4 >> 8);
  if (VAR_5 < 0)
   goto out;
  break;
 case 130:

  if (!VAR_3->auto_brt) {
   VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_4 >> 8);
   if (VAR_5 < 0)
    goto out;
  }
  break;
 case 128:
  VAR_5 = FUNC_1(VAR_3, 0x0a, VAR_4 >> 8);
  if (VAR_5 < 0)
   goto out;
  break;
 default:
  FUNC_0(3, "Unsupported with this sensor");
  VAR_5 = -VAR_1;
  goto out;
 }

 VAR_5 = 0;
 VAR_3->brightness = VAR_4;
out:
 if (FUNC_2(VAR_3) < 0)
  return -VAR_0;

 return VAR_5;
}
