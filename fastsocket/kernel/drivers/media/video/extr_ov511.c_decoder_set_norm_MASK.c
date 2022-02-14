
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int sensor; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct usb_ov511*,int,int,int) ;

__attribute__((used)) static int
FUNC_2(struct usb_ov511 *VAR_5, int VAR_6)
{
 FUNC_0(4, "%d", VAR_6);

 switch (VAR_5->sensor) {
 case 128:
 {
  int VAR_7, VAR_8;

  if (VAR_6 == VAR_2) {
   VAR_7 = 0x40;
   VAR_8 = 0x00;
  } else if (VAR_6 == VAR_3) {
   VAR_7 = 0x00;
   VAR_8 = 0x00;
  } else if (VAR_6 == VAR_1) {
   VAR_7 = 0x80;
   VAR_8 = 0x00;
  } else if (VAR_6 == VAR_4) {
   VAR_7 = 0x00;
   VAR_8 = 0x50;
  } else {
   return -VAR_0;
  }

  FUNC_1(VAR_5, 0x08, VAR_7, 0xc0);
  FUNC_1(VAR_5, 0x0e, VAR_8, 0x70);
  break;
 }
 default:
  return -VAR_0;
 }

 return 0;
}
