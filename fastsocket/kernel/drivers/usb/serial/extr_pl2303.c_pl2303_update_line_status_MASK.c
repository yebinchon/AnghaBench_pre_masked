
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef scalar_t__ u16 ;
struct usb_serial_port {TYPE_3__* serial; } ;
struct pl2303_private {unsigned char line_status; int delta_msr_wait; int lock; } ;
struct TYPE_6__ {TYPE_2__* dev; } ;
struct TYPE_4__ {int idProduct; int idVendor; } ;
struct TYPE_5__ {TYPE_1__ descriptor; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct pl2303_private* FUNC_3 (struct usb_serial_port*) ;
 int FUNC_4 (struct usb_serial_port*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct usb_serial_port *VAR_6,
          unsigned char *VAR_7,
          unsigned int VAR_8)
{

 struct pl2303_private *VAR_9 = FUNC_3(VAR_6);
 unsigned long VAR_10;
 u8 VAR_11 = VAR_5;
 u8 VAR_12 = VAR_5 + 1;
 u16 VAR_13, VAR_14;

 VAR_13 = FUNC_0(VAR_6->serial->dev->descriptor.idVendor);
 VAR_14 = FUNC_0(VAR_6->serial->dev->descriptor.idProduct);


 if (VAR_13 == VAR_3) {
  if (VAR_14 == VAR_1 ||
      VAR_14 == VAR_0 ||
      VAR_14 == VAR_2) {

   VAR_12 = 1;
   VAR_11 = 0;
  }
 }

 if (VAR_8 < VAR_12)
  return;


 FUNC_1(&VAR_9->lock, VAR_10);
 VAR_9->line_status = VAR_7[VAR_11];
 FUNC_2(&VAR_9->lock, VAR_10);
 if (VAR_9->line_status & VAR_4)
  FUNC_4(VAR_6);
 FUNC_5(&VAR_9->delta_msr_wait);
}
