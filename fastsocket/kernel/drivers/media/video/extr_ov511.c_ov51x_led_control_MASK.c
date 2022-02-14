
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {scalar_t__ bridge; scalar_t__ bclass; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct usb_ov511*,int ,int) ;
 int FUNC_2 (struct usb_ov511*,int ,int,int) ;

__attribute__((used)) static void
FUNC_3(struct usb_ov511 *VAR_4, int VAR_5)
{
 FUNC_0(4, " (%s)", VAR_5 ? "turn on" : "turn off");

 if (VAR_4->bridge == VAR_1)
  FUNC_1(VAR_4, VAR_2, VAR_5 ? 1 : 0);
 else if (VAR_4->bclass == VAR_0)
  FUNC_2(VAR_4, VAR_3, VAR_5 ? 0x02 : 0x00, 0x02);

 return;
}
