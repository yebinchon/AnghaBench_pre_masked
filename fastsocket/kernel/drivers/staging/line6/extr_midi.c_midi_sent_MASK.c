
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_line6 {TYPE_1__* line6midi; } ;
struct urb {int status; int transfer_buffer; scalar_t__ context; } ;
struct TYPE_2__ {int num_active_send_urbs; int send_urb_lock; int send_wait; int substream_transmit; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct urb *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;
 int VAR_4;
 struct usb_line6 *VAR_5 = (struct usb_line6 *)VAR_1->context;

 VAR_3 = VAR_1->status;
 FUNC_0(VAR_1->transfer_buffer);
 FUNC_4(VAR_1);

 if (VAR_3 == -VAR_0)
  return;

 FUNC_2(&VAR_5->line6midi->send_urb_lock, VAR_2);
 VAR_4 = --VAR_5->line6midi->num_active_send_urbs;

 if (VAR_4 == 0) {
  FUNC_1(VAR_5->line6midi->substream_transmit);
  VAR_4 = VAR_5->line6midi->num_active_send_urbs;
 }

 if (VAR_4 == 0)
  FUNC_5(&VAR_5->line6midi->send_wait);

 FUNC_3(&VAR_5->line6midi->send_urb_lock, VAR_2);
}
