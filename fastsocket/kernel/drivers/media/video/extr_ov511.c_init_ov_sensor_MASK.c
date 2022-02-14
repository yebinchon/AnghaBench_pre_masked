
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct usb_ov511*,int) ;
 scalar_t__ FUNC_2 (struct usb_ov511*,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct usb_ov511 *VAR_4)
{
 int VAR_5, VAR_6;


 if (FUNC_2(VAR_4, 0x12, 0x80) < 0)
  return -VAR_0;


 FUNC_3(150);

 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_3 && !VAR_6; VAR_5++) {
  if ((FUNC_1(VAR_4, VAR_1) == 0x7F) &&
      (FUNC_1(VAR_4, VAR_2) == 0xA2)) {
   VAR_6 = 1;
   continue;
  }


  if (FUNC_2(VAR_4, 0x12, 0x80) < 0)
   return -VAR_0;

  FUNC_3(150);

  if (FUNC_1(VAR_4, 0x00) < 0)
   return -VAR_0;
 }

 if (!VAR_6)
  return -VAR_0;

 FUNC_0(1, "I2C synced in %d attempt(s)", VAR_5);

 return 0;
}
