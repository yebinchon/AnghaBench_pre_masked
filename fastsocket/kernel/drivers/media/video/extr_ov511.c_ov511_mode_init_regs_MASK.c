
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int subw; int subh; scalar_t__ sensor; int minwidth; int minheight; scalar_t__ compress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct usb_ov511*,int ) ;
 scalar_t__ FUNC_3 (struct usb_ov511*) ;
 scalar_t__ FUNC_4 (struct usb_ov511*) ;
 int FUNC_5 (struct usb_ov511*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct usb_ov511 *VAR_19,
       int VAR_20, int VAR_21, int VAR_22, int VAR_23)
{
 int VAR_24, VAR_25;

 if (VAR_23) {
  VAR_20 = VAR_19->subw;
  VAR_21 = VAR_19->subh;
 }

 FUNC_0(3, "width:%d, height:%d, mode:%d, sub:%d",
        VAR_20, VAR_21, VAR_22, VAR_23);



 if (VAR_19->sensor == VAR_17) {
  if (VAR_20 == 320 && VAR_21 == 240) {

  } else if (VAR_20 == 640 && VAR_21 == 480) {


   VAR_20 = 320;
  } else {
   FUNC_1("SAA7111A only allows 320x240 or 640x480");
   return -VAR_0;
  }
 }


 if (VAR_20 % 8 || VAR_21 % 8) {
  FUNC_1("Invalid size (%d, %d) (mode = %d)", VAR_20, VAR_21, VAR_22);
  return -VAR_0;
 }

 if (VAR_20 < VAR_19->minwidth || VAR_21 < VAR_19->minheight) {
  FUNC_1("Requested dimensions are too small");
  return -VAR_0;
 }

 if (FUNC_4(VAR_19) < 0)
  return -VAR_1;

 if (VAR_22 == VAR_18) {
  FUNC_5(VAR_19, VAR_8, 0x00);
  FUNC_5(VAR_19, VAR_16, 0x00);
  FUNC_5(VAR_19, VAR_13, 0x01);
 } else {
  FUNC_5(VAR_19, VAR_8, 0x01);
  FUNC_5(VAR_19, VAR_16, 0x01);
  FUNC_5(VAR_19, VAR_13, 0x03);
 }




 VAR_24 = (VAR_20 >> 3) - 1;
 VAR_25 = (VAR_21 >> 3) - 1;

 FUNC_5(VAR_19, VAR_6, VAR_24);
 FUNC_5(VAR_19, VAR_3, VAR_25);
 FUNC_5(VAR_19, VAR_7, 0x00);
 FUNC_5(VAR_19, VAR_4, 0x00);


 FUNC_5(VAR_19, VAR_5, 0x03);


 FUNC_5(VAR_19, VAR_14, VAR_24);
 FUNC_5(VAR_19, VAR_11, VAR_25);
 FUNC_5(VAR_19, VAR_15, 0x00);
 FUNC_5(VAR_19, VAR_12, 0x00);

 if (VAR_19->compress) {

  FUNC_5(VAR_19, VAR_9, 0x07);
  FUNC_5(VAR_19, VAR_10, 0x03);
  FUNC_2(VAR_19, VAR_2);
 }

 if (FUNC_3(VAR_19) < 0)
  return -VAR_1;

 return 0;
}
