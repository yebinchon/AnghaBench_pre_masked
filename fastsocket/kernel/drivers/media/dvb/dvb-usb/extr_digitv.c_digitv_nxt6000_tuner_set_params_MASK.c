
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct dvb_usb_adapter {int dev; } ;
struct dvb_frontend_parameters {int dummy; } ;
struct TYPE_5__ {int (* calc_regs ) (struct dvb_frontend*,struct dvb_frontend_parameters*,int *,int) ;} ;
struct TYPE_6__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;TYPE_2__ tuner_ops; } ;
struct dvb_frontend {TYPE_3__ ops; TYPE_1__* dvb; } ;
typedef int b ;
struct TYPE_4__ {struct dvb_usb_adapter* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,int,int *,int ) ;
 int FUNC_1 (struct dvb_frontend*,struct dvb_frontend_parameters*,int *,int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1, struct dvb_frontend_parameters *VAR_2)
{
 struct dvb_usb_adapter *VAR_3 = VAR_1->dvb->priv;
 u8 VAR_4[5];

 VAR_1->ops.tuner_ops.calc_regs(VAR_1, VAR_2, VAR_4, sizeof(VAR_4));
 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);
 return FUNC_0(VAR_3->dev, VAR_0, 0, &VAR_4[1], 4, ((void*)0), 0);
}
