
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl4030_usb {int usb3v1; int usb1v8; int usb1v5; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct twl4030_usb*,int ) ;
 int FUNC_5 (struct twl4030_usb*,int ,int) ;
 scalar_t__ FUNC_6 (struct twl4030_usb*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct twl4030_usb *VAR_7, int VAR_8)
{
 u8 VAR_9;

 VAR_9 = FUNC_4(VAR_7, VAR_3);
 if (VAR_8) {
  FUNC_2(VAR_7->usb3v1);
  FUNC_2(VAR_7->usb1v8);







  FUNC_3(VAR_5, 0,
       VAR_6);
  FUNC_2(VAR_7->usb1v5);
  VAR_9 &= ~VAR_4;
  FUNC_0(FUNC_6(VAR_7, VAR_3, VAR_9) < 0);
  FUNC_5(VAR_7, VAR_0,
      FUNC_4(VAR_7, VAR_0) |
     (VAR_2 |
      VAR_1));
 } else {
  VAR_9 |= VAR_4;
  FUNC_0(FUNC_6(VAR_7, VAR_3, VAR_9) < 0);
  FUNC_1(VAR_7->usb1v5);
  FUNC_1(VAR_7->usb1v8);
  FUNC_1(VAR_7->usb3v1);
 }
}
