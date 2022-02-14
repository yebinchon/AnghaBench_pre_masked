
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {scalar_t__ length; int buf; } ;
struct usb_ep {int name; } ;
struct fsg_dev {int lock; struct usb_ep* intr_in; struct usb_ep* bulk_in; } ;
typedef enum fsg_buffer_state { ____Placeholder_fsg_buffer_state } fsg_buffer_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fsg_dev*,char*,int ,int) ;
 int FUNC_1 (struct fsg_dev*,char*,int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_ep*,struct usb_request*,int ) ;

__attribute__((used)) static void FUNC_5(struct fsg_dev *VAR_5, struct usb_ep *VAR_6,
  struct usb_request *VAR_7, int *VAR_8,
  enum fsg_buffer_state *VAR_9)
{
 int VAR_10;

 if (VAR_6 == VAR_5->bulk_in)
  FUNC_1(VAR_5, "bulk-in", VAR_7->buf, VAR_7->length);
 else if (VAR_6 == VAR_5->intr_in)
  FUNC_1(VAR_5, "intr-in", VAR_7->buf, VAR_7->length);

 FUNC_2(&VAR_5->lock);
 *VAR_8 = 1;
 *VAR_9 = VAR_0;
 FUNC_3(&VAR_5->lock);
 VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_4);
 if (VAR_10 != 0) {
  *VAR_8 = 0;
  *VAR_9 = VAR_1;





  if (VAR_10 != -VAR_3 && !(VAR_10 == -VAR_2 &&
      VAR_7->length == 0))
   FUNC_0(VAR_5, "error in submission: %s --> %d\n",
     VAR_6->name, VAR_10);
 }
}
