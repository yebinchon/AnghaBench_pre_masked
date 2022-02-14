
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int sensor; unsigned short contrast; scalar_t__ stop_during_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,...) ;





 int FUNC_1 (struct usb_ov511*,int,unsigned short) ;
 int FUNC_2 (struct usb_ov511*,int,unsigned short,int) ;
 scalar_t__ FUNC_3 (struct usb_ov511*) ;
 scalar_t__ FUNC_4 (struct usb_ov511*) ;

__attribute__((used)) static int
FUNC_5(struct usb_ov511 *VAR_3, unsigned short VAR_4)
{
 int VAR_5;

 FUNC_0(3, "%d", VAR_4);

 if (VAR_3->stop_during_set)
  if (FUNC_4(VAR_3) < 0)
   return -VAR_0;

 switch (VAR_3->sensor) {
 case 130:
 case 132:
 {
  VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_4 >> 8);
  if (VAR_5 < 0)
   goto out;
  break;
 }
 case 131:
 {
  VAR_5 = FUNC_2(VAR_3, VAR_2, VAR_4 >> 12, 0x0f);
  if (VAR_5 < 0)
   goto out;
  break;
 }
 case 129:
 {
  unsigned char VAR_6[] = {
   0x01, 0x05, 0x09, 0x11, 0x15, 0x35, 0x37, 0x57,
   0x5b, 0xa5, 0xa7, 0xc7, 0xc9, 0xcf, 0xef, 0xff
  };


  VAR_5 = FUNC_1(VAR_3, 0x64, VAR_6[VAR_4>>12]);
  if (VAR_5 < 0)
   goto out;
  break;
 }
 case 128:
 {
  VAR_5 = FUNC_1(VAR_3, 0x0b, VAR_4 >> 9);
  if (VAR_5 < 0)
   goto out;
  break;
 }
 default:
 {
  FUNC_0(3, "Unsupported with this sensor");
  VAR_5 = -VAR_1;
  goto out;
 }
 }

 VAR_5 = 0;
 VAR_3->contrast = VAR_4;
out:
 if (FUNC_3(VAR_3) < 0)
  return -VAR_0;

 return VAR_5;
}
