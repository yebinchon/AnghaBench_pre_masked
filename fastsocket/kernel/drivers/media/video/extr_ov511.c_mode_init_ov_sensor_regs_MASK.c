
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int sensor; scalar_t__ bridge; int subw; int subh; scalar_t__ compress; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;





 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (struct usb_ov511*,int,int) ;
 int FUNC_3 (struct usb_ov511*,int,int,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_4(struct usb_ov511 *VAR_7, int VAR_8, int VAR_9,
    int VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13;



 switch (VAR_7->sensor) {
 case 130:
  FUNC_2(VAR_7, 0x14, VAR_12?0x24:0x04);
  break;
 case 129:

  FUNC_2(VAR_7, 0x14, VAR_12?0xa4:0x84);
  FUNC_3(VAR_7, 0x28, VAR_12?0x00:0x20, 0x20);
  FUNC_2(VAR_7, 0x24, VAR_12?0x20:0x3a);
  FUNC_2(VAR_7, 0x25, VAR_12?0x30:0x60);
  FUNC_3(VAR_7, 0x2d, VAR_12?0x40:0x00, 0x40);
  FUNC_3(VAR_7, 0x67, VAR_12?0xf0:0x90, 0xf0);
  FUNC_3(VAR_7, 0x74, VAR_12?0x20:0x00, 0x20);
  break;
 case 128:

  FUNC_2(VAR_7, 0x14, VAR_12?0xa4:0x84);
  break;
 case 132:
  FUNC_2(VAR_7, 0x14, VAR_12?0x24:0x04);
  break;
 case 131:
  FUNC_2(VAR_7, 0x14, VAR_12?0xa0:0x80);
  break;
 default:
  FUNC_1("Invalid sensor");
  return -VAR_1;
 }



 if (VAR_10 == VAR_2) {
  if (VAR_7->sensor == 130 || VAR_7->sensor == 128) {

   FUNC_3(VAR_7, 0x0e, 0x40, 0x40);
  }

  if (VAR_7->sensor == 131 && VAR_7->bridge == VAR_0
      && VAR_5) {
   FUNC_3(VAR_7, 0x12, 0x00, 0x10);
   FUNC_3(VAR_7, 0x13, 0x00, 0x20);
  } else {
   FUNC_3(VAR_7, 0x13, 0x20, 0x20);
  }
 } else {
  if (VAR_7->sensor == 130 || VAR_7->sensor == 128) {

   FUNC_3(VAR_7, 0x0e, 0x00, 0x40);
  }







  if (VAR_7->sensor == 131 && VAR_7->bridge == VAR_0
      && VAR_5) {
   FUNC_3(VAR_7, 0x12, 0x10, 0x10);
   FUNC_3(VAR_7, 0x13, 0x20, 0x20);
  } else {
   FUNC_3(VAR_7, 0x13, 0x00, 0x20);
  }
 }





 if (VAR_7->sensor == 132 || VAR_7->sensor == 131)
 {


  FUNC_2(VAR_7, 0x2a, 0x04);

  if (VAR_7->compress) {

   VAR_13 = 3;
  } else if (VAR_3 == -1) {
   VAR_13 = 3;
  } else {
   VAR_13 = VAR_3;
  }

  FUNC_0(4, "Setting clock divisor to %d", VAR_13);

  FUNC_2(VAR_7, 0x11, VAR_13);

  FUNC_2(VAR_7, 0x2a, 0x84);



  FUNC_2(VAR_7, 0x2d, 0x85);
 }
 else
 {
  if (VAR_7->compress) {
   VAR_13 = 1;
  } else if (VAR_3 == -1) {

   VAR_13 = ((VAR_11 ? VAR_7->subw * VAR_7->subh
      : VAR_8 * VAR_9)
     * (VAR_10 == VAR_2 ? 2 : 3) / 2)
     / 66000;
  } else {
   VAR_13 = VAR_3;
  }

  FUNC_0(4, "Setting clock divisor to %d", VAR_13);

  FUNC_2(VAR_7, 0x11, VAR_13);
 }



 if (VAR_4 >= 0)
  FUNC_2(VAR_7, 0x16, VAR_4);


 FUNC_3(VAR_7, 0x12, (VAR_6?0x02:0x00), 0x02);


 FUNC_3(VAR_7, 0x12, 0x04, 0x04);




 if (VAR_7->sensor == 130 || VAR_7->sensor == 128) {
  if (VAR_8 == 640 && VAR_9 == 480)
   FUNC_2(VAR_7, 0x35, 0x9e);
  else
   FUNC_2(VAR_7, 0x35, 0x1e);
 }

 return 0;
}
