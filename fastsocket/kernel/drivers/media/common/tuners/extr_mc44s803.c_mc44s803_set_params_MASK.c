
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mc44s803_priv {int frequency; } ;
struct dvb_frontend_parameters {int frequency; } ;
struct TYPE_2__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_1__ ops; struct mc44s803_priv* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct mc44s803_priv*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct dvb_frontend*,int) ;
 int FUNC_4 (struct dvb_frontend*,int) ;
 int FUNC_5 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_17,
          struct dvb_frontend_parameters *VAR_18)
{
 struct mc44s803_priv *VAR_19 = VAR_17->tuner_priv;
 u32 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 int VAR_28;

 VAR_19->frequency = VAR_18->frequency;

 VAR_20 = VAR_9 / 1000000;
 VAR_21 = VAR_9 / 100000;

 VAR_22 = (VAR_18->frequency + VAR_4 + 500000) / 1000000;
 VAR_26 = VAR_9 / VAR_20 * VAR_22;
 VAR_24 = ((60 * VAR_22) + (VAR_20 / 2)) / VAR_20;
 VAR_26 = VAR_26 - VAR_18->frequency;

 VAR_23 = (VAR_26 - VAR_5 + 50000) / 100000;
 VAR_25 = ((60 * VAR_23) + (VAR_21 / 2)) / VAR_21;

 if (VAR_17->ops.i2c_gate_ctrl)
  VAR_17->ops.i2c_gate_ctrl(VAR_17, 1);

 VAR_27 = FUNC_0(VAR_16, VAR_1) |
       FUNC_0(VAR_20-1, VAR_10) |
       FUNC_0(VAR_21-1, VAR_11) |
       FUNC_0(1, VAR_12);

 VAR_28 = FUNC_1(VAR_19, VAR_27);
 if (VAR_28)
  goto exit;

 VAR_27 = FUNC_0(VAR_14, VAR_1) |
       FUNC_0(VAR_22-2, VAR_6);

 VAR_28 = FUNC_1(VAR_19, VAR_27);
 if (VAR_28)
  goto exit;

 VAR_27 = FUNC_0(VAR_15, VAR_1) |
       FUNC_0(VAR_23-2, VAR_7);

 VAR_28 = FUNC_1(VAR_19, VAR_27);
 if (VAR_28)
  goto exit;

 VAR_27 = FUNC_0(VAR_13, VAR_1) |
       FUNC_0(1, VAR_3) |
       FUNC_0(VAR_24, VAR_8) |
       FUNC_0(1, VAR_2);

 VAR_28 = FUNC_1(VAR_19, VAR_27);
 if (VAR_28)
  goto exit;

 VAR_27 = FUNC_0(VAR_13, VAR_1) |
       FUNC_0(2, VAR_3) |
       FUNC_0(VAR_25, VAR_8) |
       FUNC_0(1, VAR_2);

 VAR_28 = FUNC_1(VAR_19, VAR_27);
 if (VAR_28)
  goto exit;

 if (VAR_17->ops.i2c_gate_ctrl)
  VAR_17->ops.i2c_gate_ctrl(VAR_17, 0);

 return 0;

exit:
 if (VAR_17->ops.i2c_gate_ctrl)
  VAR_17->ops.i2c_gate_ctrl(VAR_17, 0);

 FUNC_2(VAR_0, "I/O Error\n");
 return VAR_28;
}
