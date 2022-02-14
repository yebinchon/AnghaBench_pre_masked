
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int sensor; } ;


 int VAR_0 ;

 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_1(struct usb_ov511 *VAR_1, int VAR_2, char *VAR_3)
{
 switch (VAR_1->sensor) {
 case 128:
 {
  if (VAR_2 < 0 || VAR_2 > 7)
   return -VAR_0;
  else if (VAR_2 < 4)
   FUNC_0(VAR_3, "CVBS-%d", VAR_2);
  else
   FUNC_0(VAR_3, "S-Video-%d", VAR_2 - 4);
  break;
 }
 default:
  FUNC_0(VAR_3, "%s", "Camera");
 }

 return 0;
}
