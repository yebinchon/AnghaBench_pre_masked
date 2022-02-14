
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_request {int dummy; } ;
struct gmidi_in_port {int cable; int* data; int state; } ;
 void* VAR_0 ;
 int FUNC_0 (struct usb_request*,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct usb_request *VAR_1,
    struct gmidi_in_port *VAR_2, uint8_t VAR_3)
{
 uint8_t VAR_4 = VAR_2->cable;

 if (VAR_3 >= 0xf8) {
  FUNC_0(VAR_1, VAR_4 | 0x0f, VAR_3, 0, 0);
 } else if (VAR_3 >= 0xf0) {
  switch (VAR_3) {
  case 0xf0:
   VAR_2->data[0] = VAR_3;
   VAR_2->state = 129;
   break;
  case 0xf1:
  case 0xf3:
   VAR_2->data[0] = VAR_3;
   VAR_2->state = 133;
   break;
  case 0xf2:
   VAR_2->data[0] = VAR_3;
   VAR_2->state = 132;
   break;
  case 0xf4:
  case 0xf5:
   VAR_2->state = VAR_0;
   break;
  case 0xf6:
   FUNC_0(VAR_1, VAR_4 | 0x05, 0xf6, 0, 0);
   VAR_2->state = VAR_0;
   break;
  case 0xf7:
   switch (VAR_2->state) {
   case 130:
    FUNC_0(VAR_1,
     VAR_4 | 0x05, 0xf7, 0, 0);
    break;
   case 129:
    FUNC_0(VAR_1,
     VAR_4 | 0x06, VAR_2->data[0], 0xf7, 0);
    break;
   case 128:
    FUNC_0(VAR_1,
     VAR_4 | 0x07, VAR_2->data[0],
     VAR_2->data[1], 0xf7);
    break;
   }
   VAR_2->state = VAR_0;
   break;
  }
 } else if (VAR_3 >= 0x80) {
  VAR_2->data[0] = VAR_3;
  if (VAR_3 >= 0xc0 && VAR_3 <= 0xdf)
   VAR_2->state = 133;
  else
   VAR_2->state = 132;
 } else {
  switch (VAR_2->state) {
  case 133:
   if (VAR_2->data[0] < 0xf0) {
    VAR_4 |= VAR_2->data[0] >> 4;
   } else {
    VAR_4 |= 0x02;
    VAR_2->state = VAR_0;
   }
   FUNC_0(VAR_1, VAR_4, VAR_2->data[0], VAR_3, 0);
   break;
  case 132:
   VAR_2->data[1] = VAR_3;
   VAR_2->state = 131;
   break;
  case 131:
   if (VAR_2->data[0] < 0xf0) {
    VAR_4 |= VAR_2->data[0] >> 4;
    VAR_2->state = 132;
   } else {
    VAR_4 |= 0x03;
    VAR_2->state = VAR_0;
   }
   FUNC_0(VAR_1,
    VAR_4, VAR_2->data[0], VAR_2->data[1], VAR_3);
   break;
  case 130:
   VAR_2->data[0] = VAR_3;
   VAR_2->state = 129;
   break;
  case 129:
   VAR_2->data[1] = VAR_3;
   VAR_2->state = 128;
   break;
  case 128:
   FUNC_0(VAR_1,
    VAR_4 | 0x04, VAR_2->data[0], VAR_2->data[1], VAR_3);
   VAR_2->state = 130;
   break;
  }
 }
}
