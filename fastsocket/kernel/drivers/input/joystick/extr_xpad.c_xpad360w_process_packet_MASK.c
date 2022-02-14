
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_xpad {int pad_present; int bulk_out; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct usb_xpad*,int ,unsigned char*) ;

__attribute__((used)) static void FUNC_2(struct usb_xpad *VAR_1, u16 VAR_2, unsigned char *VAR_3)
{

 if (VAR_3[0] & 0x08) {
  if (VAR_3[1] & 0x80) {
   VAR_1->pad_present = 1;
   FUNC_0(VAR_1->bulk_out, VAR_0);
  } else
   VAR_1->pad_present = 0;
 }


 if (!(VAR_3[1] & 0x1))
  return;

 FUNC_1(VAR_1, VAR_2, &VAR_3[4]);
}
