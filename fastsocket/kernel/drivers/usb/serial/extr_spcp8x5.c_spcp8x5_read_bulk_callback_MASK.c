
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ count; } ;
struct usb_serial_port {int dev; TYPE_1__* serial; TYPE_2__ port; } ;
struct urb {unsigned char* transfer_buffer; int status; int actual_length; int dev; struct usb_serial_port* context; } ;
struct tty_struct {int dummy; } ;
struct spcp8x5_private {int line_status; int delta_msr_wait; int lock; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct tty_struct*,int) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_struct*,unsigned char,char) ;
 int FUNC_6 (struct tty_struct*) ;
 struct tty_struct* FUNC_7 (TYPE_2__*) ;
 struct spcp8x5_private* FUNC_8 (struct usb_serial_port*) ;
 int FUNC_9 (struct urb*,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct urb *VAR_12)
{
 struct usb_serial_port *VAR_13 = VAR_12->context;
 struct spcp8x5_private *VAR_14 = FUNC_8(VAR_13);
 struct tty_struct *VAR_15;
 unsigned char *VAR_16 = VAR_12->transfer_buffer;
 unsigned long VAR_17;
 int VAR_18;
 int VAR_19 = VAR_12->status;
 u8 VAR_20;
 char VAR_21;

 FUNC_0(&VAR_13->dev, "start, result = %d, urb->actual_length = %d\n,",
  VAR_19, VAR_12->actual_length);


 if (VAR_19) {
  if (!VAR_13->port.count)
   return;
  if (VAR_19 == -VAR_0) {


   VAR_12->dev = VAR_13->serial->dev;
   VAR_19 = FUNC_9(VAR_12 , VAR_1);
   if (VAR_19)
    FUNC_0(&VAR_13->dev,
     "failed submitting read urb %d\n",
     VAR_19);
   return;
  }
  FUNC_0(&VAR_13->dev, "unable to handle the error, exiting.\n");
  return;
 }


 VAR_21 = VAR_4;

 FUNC_1(&VAR_14->lock, VAR_17);
 VAR_20 = VAR_14->line_status;
 VAR_14->line_status &= ~VAR_11;
 FUNC_2(&VAR_14->lock, VAR_17);

 FUNC_10(&VAR_14->delta_msr_wait);



 if (VAR_20 & VAR_7)
  VAR_21 = VAR_2;
 else if (VAR_20 & VAR_10)
  VAR_21 = VAR_6;
 else if (VAR_20 & VAR_8)
  VAR_21 = VAR_3;
 FUNC_0(&VAR_13->dev, "tty_flag = %d\n", VAR_21);

 VAR_15 = FUNC_7(&VAR_13->port);
 if (VAR_15 && VAR_12->actual_length) {
  FUNC_3(VAR_15, VAR_12->actual_length + 1);

  if (VAR_20 & VAR_9)
   FUNC_5(VAR_15, 0, VAR_5);
  for (VAR_18 = 0; VAR_18 < VAR_12->actual_length; ++VAR_18)
   FUNC_5(VAR_15, VAR_16[VAR_18], VAR_21);
  FUNC_4(VAR_15);
 }
 FUNC_6(VAR_15);


 if (VAR_13->port.count) {
  VAR_12->dev = VAR_13->serial->dev;
  VAR_19 = FUNC_9(VAR_12 , VAR_1);
  if (VAR_19)
   FUNC_0(&VAR_13->dev, "failed submitting read urb %d\n",
    VAR_19);
 }

 return;
}
