
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_endpoint_descriptor {unsigned int bInterval; int wMaxPacketSize; int bmAttributes; int bEndpointAddress; } ;






 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int ,char,int ,char*,int,unsigned int,char) ;
 scalar_t__ FUNC_2 (struct usb_endpoint_descriptor const*) ;
 int FUNC_3 (struct usb_endpoint_descriptor const*) ;

__attribute__((used)) static char *FUNC_4(int VAR_2, char *VAR_3, char *VAR_4,
    const struct usb_endpoint_descriptor *VAR_5)
{
 char VAR_6, VAR_7, *VAR_8;
 unsigned VAR_9, VAR_10 = 1;

 if (VAR_3 > VAR_4)
  return VAR_3;

 VAR_6 = FUNC_2(VAR_5) ? 'I' : 'O';

 if (VAR_2 == VAR_0) {
  switch (FUNC_0(VAR_5->wMaxPacketSize) & (0x03 << 11)) {
  case 1 << 11: VAR_10 = 2; break;
  case 2 << 11: VAR_10 = 3; break;
  }
 }


 switch (FUNC_3(VAR_5)) {
 case 130:
  VAR_8 = "Ctrl";
  if (VAR_2 == VAR_0)
   VAR_9 = VAR_5->bInterval;
  else
   VAR_9 = 0;
  VAR_6 = 'B';
  break;
 case 128:
  VAR_8 = "Isoc";
  VAR_9 = 1 << (VAR_5->bInterval - 1);
  break;
 case 131:
  VAR_8 = "Bulk";
  if (VAR_2 == VAR_0 && VAR_6 == 'O')
   VAR_9 = VAR_5->bInterval;
  else
   VAR_9 = 0;
  break;
 case 129:
  VAR_8 = "Int.";
  if (VAR_2 == VAR_0)
   VAR_9 = 1 << (VAR_5->bInterval - 1);
  else
   VAR_9 = VAR_5->bInterval;
  break;
 default:
  return VAR_3;
 }
 VAR_9 *= (VAR_2 == VAR_0) ? 125 : 1000;
 if (VAR_9 % 1000)
  VAR_7 = 'u';
 else {
  VAR_7 = 'm';
  VAR_9 /= 1000;
 }

 VAR_3 += FUNC_1(VAR_3, VAR_1, VAR_5->bEndpointAddress, VAR_6,
    VAR_5->bmAttributes, VAR_8,
    (FUNC_0(VAR_5->wMaxPacketSize) & 0x07ff) *
    VAR_10,
    VAR_9, VAR_7);
 return VAR_3;
}
