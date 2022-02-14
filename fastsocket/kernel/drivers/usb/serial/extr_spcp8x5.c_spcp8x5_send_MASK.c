
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial_port {int work; int dev; TYPE_2__* write_urb; TYPE_1__* serial; int bulk_out_size; } ;
struct spcp8x5_private {int write_urb_in_use; int lock; int buf; } ;
struct TYPE_4__ {int transfer_buffer_length; int dev; int transfer_buffer; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct spcp8x5_private* FUNC_6 (struct usb_serial_port*) ;
 int FUNC_7 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_8(struct usb_serial_port *VAR_1)
{
 int VAR_2, VAR_3;
 struct spcp8x5_private *VAR_4 = FUNC_6(VAR_1);
 unsigned long VAR_5;

 FUNC_4(&VAR_4->lock, VAR_5);

 if (VAR_4->write_urb_in_use) {
  FUNC_0(&VAR_1->dev, "write urb still used\n");
  FUNC_5(&VAR_4->lock, VAR_5);
  return;
 }


 FUNC_2(VAR_1->write_urb->transfer_buffer , 0x00 , VAR_1->bulk_out_size);
 VAR_2 = FUNC_1(VAR_4->buf, VAR_1->write_urb->transfer_buffer,
  VAR_1->bulk_out_size);

 if (VAR_2 == 0) {
  FUNC_5(&VAR_4->lock, VAR_5);
  return;
 }


 VAR_4->write_urb_in_use = 1;

 FUNC_5(&VAR_4->lock, VAR_5);

 VAR_1->write_urb->transfer_buffer_length = VAR_2;
 VAR_1->write_urb->dev = VAR_1->serial->dev;

 VAR_3 = FUNC_7(VAR_1->write_urb, VAR_0);
 if (VAR_3) {
  FUNC_0(&VAR_1->dev, "failed submitting write urb, error %d\n",
   VAR_3);
  VAR_4->write_urb_in_use = 0;

 }


 FUNC_3(&VAR_1->work);
}
