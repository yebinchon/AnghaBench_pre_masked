
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_1__* dev; int fe; struct dibusb_state* priv; } ;
struct dibusb_state {int tuner_addr; } ;
struct TYPE_2__ {int i2c_adap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_2)
{
 struct dibusb_state *VAR_3 = VAR_2->priv;

 VAR_3->tuner_addr = 0x60;

 FUNC_0(VAR_1, VAR_2->fe, 0x60, &VAR_2->dev->i2c_adap,
     VAR_0);
 return 0;
}
