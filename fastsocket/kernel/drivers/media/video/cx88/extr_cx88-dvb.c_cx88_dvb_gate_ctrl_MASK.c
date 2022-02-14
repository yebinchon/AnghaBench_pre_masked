
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct videobuf_dvb_frontends {int gate; } ;
struct TYPE_6__ {TYPE_4__* frontend; } ;
struct videobuf_dvb_frontend {TYPE_2__ dvb; } ;
struct cx88_core {TYPE_3__* dvbdev; } ;
struct TYPE_5__ {int (* i2c_gate_ctrl ) (TYPE_4__*,int) ;} ;
struct TYPE_8__ {TYPE_1__ ops; } ;
struct TYPE_7__ {struct videobuf_dvb_frontends frontends; } ;


 int FUNC_0 (TYPE_4__*,int) ;
 struct videobuf_dvb_frontend* FUNC_1 (struct videobuf_dvb_frontends*,int) ;

__attribute__((used)) static void FUNC_2(struct cx88_core *VAR_0, int VAR_1)
{
 struct videobuf_dvb_frontends *VAR_2;
 struct videobuf_dvb_frontend *VAR_3;

 if (!VAR_0->dvbdev)
  return;

 VAR_2 = &VAR_0->dvbdev->frontends;

 if (!VAR_2)
  return;

 if (VAR_2->gate <= 1)
  VAR_3 = FUNC_1(VAR_2, 1);
 else
  VAR_3 = FUNC_1(VAR_2, VAR_2->gate);

 if (VAR_3 && VAR_3->dvb.frontend && VAR_3->dvb.frontend->ops.i2c_gate_ctrl)
  VAR_3->dvb.frontend->ops.i2c_gate_ctrl(VAR_3->dvb.frontend, VAR_1);
}
