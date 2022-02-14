
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int dummy; } ;


 int FUNC_0 (int,char*,unsigned char,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct usb_ov511*,int ) ;
 int FUNC_2 (struct usb_ov511*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct usb_ov511 *VAR_3, unsigned char VAR_4)
{
 int VAR_5, VAR_6;


 VAR_5 = FUNC_2(VAR_3, VAR_2, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_5 = FUNC_2(VAR_3, VAR_0, 0x03);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_5 = FUNC_2(VAR_3, VAR_0, 0x05);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_6 = FUNC_1(VAR_3, VAR_1);

 FUNC_0(5, "0x%02X:0x%02X", VAR_4, VAR_6);

 return VAR_6;
}
