
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {scalar_t__ bclass; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct usb_ov511*,unsigned char) ;
 int FUNC_1 (struct usb_ov511*,unsigned char,unsigned char) ;
 int FUNC_2 (struct usb_ov511*,unsigned char) ;
 int FUNC_3 (struct usb_ov511*,unsigned char,unsigned char) ;

__attribute__((used)) static int
FUNC_4(struct usb_ov511 *VAR_1,
         unsigned char VAR_2,
         unsigned char VAR_3,
         unsigned char VAR_4)
{
 int VAR_5;
 unsigned char VAR_6, VAR_7;

 if (VAR_4 == 0xff) {
  VAR_7 = VAR_3;
 } else {
  if (VAR_1->bclass == VAR_0)
   VAR_5 = FUNC_2(VAR_1, VAR_2);
  else
   VAR_5 = FUNC_0(VAR_1, VAR_2);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_6 = (unsigned char) VAR_5;
  VAR_6 &= (~VAR_4);
  VAR_3 &= VAR_4;
  VAR_7 = VAR_6 | VAR_3;
 }

 if (VAR_1->bclass == VAR_0)
  return (FUNC_3(VAR_1, VAR_2, VAR_7));
 else
  return (FUNC_1(VAR_1, VAR_2, VAR_7));
}
