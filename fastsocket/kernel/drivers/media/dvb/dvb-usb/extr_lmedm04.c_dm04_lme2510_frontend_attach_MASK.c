
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lme2510_state {int i2c_talk_onoff; int i2c_gate; int i2c_tuner_gate_w; int i2c_tuner_gate_r; int i2c_tuner_addr; int tuner_config; } ;
struct dvb_usb_adapter {TYPE_3__* fe; TYPE_1__* dev; } ;
struct TYPE_5__ {int set_voltage; } ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {int udev; int i2c_adap; struct lme2510_state* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int *,int *) ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct dvb_usb_adapter*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_adapter *VAR_9)
{
 struct lme2510_state *VAR_10 = VAR_9->dev->priv;

 int VAR_11 = 0;

 VAR_10->i2c_talk_onoff = 1;

 VAR_10->i2c_gate = 4;
 VAR_9->fe = FUNC_0(VAR_7, &VAR_8,
  &VAR_9->dev->i2c_adap);

 if (VAR_9->fe) {
  FUNC_1("TUN Found Frontend TDA10086");
  VAR_10->i2c_tuner_gate_w = 4;
  VAR_10->i2c_tuner_gate_r = 4;
  VAR_10->i2c_tuner_addr = 0xc0;
  VAR_10->tuner_config = VAR_1;
  if (VAR_4 != 1) {
   VAR_4 = 1;
   VAR_11 = FUNC_3(VAR_9->dev->udev, 1);
  } else
   VAR_4 = 0;
  goto end;
 }

 VAR_10->i2c_gate = 5;
 VAR_9->fe = FUNC_0(VAR_6, &VAR_5,
   &VAR_9->dev->i2c_adap);

 if (VAR_9->fe) {
  FUNC_1("FE Found Stv0288");
  VAR_10->i2c_tuner_gate_w = 4;
  VAR_10->i2c_tuner_gate_r = 5;
  VAR_10->i2c_tuner_addr = 0xc0;
  VAR_10->tuner_config = VAR_2;
  if (VAR_4 != 0) {
   VAR_4 = 0;
   VAR_11 = FUNC_3(VAR_9->dev->udev, 1);
  }
 } else {
  FUNC_1("DM04 Not Supported");
  return -VAR_0;
 }

end: if (VAR_11) {
  FUNC_2(VAR_9->fe);
  VAR_9->fe = ((void*)0);
  return -VAR_0;
 }

 VAR_9->fe->ops.set_voltage = VAR_3;
 VAR_11 = FUNC_4(VAR_9);

 return VAR_11;
}
