
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_pcwd_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_pcwd_private*,int ,unsigned char*,unsigned char*) ;

__attribute__((used)) static int FUNC_1(struct usb_pcwd_private *VAR_3, int VAR_4)
{
 unsigned char VAR_5 = VAR_4 / 256;
 unsigned char VAR_6 = VAR_4 % 256;

 if ((VAR_4 < 0x0001) || (VAR_4 > 0xFFFF))
  return -VAR_1;


 FUNC_0(VAR_3, VAR_0, &VAR_5, &VAR_6);

 VAR_2 = VAR_4;
 return 0;
}
