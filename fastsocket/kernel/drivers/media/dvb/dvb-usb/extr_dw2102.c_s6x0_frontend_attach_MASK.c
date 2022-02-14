
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_3__* fe; TYPE_1__* dev; } ;
struct TYPE_5__ {void* set_voltage; } ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {int i2c_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,TYPE_3__*,int,...) ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_10)
{
 VAR_10->fe = FUNC_0(VAR_5, &VAR_9,
   VAR_10->dev->i2c_adap);
 if (VAR_10->fe != ((void*)0)) {
  if (FUNC_0(VAR_8, VAR_10->fe, 0x60,
    &VAR_10->dev->i2c_adap)) {
   VAR_10->fe->ops.set_voltage = VAR_3;
   FUNC_1("Attached zl100313+zl10039!\n");
   return 0;
  }
 }

 VAR_10->fe = FUNC_0(VAR_7, &VAR_4,
   VAR_10->dev->i2c_adap);
 if (VAR_10->fe != ((void*)0)) {
  if (FUNC_0(VAR_6, VAR_10->fe, 0x61,
    &VAR_10->dev->i2c_adap)) {
   VAR_10->fe->ops.set_voltage = VAR_3;
   FUNC_1("Attached stv0288+stb6000!\n");
   return 0;
  }
 }

 VAR_10->fe = FUNC_0(VAR_1, &VAR_2,
   VAR_10->dev->i2c_adap);
 if (VAR_10->fe != ((void*)0)) {
  VAR_10->fe->ops.set_voltage = VAR_3;
  FUNC_1("Attached ds3000+ds2020!\n");
  return 0;
 }

 return -VAR_0;
}
