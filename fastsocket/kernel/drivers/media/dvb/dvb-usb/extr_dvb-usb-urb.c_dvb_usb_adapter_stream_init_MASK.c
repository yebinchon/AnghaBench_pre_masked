
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int caps; int stream; } ;
struct TYPE_6__ {struct dvb_usb_adapter* user_priv; int complete; int udev; } ;
struct dvb_usb_adapter {TYPE_2__ props; TYPE_3__ stream; TYPE_1__* dev; } ;
struct TYPE_4__ {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int *) ;

int FUNC_1(struct dvb_usb_adapter *VAR_3)
{
 VAR_3->stream.udev = VAR_3->dev->udev;
 if (VAR_3->props.caps & VAR_0)
  VAR_3->stream.complete = VAR_2;
 else
 VAR_3->stream.complete = VAR_1;
 VAR_3->stream.user_priv = VAR_3;
 return FUNC_0(&VAR_3->stream, &VAR_3->props.stream);
}
