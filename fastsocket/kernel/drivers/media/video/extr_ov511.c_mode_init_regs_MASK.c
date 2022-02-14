
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {scalar_t__ bclass; int sensor; int mirror; int backlight; scalar_t__ lightfreq; int auto_exp; int auto_brt; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*,int ) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct usb_ov511*,int) ;
 int VAR_4 ;
 int FUNC_4 (struct usb_ov511*,int,int,int,int) ;
 int FUNC_5 (struct usb_ov511*,int,int,int,int) ;
 int FUNC_6 (struct usb_ov511*,int ) ;
 int FUNC_7 (struct usb_ov511*,int ) ;
 int FUNC_8 (struct usb_ov511*,int ) ;
 int FUNC_9 (struct usb_ov511*,int ) ;
 int FUNC_10 (struct usb_ov511*,int ) ;
 int FUNC_11 (struct usb_ov511*,int ) ;
 int FUNC_12 (struct usb_ov511*,int,int,int,int) ;

__attribute__((used)) static int
FUNC_13(struct usb_ov511 *VAR_5,
        int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10 = 0;

 if (!VAR_5 || !VAR_5->dev)
  return -VAR_1;

 if (VAR_5->bclass == VAR_0) {
  VAR_10 = FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 } else {
  VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 }

 if (FUNC_0(VAR_10))
  return VAR_10;

 switch (VAR_5->sensor) {
 case 132:
 case 131:
 case 130:
 case 129:
 case 134:
 case 133:
  VAR_10 = FUNC_12(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
  break;
 case 136:
 case 135:
  FUNC_2("KS0127-series decoders not supported yet");
  VAR_10 = -VAR_2;
  break;
 case 128:



  FUNC_1(1, "SAA status = 0x%02X", FUNC_3(VAR_5, 0x1f));
  break;
 default:
  FUNC_2("Unknown sensor");
  VAR_10 = -VAR_2;
 }

 if (FUNC_0(VAR_10))
  return VAR_10;


 VAR_10 = FUNC_6(VAR_5, VAR_5->auto_brt);
 if (FUNC_0(VAR_10))
  return VAR_10;

 VAR_10 = FUNC_7(VAR_5, VAR_5->auto_exp);
 if (FUNC_0(VAR_10))
  return VAR_10;

 VAR_10 = FUNC_9(VAR_5, VAR_3);
 if (FUNC_0(VAR_10))
  return VAR_10;

 if (VAR_5->lightfreq) {
  VAR_10 = FUNC_10(VAR_5, VAR_4);
  if (FUNC_0(VAR_10))
   return VAR_10;
 }

 VAR_10 = FUNC_8(VAR_5, VAR_5->backlight);
 if (FUNC_0(VAR_10))
  return VAR_10;

 VAR_10 = FUNC_11(VAR_5, VAR_5->mirror);
 if (FUNC_0(VAR_10))
  return VAR_10;

 return 0;
}
