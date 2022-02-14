
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {scalar_t__ bclass; int packet_size; int iface; int dev; scalar_t__ packet_numbering; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (int,char*,int,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct usb_ov511*,int,int,int) ;
 scalar_t__ FUNC_3 (struct usb_ov511*,int ) ;
 scalar_t__ FUNC_4 (struct usb_ov511*) ;
 scalar_t__ FUNC_5 (struct usb_ov511*) ;
 scalar_t__ FUNC_6 (struct usb_ov511*,int,int) ;
 scalar_t__ FUNC_7 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct usb_ov511 *VAR_13, int VAR_14)
{
 int VAR_15;

 if (FUNC_5(VAR_13) < 0)
  return -VAR_3;

 if (VAR_13->bclass == VAR_0) {
  if (VAR_14 == 0)
   VAR_15 = VAR_5;
  else if (VAR_14 == 128)
   VAR_15 = VAR_6;
  else if (VAR_14 == 256)
   VAR_15 = VAR_7;
  else if (VAR_14 == 384)
   VAR_15 = VAR_8;
  else if (VAR_14 == 512)
   VAR_15 = VAR_9;
  else if (VAR_14 == 640)
   VAR_15 = VAR_10;
  else if (VAR_14 == 768)
   VAR_15 = VAR_11;
  else if (VAR_14 == 896)
   VAR_15 = VAR_12;
  else {
   FUNC_1("Set packet size: invalid size (%d)", VAR_14);
   return -VAR_2;
  }
 } else {
  FUNC_1("Set packet size: Invalid bridge type");
  return -VAR_2;
 }

 FUNC_0(3, "%d, alt=%d", VAR_14, VAR_15);

 VAR_13->packet_size = VAR_14;
 if (VAR_14 > 0) {

  FUNC_2(VAR_13, 0x30, VAR_14, 2);

  if (VAR_13->packet_numbering)
   ++VAR_13->packet_size;
 }

 if (FUNC_7(VAR_13->dev, VAR_13->iface, VAR_15) < 0) {
  FUNC_1("Set packet size: set interface error");
  return -VAR_1;
 }


 if (FUNC_6(VAR_13, 0x2f, 0x80) < 0)
  return -VAR_3;

 if (FUNC_4(VAR_13) < 0)
  return -VAR_3;

 if (FUNC_3(VAR_13, VAR_4) < 0)
  return -VAR_3;

 return 0;
}
