
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct urb {struct go7007_usb* transfer_buffer; } ;
struct go7007_usb {struct urb* intr_urb; struct urb** audio_urbs; struct urb** video_urbs; } ;
struct go7007 {struct go7007_usb* hpi_context; int status; } ;


 int VAR_0 ;
 int FUNC_0 (struct go7007*) ;
 int FUNC_1 (struct go7007_usb*) ;
 int FUNC_2 (struct urb*) ;
 struct go7007* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct urb*) ;

__attribute__((used)) static void FUNC_5(struct usb_interface *VAR_1)
{
 struct go7007 *VAR_2 = FUNC_3(VAR_1);
 struct go7007_usb *VAR_3 = VAR_2->hpi_context;
 struct urb *VAR_4, *VAR_5;
 int VAR_6;

 VAR_2->status = VAR_0;
 FUNC_4(VAR_3->intr_urb);


 for (VAR_6 = 0; VAR_6 < 8; ++VAR_6) {
  VAR_4 = VAR_3->video_urbs[VAR_6];
  if (VAR_4) {
   FUNC_4(VAR_4);
   if (VAR_4->transfer_buffer)
    FUNC_1(VAR_4->transfer_buffer);
   FUNC_2(VAR_4);
  }
  VAR_5 = VAR_3->audio_urbs[VAR_6];
  if (VAR_5) {
   FUNC_4(VAR_5);
   if (VAR_5->transfer_buffer)
    FUNC_1(VAR_5->transfer_buffer);
   FUNC_2(VAR_5);
  }
 }
 FUNC_1(VAR_3->intr_urb->transfer_buffer);
 FUNC_2(VAR_3->intr_urb);

 FUNC_1(VAR_2->hpi_context);

 FUNC_0(VAR_2);
}
