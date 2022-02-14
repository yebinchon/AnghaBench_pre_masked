
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int (* get_status ) (struct dvb_frontend*,int*) ;} ;
struct TYPE_6__ {TYPE_2__ tuner_ops; } ;
struct dvb_frontend {TYPE_3__ ops; struct cx24123_state* demodulator_priv; } ;
struct cx24123_state {TYPE_1__* config; } ;
typedef int fe_status_t ;
struct TYPE_4__ {scalar_t__ dont_use_pll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cx24123_state*,int) ;
 int FUNC_1 (struct dvb_frontend*,int*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_6, fe_status_t *VAR_7)
{
 struct cx24123_state *VAR_8 = VAR_6->demodulator_priv;
 int VAR_9 = FUNC_0(VAR_8, 0x14);

 *VAR_7 = 0;
 if (VAR_8->config->dont_use_pll) {
  u32 VAR_10 = 0;
  if (VAR_6->ops.tuner_ops.get_status)
   VAR_6->ops.tuner_ops.get_status(VAR_6, &VAR_10);
  if (VAR_10 & VAR_5)
   *VAR_7 |= VAR_2;
 } else {
  int VAR_11 = FUNC_0(VAR_8, 0x20);
  if (VAR_11 & 0x01)
   *VAR_7 |= VAR_2;
 }

 if (VAR_9 & 0x02)
  *VAR_7 |= VAR_0;
 if (VAR_9 & 0x04)
  *VAR_7 |= VAR_4;


 if (VAR_9 & 0x08)
  *VAR_7 |= VAR_3;
 if (VAR_9 & 0x80)
  *VAR_7 |= VAR_1;

 return 0;
}
