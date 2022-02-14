
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int subw; int subh; int minwidth; int minheight; scalar_t__ bridge; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int,int,int,int) ;
 int VAR_5 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct usb_ov511*,int,int) ;
 int FUNC_3 (struct usb_ov511*,int,int,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct usb_ov511*,int,int,int) ;
 scalar_t__ FUNC_5 (struct usb_ov511*,int ) ;
 scalar_t__ FUNC_6 (struct usb_ov511*) ;
 scalar_t__ FUNC_7 (struct usb_ov511*) ;
 int FUNC_8 (struct usb_ov511*,int,int) ;
 int FUNC_9 (struct usb_ov511*,int,int,int) ;

__attribute__((used)) static int
FUNC_10(struct usb_ov511 *VAR_7,
       int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12, VAR_13, VAR_14;

 if (VAR_11) {
  VAR_8 = VAR_7->subw;
  VAR_9 = VAR_7->subh;
 }

 FUNC_0(3, "width:%d, height:%d, mode:%d, sub:%d",
        VAR_8, VAR_9, VAR_10, VAR_11);

 if (VAR_8 % 16 || VAR_9 % 8) {
  FUNC_1("Invalid size (%d, %d)", VAR_8, VAR_9);
  return -VAR_2;
 }

 if (VAR_8 < VAR_7->minwidth || VAR_9 < VAR_7->minheight) {
  FUNC_1("Requested dimensions are too small");
  return -VAR_2;
 }

 if (VAR_8 >= 320 && VAR_9 >= 240) {
  VAR_14 = 1;
 } else if (VAR_8 >= 320 || VAR_9 >= 240) {
  FUNC_1("Invalid width/height combination (%d, %d)", VAR_8, VAR_9);
  return -VAR_2;
 } else {
  VAR_14 = 0;
 }

 if (FUNC_7(VAR_7) < 0)
  return -VAR_3;



 FUNC_8(VAR_7, 0x2b, 0);
 FUNC_8(VAR_7, 0x2c, 0);
 FUNC_8(VAR_7, 0x2d, 0);
 FUNC_8(VAR_7, 0x2e, 0);
 FUNC_8(VAR_7, 0x3b, 0);
 FUNC_8(VAR_7, 0x3c, 0);
 FUNC_8(VAR_7, 0x3d, 0);
 FUNC_8(VAR_7, 0x3e, 0);

 if (VAR_7->bridge == VAR_0 && VAR_6) {

  FUNC_3(VAR_7, 0x15, 0x00, 0x01);

  if (VAR_10 == VAR_5) {

   FUNC_9(VAR_7, 0x20, 0x00, 0x08);


   FUNC_9(VAR_7, 0x28, 0x00, 0xf0);
   FUNC_9(VAR_7, 0x38, 0x00, 0xf0);
  } else {

   FUNC_9(VAR_7, 0x20, 0x08, 0x08);


   FUNC_9(VAR_7, 0x28, 0x80, 0xf0);
   FUNC_9(VAR_7, 0x38, 0x80, 0xf0);
  }
 } else {
  FUNC_8(VAR_7, 0x28, (VAR_10 == VAR_5) ? 0x00:0x80);
  FUNC_8(VAR_7, 0x38, (VAR_10 == VAR_5) ? 0x00:0x80);
 }

 VAR_12 = VAR_8 / 16;
 VAR_13 = VAR_9 / 4;

 FUNC_8(VAR_7, 0x29, VAR_12);
 FUNC_8(VAR_7, 0x2a, VAR_13);

 FUNC_8(VAR_7, 0x39, VAR_12);
 FUNC_8(VAR_7, 0x3a, VAR_13);


 FUNC_8(VAR_7, 0x2f, 0x80);




 FUNC_8(VAR_7, 0x51, 0x02);
 FUNC_8(VAR_7, 0x22, 0x18);
 FUNC_8(VAR_7, 0x23, 0xff);

 if (VAR_7->bridge == VAR_1)
  FUNC_8(VAR_7, 0x21, 0x19);
 else
  FUNC_8(VAR_7, 0x71, 0x19);



 FUNC_2(VAR_7, 0x54, 0x23);

 FUNC_8(VAR_7, 0x2f, 0x80);

 if (VAR_7->bridge == VAR_1) {
  FUNC_8(VAR_7, 0x24, 0x94);
  FUNC_8(VAR_7, 0x25, 0x90);
  FUNC_4(VAR_7, 0xc4, 400, 2);
  FUNC_4(VAR_7, 0xc6, 540, 2);
  FUNC_4(VAR_7, 0xc7, 540, 2);
  FUNC_4(VAR_7, 0xc8, 108, 2);
  FUNC_4(VAR_7, 0xca, 131098, 3);
  FUNC_4(VAR_7, 0xcb, 532, 2);
  FUNC_4(VAR_7, 0xcc, 2400, 2);
  FUNC_4(VAR_7, 0xcd, 32, 2);
  FUNC_4(VAR_7, 0xce, 608, 2);
 } else {
  FUNC_8(VAR_7, 0x24, 0x9f);
  FUNC_8(VAR_7, 0x25, 0x90);
  FUNC_4(VAR_7, 0xc4, 400, 2);
  FUNC_4(VAR_7, 0xc6, 500, 2);
  FUNC_4(VAR_7, 0xc7, 500, 2);
  FUNC_4(VAR_7, 0xc8, 142, 2);
  FUNC_4(VAR_7, 0xca, 131098, 3);
  FUNC_4(VAR_7, 0xcb, 532, 2);
  FUNC_4(VAR_7, 0xcc, 2000, 2);
  FUNC_4(VAR_7, 0xcd, 32, 2);
  FUNC_4(VAR_7, 0xce, 608, 2);
 }

 FUNC_8(VAR_7, 0x2f, 0x80);

 if (FUNC_6(VAR_7) < 0)
  return -VAR_3;


 if (FUNC_5(VAR_7, VAR_4) < 0)
  return -VAR_3;

 return 0;
}
