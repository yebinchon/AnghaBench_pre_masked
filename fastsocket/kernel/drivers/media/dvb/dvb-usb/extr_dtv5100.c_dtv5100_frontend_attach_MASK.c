
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_3__* fe; TYPE_1__* dev; } ;
struct TYPE_5__ {int * i2c_gate_ctrl; } ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {int i2c_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ,int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_3)
{
 VAR_3->fe = FUNC_0(VAR_2, &VAR_1,
         &VAR_3->dev->i2c_adap);
 if (VAR_3->fe == ((void*)0))
  return -VAR_0;


 VAR_3->fe->ops.i2c_gate_ctrl = ((void*)0);

 return 0;
}
