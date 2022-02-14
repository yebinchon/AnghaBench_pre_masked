
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int sensor; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;

 int FUNC_1 (struct usb_ov511*,int,int,int) ;

__attribute__((used)) static int
FUNC_2(struct usb_ov511 *VAR_1, int VAR_2)
{
 FUNC_0(4, "port %d", VAR_2);

 switch (VAR_1->sensor) {
 case 128:
 {

  FUNC_1(VAR_1, 0x02, VAR_2, 0x07);

  FUNC_1(VAR_1, 0x09, (VAR_2 > 3) ? 0x80:0x00, 0x80);
  break;
 }
 default:
  return -VAR_0;
 }

 return 0;
}
