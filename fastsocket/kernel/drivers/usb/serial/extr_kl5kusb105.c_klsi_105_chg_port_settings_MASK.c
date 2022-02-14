
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_serial_port {TYPE_1__* serial; int dev; } ;
struct klsi_105_port_settings {int unknown2; int unknown1; int databits; int baudrate; int pktlen; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {TYPE_2__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int,int ,int ,struct klsi_105_port_settings*,int,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_serial_port *VAR_5,
          struct klsi_105_port_settings *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5->serial->dev,
   FUNC_3(VAR_5->serial->dev, 0),
   VAR_0,
   VAR_4 | VAR_2 | VAR_3,
   0,
   0,
   VAR_6,
   sizeof(struct klsi_105_port_settings),
   VAR_1);
 if (VAR_7 < 0)
  FUNC_0(&VAR_5->dev,
   "Change port settings failed (error = %d)\n", VAR_7);
 FUNC_1(&VAR_5->serial->dev->dev,
   "%d byte block, baudrate %x, databits %d, u1 %d, u2 %d\n",
   VAR_6->pktlen, VAR_6->baudrate, VAR_6->databits,
   VAR_6->unknown1, VAR_6->unknown2);
 return VAR_7;
}
