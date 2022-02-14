
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* release ) (struct dvb_frontend*) ;} ;
struct TYPE_6__ {int (* release ) (struct dvb_frontend*) ;} ;
struct TYPE_5__ {int (* release ) (struct dvb_frontend*) ;TYPE_1__ analog_ops; TYPE_3__ tuner_ops; int (* release_sec ) (struct dvb_frontend*) ;} ;
struct dvb_frontend {TYPE_2__ ops; } ;


 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dvb_frontend*) ;

void FUNC_4(struct dvb_frontend* VAR_0)
{
 if (VAR_0->ops.release_sec)
  VAR_0->ops.release_sec(VAR_0);
 if (VAR_0->ops.tuner_ops.release)
  VAR_0->ops.tuner_ops.release(VAR_0);
 if (VAR_0->ops.analog_ops.release)
  VAR_0->ops.analog_ops.release(VAR_0);
 if (VAR_0->ops.release)
  VAR_0->ops.release(VAR_0);
}
