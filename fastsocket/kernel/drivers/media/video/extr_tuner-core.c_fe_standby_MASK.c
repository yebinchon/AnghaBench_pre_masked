
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_tuner_ops {int (* sleep ) (struct dvb_frontend*) ;} ;
struct TYPE_2__ {struct dvb_tuner_ops tuner_ops; } ;
struct dvb_frontend {TYPE_1__ ops; } ;


 int FUNC_0 (struct dvb_frontend*) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_0)
{
 struct dvb_tuner_ops *VAR_1 = &VAR_0->ops.tuner_ops;

 if (VAR_1->sleep)
  VAR_1->sleep(VAR_0);
}
