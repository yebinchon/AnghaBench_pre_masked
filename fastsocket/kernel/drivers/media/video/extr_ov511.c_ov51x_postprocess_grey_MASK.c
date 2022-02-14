
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {scalar_t__ sensor; } ;
struct ov511_frame {int rawheight; int data; int rawdata; scalar_t__ compressed; int tempdata; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct usb_ov511*,struct ov511_frame*,int ,int ) ;
 int FUNC_1 (struct ov511_frame*,int ,int ,int ) ;
 int FUNC_2 (struct ov511_frame*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct usb_ov511 *VAR_2, struct ov511_frame *VAR_3)
{

  if (VAR_2->sensor == VAR_1 && VAR_3->rawheight >= 480) {
   if (VAR_3->compressed)
    FUNC_0(VAR_2, VAR_3, VAR_3->rawdata,
       VAR_3->tempdata);
   else
    FUNC_2(VAR_3, VAR_3->rawdata,
           VAR_3->tempdata);

   FUNC_1(VAR_3, VAR_0, VAR_3->tempdata,
        VAR_3->data);
  } else {
   if (VAR_3->compressed)
    FUNC_0(VAR_2, VAR_3, VAR_3->rawdata,
       VAR_3->data);
   else
    FUNC_2(VAR_3, VAR_3->rawdata,
           VAR_3->data);
  }
}
