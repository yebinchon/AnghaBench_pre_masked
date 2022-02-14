
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lme2510_state {int tuner_config; } ;
struct dvb_usb_adapter {TYPE_1__* dev; int fe; } ;
struct TYPE_2__ {int udev; int i2c_adap; struct lme2510_state* priv; } ;


 int VAR_0 ;


 int FUNC_0 (int ,int ,int,int *,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int FUNC_2 (struct dvb_usb_adapter*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_adapter *VAR_4)
{
 struct lme2510_state *VAR_5 = VAR_4->dev->priv;
 char *VAR_6[] = {"", "TDA8263", "IX2505V"};
 int VAR_7 = 0;

 switch (VAR_5->tuner_config) {
 case 129:
  if (FUNC_0(VAR_3, VAR_4->fe, 0xc0,
   &VAR_4->dev->i2c_adap, 1))
   VAR_7 = VAR_5->tuner_config;
  break;
 case 128:
  if (FUNC_0(VAR_1 , VAR_4->fe, VAR_2,
   &VAR_4->dev->i2c_adap))
   VAR_7 = VAR_5->tuner_config;
  break;
 default:
  break;
 }

 if (VAR_7)
  FUNC_1("TUN Found %s tuner", VAR_6[VAR_7]);
 else {
  FUNC_1("TUN No tuner found --- reseting device");
  FUNC_3(VAR_4->dev->udev);
  return -VAR_0;
 }


 VAR_7 = FUNC_2(VAR_4);

 return VAR_7;
}
