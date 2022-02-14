
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
 char VAR_5[4];
 int VAR_6, VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 while (VAR_4 > 0) {
  VAR_9 = (VAR_4 > 3) ? 4 : VAR_4;
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_5, VAR_9);
  if (VAR_6 > 0) {
   for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
    VAR_3[VAR_8 + VAR_7] = VAR_5[VAR_7];
   VAR_4 -= VAR_9;
   VAR_8 += VAR_9;
  } else
   return (VAR_6 < 0) ? VAR_6 : -VAR_0;
 }
 return VAR_8;
}
