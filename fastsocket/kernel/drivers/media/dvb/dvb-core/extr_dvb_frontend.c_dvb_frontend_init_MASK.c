
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* init ) (struct dvb_frontend*) ;} ;
struct TYPE_5__ {int name; } ;
struct TYPE_7__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;TYPE_2__ tuner_ops; int (* init ) (struct dvb_frontend*) ;TYPE_1__ info; } ;
struct dvb_frontend {TYPE_3__ ops; int id; TYPE_4__* dvb; } ;
struct TYPE_8__ {int num; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct dvb_frontend*) ;
 int FUNC_4 (struct dvb_frontend*,int) ;

__attribute__((used)) static void FUNC_5(struct dvb_frontend *VAR_0)
{
 FUNC_0 ("DVB: initialising adapter %i frontend %i (%s)...\n",
   VAR_0->dvb->num,
   VAR_0->id,
   VAR_0->ops.info.name);

 if (VAR_0->ops.init)
  VAR_0->ops.init(VAR_0);
 if (VAR_0->ops.tuner_ops.init) {
  if (VAR_0->ops.i2c_gate_ctrl)
   VAR_0->ops.i2c_gate_ctrl(VAR_0, 1);
  VAR_0->ops.tuner_ops.init(VAR_0);
  if (VAR_0->ops.i2c_gate_ctrl)
   VAR_0->ops.i2c_gate_ctrl(VAR_0, 0);
 }
}
