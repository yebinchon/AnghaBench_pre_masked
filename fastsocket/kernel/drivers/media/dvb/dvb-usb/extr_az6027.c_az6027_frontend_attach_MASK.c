
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_3__* fe; TYPE_2__* dev; } ;
struct TYPE_13__ {int demod_address; } ;
struct TYPE_12__ {int tuner_address; } ;
struct TYPE_9__ {int set_voltage; } ;
struct TYPE_11__ {TYPE_1__ ops; } ;
struct TYPE_10__ {int i2c_adap; } ;


 int FUNC_0 (struct dvb_usb_adapter*) ;
 int FUNC_1 (struct dvb_usb_adapter*) ;
 int FUNC_2 (struct dvb_usb_adapter*) ;
 int FUNC_3 (struct dvb_usb_adapter*,int ) ;
 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_4 (char*,struct dvb_usb_adapter*,...) ;
 TYPE_3__* FUNC_5 (TYPE_6__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_4__*,int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct dvb_usb_adapter *VAR_3)
{

 FUNC_1(VAR_3);
 FUNC_2(VAR_3);

 FUNC_4("adap = %p, dev = %p\n", VAR_3, VAR_3->dev);
 VAR_3->fe = FUNC_5(&VAR_1, &VAR_3->dev->i2c_adap);

 if (VAR_3->fe) {
  FUNC_4("found STB0899 DVB-S/DVB-S2 frontend @0x%02x", VAR_1.demod_address);
  if (FUNC_6(VAR_3->fe, &VAR_2, &VAR_3->dev->i2c_adap)) {
   FUNC_4("found STB6100 DVB-S/DVB-S2 frontend @0x%02x", VAR_2.tuner_address);
   VAR_3->fe->ops.set_voltage = VAR_0;
   FUNC_0(VAR_3);
  } else {
   VAR_3->fe = ((void*)0);
  }
 } else
  FUNC_7("no front-end attached\n");

 FUNC_3(VAR_3, 0);

 return 0;
}
