
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mc44s803_priv {TYPE_1__* cfg; } ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_2__ ops; struct mc44s803_priv* tuner_priv; } ;
struct TYPE_3__ {int dig_out; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (struct mc44s803_priv*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct dvb_frontend*,int) ;
 int FUNC_5 (struct dvb_frontend*,int) ;
 int FUNC_6 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_29)
{
 struct mc44s803_priv *VAR_30 = VAR_29->tuner_priv;
 u32 VAR_31;
 int VAR_32;

 if (VAR_29->ops.i2c_gate_ctrl)
  VAR_29->ops.i2c_gate_ctrl(VAR_29, 1);


 VAR_31 = FUNC_0(VAR_24, VAR_1) |
       FUNC_0(1, VAR_25);

 VAR_32 = FUNC_1(VAR_30, VAR_31);
 if (VAR_32)
  goto exit;

 VAR_31 = FUNC_0(VAR_24, VAR_1);

 VAR_32 = FUNC_1(VAR_30, VAR_31);
 if (VAR_32)
  goto exit;



 VAR_31 = FUNC_0(VAR_23, VAR_1) |
       FUNC_0(0xC0, VAR_17) |
       FUNC_0(1, VAR_15);

 VAR_32 = FUNC_1(VAR_30, VAR_31);
 if (VAR_32)
  goto exit;

 VAR_31 = FUNC_0(VAR_22, VAR_1) |
       FUNC_0(0x200, VAR_16);

 VAR_32 = FUNC_1(VAR_30, VAR_31);
 if (VAR_32)
  goto exit;

 FUNC_3(10);

 VAR_31 = FUNC_0(VAR_23, VAR_1) |
       FUNC_0(0x40, VAR_17) |
       FUNC_0(1, VAR_15);

 VAR_32 = FUNC_1(VAR_30, VAR_31);
 if (VAR_32)
  goto exit;

 FUNC_3(20);



 VAR_31 = FUNC_0(VAR_21, VAR_1) |
       FUNC_0(1, VAR_27) |
       FUNC_0(0x7F, VAR_14);

 VAR_32 = FUNC_1(VAR_30, VAR_31);
 if (VAR_32)
  goto exit;



 VAR_31 = FUNC_0(VAR_18, VAR_1) |
       FUNC_0(1, VAR_9) |
       FUNC_0(1, VAR_10) |
       FUNC_0(0x3, VAR_6) |
       FUNC_0(1, VAR_11) |
       FUNC_0(VAR_30->cfg->dig_out, VAR_26) |
       FUNC_0(0x3, VAR_13) |
       FUNC_0(1, VAR_8) |
       FUNC_0(1, VAR_7);

 VAR_32 = FUNC_1(VAR_30, VAR_31);
 if (VAR_32)
  goto exit;

 VAR_31 = FUNC_0(VAR_18, VAR_1) |
       FUNC_0(1, VAR_9) |
       FUNC_0(1, VAR_10) |
       FUNC_0(0x3, VAR_6) |
       FUNC_0(1, VAR_11) |
       FUNC_0(VAR_30->cfg->dig_out, VAR_26) |
       FUNC_0(0x3, VAR_13);

 VAR_32 = FUNC_1(VAR_30, VAR_31);
 if (VAR_32)
  goto exit;



 VAR_31 = FUNC_0(VAR_19, VAR_1) |
       FUNC_0(3, VAR_28);

 VAR_32 = FUNC_1(VAR_30, VAR_31);
 if (VAR_32)
  goto exit;



 VAR_31 = FUNC_0(VAR_20, VAR_1) |
       FUNC_0(1, VAR_4) |
       FUNC_0(1, VAR_5) |
       FUNC_0(1, VAR_2) |
       FUNC_0(1, VAR_3) |
       FUNC_0(1, VAR_12);

 VAR_32 = FUNC_1(VAR_30, VAR_31);
 if (VAR_32)
  goto exit;

 if (VAR_29->ops.i2c_gate_ctrl)
  VAR_29->ops.i2c_gate_ctrl(VAR_29, 0);
 return 0;

exit:
 if (VAR_29->ops.i2c_gate_ctrl)
  VAR_29->ops.i2c_gate_ctrl(VAR_29, 0);

 FUNC_2(VAR_0, "I/O Error\n");
 return VAR_32;
}
