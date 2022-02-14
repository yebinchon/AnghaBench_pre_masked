
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {scalar_t__ bridge; int packet_size; int iface; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
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
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int,char*,int,int,int) ;
 int VAR_19 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (struct usb_ov511*,int ) ;
 scalar_t__ FUNC_3 (struct usb_ov511*) ;
 scalar_t__ FUNC_4 (struct usb_ov511*) ;
 scalar_t__ FUNC_5 (struct usb_ov511*,int ,int) ;
 scalar_t__ FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct usb_ov511 *VAR_20, int VAR_21)
{
 int VAR_22, VAR_23;

 if (FUNC_4(VAR_20) < 0)
  return -VAR_4;

 VAR_23 = VAR_21 >> 5;

 if (VAR_20->bridge == VAR_0) {
  if (VAR_21 == 0)
   VAR_22 = VAR_13;
  else if (VAR_21 == 257)
   VAR_22 = VAR_14;
  else if (VAR_21 == 513)
   VAR_22 = VAR_15;
  else if (VAR_21 == 769)
   VAR_22 = VAR_16;
  else if (VAR_21 == 993)
   VAR_22 = VAR_17;
  else {
   FUNC_1("Set packet size: invalid size (%d)", VAR_21);
   return -VAR_3;
  }
 } else if (VAR_20->bridge == VAR_1) {
  if (VAR_21 == 0)
   VAR_22 = VAR_5;
  else if (VAR_21 == 33)
   VAR_22 = VAR_8;
  else if (VAR_21 == 129)
   VAR_22 = VAR_6;
  else if (VAR_21 == 257)
   VAR_22 = VAR_7;
  else if (VAR_21 == 385)
   VAR_22 = VAR_9;
  else if (VAR_21 == 513)
   VAR_22 = VAR_10;
  else if (VAR_21 == 769)
   VAR_22 = VAR_11;
  else if (VAR_21 == 961)
   VAR_22 = VAR_12;
  else {
   FUNC_1("Set packet size: invalid size (%d)", VAR_21);
   return -VAR_3;
  }
 } else {
  FUNC_1("Set packet size: Invalid bridge type");
  return -VAR_3;
 }

 FUNC_0(3, "%d, mult=%d, alt=%d", VAR_21, VAR_23, VAR_22);

 if (FUNC_5(VAR_20, VAR_19, VAR_23) < 0)
  return -VAR_4;

 if (FUNC_6(VAR_20->dev, VAR_20->iface, VAR_22) < 0) {
  FUNC_1("Set packet size: set interface error");
  return -VAR_2;
 }

 if (FUNC_2(VAR_20, VAR_18) < 0)
  return -VAR_4;

 VAR_20->packet_size = VAR_21;

 if (FUNC_3(VAR_20) < 0)
  return -VAR_4;

 return 0;
}
