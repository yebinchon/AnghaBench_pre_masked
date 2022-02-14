
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_ov511*,int ,unsigned char) ;

__attribute__((used)) static int
FUNC_1(struct usb_ov511 *VAR_2, unsigned char VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0, VAR_3 + 1);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
