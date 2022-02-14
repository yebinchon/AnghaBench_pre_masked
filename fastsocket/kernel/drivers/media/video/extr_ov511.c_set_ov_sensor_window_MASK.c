
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int sensor; scalar_t__ bclass; int subx; int subw; int suby; int subh; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (struct usb_ov511*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct usb_ov511*,int,int) ;
 int FUNC_3 (struct usb_ov511*,int,int,int,int,int) ;

__attribute__((used)) static int
FUNC_4(struct usb_ov511 *VAR_3, int VAR_4, int VAR_5, int VAR_6,
       int VAR_7)
{
 int VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17 = 0, VAR_18 = 0;



 switch (VAR_3->sensor) {
 case 130:
 case 128:
  VAR_9 = 0x38;
  VAR_10 = 0x3a;
  VAR_11 = VAR_12 = 0x05;
  break;
 case 132:
 case 131:
  VAR_9 = 0x38;
  VAR_10 = 0x3a;
  VAR_11 = 0x05;
  VAR_12 = 0x06;
  break;
 case 129:
  VAR_9 = 0x2f;
  VAR_10 = 0x2f;
  VAR_11 = VAR_12 = 0x05;
  break;
 default:
  FUNC_1("Invalid sensor");
  return -VAR_1;
 }

 if (VAR_3->sensor == 132 || VAR_3->sensor == 131) {

  if ((VAR_4 > 176 && VAR_5 > 144)
      || VAR_3->bclass == VAR_0) {
   VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5,
    VAR_6, VAR_7, 0);
   if (VAR_8 < 0)
    return VAR_8;
   VAR_17 = 1;
   VAR_18 = 1;
   VAR_13 = 352;
   VAR_14 = 288;
  } else if (VAR_4 > 176 || VAR_5 > 144) {
   FUNC_1("Illegal dimensions");
   return -VAR_1;
  } else {
   VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5,
    VAR_6, VAR_7, 1);
   if (VAR_8 < 0)
    return VAR_8;
   VAR_13 = 176;
   VAR_14 = 144;
  }
 } else {
  if (VAR_4 > 320 && VAR_5 > 240) {
   VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5,
    VAR_6, VAR_7, 0);
   if (VAR_8 < 0)
    return VAR_8;
   VAR_17 = 2;
   VAR_18 = 1;
   VAR_13 = 640;
   VAR_14 = 480;
  } else if (VAR_4 > 320 || VAR_5 > 240) {
   FUNC_1("Illegal dimensions");
   return -VAR_1;
  } else {
   VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5,
    VAR_6, VAR_7, 1);
   if (VAR_8 < 0)
    return VAR_8;
   VAR_17 = 1;
   VAR_13 = 320;
   VAR_14 = 240;
  }
 }


 VAR_15 = ((VAR_13 - VAR_4) / 2) >> VAR_17;
 VAR_16 = ((VAR_14 - VAR_5) / 2) >> VAR_18;


 if (VAR_7) {
  FUNC_2(VAR_3, 0x17, VAR_9+(VAR_3->subx>>VAR_17));
  FUNC_2(VAR_3, 0x18, VAR_10+((VAR_3->subx+VAR_3->subw)>>VAR_17));
  FUNC_2(VAR_3, 0x19, VAR_11+(VAR_3->suby>>VAR_18));
  FUNC_2(VAR_3, 0x1a, VAR_12+((VAR_3->suby+VAR_3->subh)>>VAR_18));
 } else {
  FUNC_2(VAR_3, 0x17, VAR_9 + VAR_15);
  FUNC_2(VAR_3, 0x18, VAR_10 + VAR_15 + (VAR_13>>VAR_17));
  FUNC_2(VAR_3, 0x19, VAR_11 + VAR_16);
  FUNC_2(VAR_3, 0x1a, VAR_12 + VAR_16 + (VAR_14>>VAR_18));
 }






 return 0;
}
