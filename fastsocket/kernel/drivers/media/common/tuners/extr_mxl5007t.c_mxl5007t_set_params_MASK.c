
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct mxl5007t_state {int bandwidth; int lock; int frequency; } ;
struct TYPE_8__ {int bandwidth; } ;
struct TYPE_6__ {int modulation; } ;
struct TYPE_9__ {TYPE_3__ ofdm; TYPE_1__ vsb; } ;
struct dvb_frontend_parameters {TYPE_4__ u; int frequency; } ;
struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_10__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;TYPE_2__ info; } ;
struct dvb_frontend {TYPE_5__ ops; struct mxl5007t_state* tuner_priv; } ;
typedef enum mxl5007t_mode { ____Placeholder_mxl5007t_mode } mxl5007t_mode ;
typedef enum mxl5007t_bw_mhz { ____Placeholder_mxl5007t_bw_mhz } mxl5007t_bw_mhz ;





 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mxl5007t_state*,int) ;
 int FUNC_3 (struct mxl5007t_state*,int ,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct dvb_frontend*,int) ;
 int FUNC_7 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_9,
          struct dvb_frontend_parameters *VAR_10)
{
 struct mxl5007t_state *VAR_11 = VAR_9->tuner_priv;
 enum mxl5007t_bw_mhz VAR_12;
 enum mxl5007t_mode VAR_13;
 int VAR_14;
 u32 VAR_15 = VAR_10->frequency;

 if (VAR_9->ops.info.type == VAR_1) {
  switch (VAR_10->u.vsb.modulation) {
  case 128:
  case 129:
   VAR_13 = VAR_6;
   break;
  case 130:
  case 131:
   VAR_13 = VAR_7;
   break;
  default:
   FUNC_4("modulation not set!");
   return -VAR_0;
  }
  VAR_12 = VAR_3;
 } else if (VAR_9->ops.info.type == VAR_2) {
  switch (VAR_10->u.ofdm.bandwidth) {
  case 134:
   VAR_12 = VAR_3;
   break;
  case 133:
   VAR_12 = VAR_4;
   break;
  case 132:
   VAR_12 = VAR_5;
   break;
  default:
   FUNC_4("bandwidth not set!");
   return -VAR_0;
  }
  VAR_13 = VAR_8;
 } else {
  FUNC_4("modulation type not supported!");
  return -VAR_0;
 }

 if (VAR_9->ops.i2c_gate_ctrl)
  VAR_9->ops.i2c_gate_ctrl(VAR_9, 1);

 FUNC_0(&VAR_11->lock);

 VAR_14 = FUNC_2(VAR_11, VAR_13);
 if (FUNC_5(VAR_14))
  goto fail;

 VAR_14 = FUNC_3(VAR_11, VAR_15, VAR_12);
 if (FUNC_5(VAR_14))
  goto fail;

 VAR_11->frequency = VAR_15;
 VAR_11->bandwidth = (VAR_9->ops.info.type == VAR_2) ?
  VAR_10->u.ofdm.bandwidth : 0;
fail:
 FUNC_1(&VAR_11->lock);

 if (VAR_9->ops.i2c_gate_ctrl)
  VAR_9->ops.i2c_gate_ctrl(VAR_9, 0);

 return VAR_14;
}
