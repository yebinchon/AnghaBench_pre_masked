
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_request {int* buf; unsigned int actual; } ;
struct usb_ep {int dummy; } ;


 int* VAR_0 ;
 int FUNC_0 (struct usb_ep*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct usb_ep *VAR_1, struct usb_request *VAR_2)
{
 unsigned VAR_3;
 u8 *VAR_4 = VAR_2->buf;

 for (VAR_3 = 0; VAR_3 + 3 < VAR_2->actual; VAR_3 += 4) {
  if (VAR_4[VAR_3] != 0) {
   int VAR_5 = VAR_4[VAR_3] >> 4;
   int VAR_6 = VAR_0[VAR_4[VAR_3] & 0x0f];
   FUNC_0(VAR_1, VAR_5, &VAR_4[VAR_3 + 1], VAR_6);
  }
 }
}
