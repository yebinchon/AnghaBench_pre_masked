
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {TYPE_1__* serial; int dev; } ;
struct ftdi_private {int interface; } ;
struct TYPE_2__ {int disc_mutex; int dev; int disconnected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_serial_port*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_serial_port*,int) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,int ,int ,char*,int ,int ) ;
 struct ftdi_private* FUNC_6 (struct usb_serial_port*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct usb_serial_port *VAR_5, int VAR_6)
{
 struct ftdi_private *VAR_7 = FUNC_6(VAR_5);
 char VAR_8[1];

 FUNC_2(&VAR_5->serial->disc_mutex);
 if (!VAR_5->serial->disconnected) {

  if (!VAR_6 && FUNC_5(VAR_5->serial->dev,
       FUNC_7(VAR_5->serial->dev, 0),
       VAR_0,
       VAR_1,
       0, VAR_7->interface, VAR_8, 0,
       VAR_4) < 0) {
       FUNC_1(&VAR_5->dev, "error from flowcontrol urb\n");
  }

  if (VAR_6)
   FUNC_4(VAR_5, VAR_2 | VAR_3);
  else
   FUNC_0(VAR_5, VAR_2 | VAR_3);
 }
 FUNC_3(&VAR_5->serial->disc_mutex);
}
