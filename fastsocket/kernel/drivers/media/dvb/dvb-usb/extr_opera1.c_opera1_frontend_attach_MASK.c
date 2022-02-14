
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_3__* fe; TYPE_1__* dev; } ;
struct TYPE_5__ {int set_voltage; } ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {int i2c_adap; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_4)
{
 if ((VAR_4->fe =
      FUNC_0(VAR_3, &VAR_2,
   &VAR_4->dev->i2c_adap)) != ((void*)0)) {
  VAR_4->fe->ops.set_voltage = VAR_1;
  return 0;
 }
 FUNC_1("not attached stv0299");
 return -VAR_0;
}
