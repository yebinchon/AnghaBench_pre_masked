
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt352_config {int demod_address; int demod_init; } ;
struct dvb_usb_adapter {TYPE_1__* dev; int fe; } ;
struct TYPE_2__ {int i2c_adap; } ;


 int FUNC_0 (int ,struct mt352_config*,int *) ;
 int FUNC_1 (struct mt352_config*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_2)
{
 struct mt352_config VAR_3;

 FUNC_1(&VAR_3,0,sizeof(struct mt352_config));
 VAR_3.demod_init = VAR_1;
 VAR_3.demod_address = 0xf;

 VAR_2->fe = FUNC_0(VAR_0, &VAR_3, &VAR_2->dev->i2c_adap);

 return 0;
}
