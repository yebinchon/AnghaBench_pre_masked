
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int maxheight; int maxwidth; } ;
struct ov511_frame {int format; int bytes_recvd; int rawdata; int data; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*,int ) ;



 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct usb_ov511*,struct ov511_frame*) ;
 int FUNC_6 (struct usb_ov511*,struct ov511_frame*) ;
 int FUNC_7 (int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_8(struct usb_ov511 *VAR_2, struct ov511_frame *VAR_3)
{
 if (VAR_0) {
  FUNC_4(VAR_3->data, 0,
   FUNC_0(VAR_2->maxwidth, VAR_2->maxheight));
  FUNC_1(4, "Dumping %d bytes", VAR_3->bytes_recvd);
  FUNC_3(VAR_3->data, VAR_3->rawdata, VAR_3->bytes_recvd);
 } else {
  switch (VAR_3->format) {
  case 130:
   FUNC_5(VAR_2, VAR_3);
   break;
  case 129:
  case 128:
   FUNC_6(VAR_2, VAR_3);
   break;
  default:
   FUNC_2("Cannot convert data to %s",
       FUNC_7(VAR_1, VAR_3->format));
  }
 }
}
