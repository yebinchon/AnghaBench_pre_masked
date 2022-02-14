
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_usbvision*,unsigned char,char*,int) ;

__attribute__((used)) static int FUNC_1(struct usb_usbvision *VAR_1, unsigned char VAR_2, char *VAR_3,
       short VAR_4)
{
 char *VAR_5 = VAR_3;
 int VAR_6;
 int VAR_7 = 0;
 int VAR_8;
 int VAR_9 = 4;

 while (VAR_4 > 0) {
  VAR_8 = (VAR_4 > VAR_9) ? VAR_9 : VAR_4;
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_5, VAR_8);
  if (VAR_6 > 0) {
   VAR_4 -= VAR_8;
   VAR_5 += VAR_8;
   VAR_7 += VAR_8;
  } else
   return (VAR_6 < 0) ? VAR_6 : -VAR_0;
 }
 return VAR_7;
}
