
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {scalar_t__ bclass; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,unsigned char) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct usb_ov511*,int ,unsigned char) ;

__attribute__((used)) static int
FUNC_3(struct usb_ov511 *VAR_2, unsigned char VAR_3)
{
 int VAR_4;


 if (VAR_2->bclass == VAR_0)
  VAR_3 &= 0xfe;

 FUNC_0(4, "Reset: type=0x%02X", VAR_3);

 VAR_4 = FUNC_2(VAR_2, VAR_1, VAR_3);
 VAR_4 = FUNC_2(VAR_2, VAR_1, 0);

 if (VAR_4 < 0)
  FUNC_1("reset: command failed");

 return VAR_4;
}
