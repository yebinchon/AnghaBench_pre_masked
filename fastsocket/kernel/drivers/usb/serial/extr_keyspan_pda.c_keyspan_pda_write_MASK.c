
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {int write_urb_busy; int bulk_out_size; TYPE_1__* write_urb; struct usb_serial* serial; int lock; } ;
struct usb_serial {int dev; } ;
struct tty_struct {int dummy; } ;
struct keyspan_pda_private {int tx_throttled; int tx_room; int unthrottle_work; } ;
struct TYPE_2__ {int transfer_buffer_length; int dev; int transfer_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,unsigned char const*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int,int,int ,int ,unsigned char*,int,int) ;
 struct keyspan_pda_private* FUNC_7 (struct usb_serial_port*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_10(struct tty_struct *VAR_5,
 struct usb_serial_port *VAR_6, const unsigned char *VAR_7, int VAR_8)
{
 struct usb_serial *VAR_9 = VAR_6->serial;
 int VAR_10 = 0;
 int VAR_11 = 0;
 struct keyspan_pda_private *VAR_12;

 VAR_12 = FUNC_7(VAR_6);
 FUNC_0("keyspan_pda_write(%d)", VAR_8);
 if (VAR_8 == 0) {
  FUNC_0(" write request of 0 bytes");
  return 0;
 }





 FUNC_4(&VAR_6->lock);
 if (VAR_6->write_urb_busy || VAR_12->tx_throttled) {
  FUNC_5(&VAR_6->lock);
  return 0;
 }
 VAR_6->write_urb_busy = 1;
 FUNC_5(&VAR_6->lock);






 VAR_8 = (VAR_8 > VAR_6->bulk_out_size) ? VAR_6->bulk_out_size : VAR_8;




 if (VAR_8 > VAR_12->tx_room && !FUNC_1()) {
  unsigned char VAR_13;
  VAR_11 = FUNC_6(VAR_9->dev,
         FUNC_8(VAR_9->dev, 0),
         6,
         VAR_4 | VAR_3
         | VAR_2,
         0,
         0,
         &VAR_13,
         1,
         2000);
  if (VAR_11 < 0) {
   FUNC_0(" roomquery failed");
   goto exit;
  }
  if (VAR_11 == 0) {
   FUNC_0(" roomquery returned 0 bytes");
   VAR_11 = -VAR_0;
   goto exit;
  }
  FUNC_0(" roomquery says %d", VAR_13);
  VAR_12->tx_room = VAR_13;
 }
 if (VAR_8 > VAR_12->tx_room) {


  VAR_8 = VAR_12->tx_room;
  VAR_10 = 1;
 }

 if (VAR_8) {

  FUNC_2(VAR_6->write_urb->transfer_buffer, VAR_7, VAR_8);

  VAR_6->write_urb->transfer_buffer_length = VAR_8;

  VAR_12->tx_room -= VAR_8;

  VAR_6->write_urb->dev = VAR_6->serial->dev;
  VAR_11 = FUNC_9(VAR_6->write_urb, VAR_1);
  if (VAR_11) {
   FUNC_0(" usb_submit_urb(write bulk) failed");
   goto exit;
  }
 } else {


  VAR_10 = 1;
 }

 if (VAR_10) {
  VAR_12->tx_throttled = 1;
  FUNC_3(&VAR_12->unthrottle_work);
 }

 VAR_11 = VAR_8;
exit:
 if (VAR_11 < 0)
  VAR_6->write_urb_busy = 0;
 return VAR_11;
}
