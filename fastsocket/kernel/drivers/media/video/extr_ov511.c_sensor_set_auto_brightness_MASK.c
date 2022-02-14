
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {scalar_t__ sensor; int auto_brt; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct usb_ov511*,int,int,int) ;

__attribute__((used)) static int
FUNC_2(struct usb_ov511 *VAR_4, int VAR_5)
{
 int VAR_6;

 FUNC_0(4, " (%s)", VAR_5 ? "turn on" : "turn off");

 if (VAR_4->sensor == VAR_1 || VAR_4->sensor == VAR_2
  || VAR_4->sensor == VAR_3) {
  FUNC_0(5, "Unsupported with this sensor");
  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_4, 0x2d, VAR_5?0x10:0x00, 0x10);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_4->auto_brt = VAR_5;

 return 0;
}
