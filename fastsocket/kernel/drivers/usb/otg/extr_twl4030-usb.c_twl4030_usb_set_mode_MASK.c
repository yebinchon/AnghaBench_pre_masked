
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_usb {int usb_mode; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct twl4030_usb*,int ,int) ;
 int FUNC_2 (struct twl4030_usb*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct twl4030_usb *VAR_7, int VAR_8)
{
 VAR_7->usb_mode = VAR_8;

 switch (VAR_8) {
 case 128:
  FUNC_1(VAR_7, VAR_3, VAR_4);
  FUNC_2(VAR_7, VAR_5, VAR_6);
  FUNC_1(VAR_7, VAR_0,
     VAR_2 |
     VAR_1);
  break;
 case -1:

  break;
 default:
  FUNC_0(VAR_7->dev, "unsupported T2 transceiver mode %d\n",
    VAR_8);
  break;
 };
}
