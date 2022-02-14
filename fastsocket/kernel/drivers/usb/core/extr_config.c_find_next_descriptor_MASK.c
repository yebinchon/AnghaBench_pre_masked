
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_descriptor_header {int bDescriptorType; scalar_t__ bLength; } ;



__attribute__((used)) static int FUNC_0(unsigned char *VAR_0, int VAR_1,
    int VAR_2, int VAR_3, int *VAR_4)
{
 struct usb_descriptor_header *VAR_5;
 int VAR_6 = 0;
 unsigned char *VAR_7 = VAR_0;


 while (VAR_1 > 0) {
  VAR_5 = (struct usb_descriptor_header *) VAR_0;
  if (VAR_5->bDescriptorType == VAR_2 || VAR_5->bDescriptorType == VAR_3)
   break;
  VAR_0 += VAR_5->bLength;
  VAR_1 -= VAR_5->bLength;
  ++VAR_6;
 }



 if (VAR_4)
  *VAR_4 = VAR_6;
 return VAR_0 - VAR_7;
}
