
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_frequency {int frequency; int type; scalar_t__ tuner; } ;
struct saa7134_dev {int i2c_adap; } ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct dvb_frontend_parameters {int frequency; } ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_2__ ops; TYPE_1__* dvb; } ;
typedef int off ;
struct TYPE_3__ {struct saa7134_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct saa7134_dev*,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct saa7134_dev*,int ,int ,struct v4l2_frequency*) ;
 int FUNC_4 (struct dvb_frontend*,int) ;
 int FUNC_5 (struct dvb_frontend*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend* VAR_4,
        struct dvb_frontend_parameters* VAR_5)
{
 u8 VAR_6[] = { 0x00, 0xf1};
 u8 VAR_7[] = { 0x00, 0x71};
 struct i2c_msg VAR_8 = {.addr=0x43, .flags=0, .buf=VAR_6, .len = sizeof(VAR_6)};

 struct saa7134_dev *VAR_9 = VAR_4->dvb->priv;
 struct v4l2_frequency VAR_10;


 VAR_10.tuner = 0;
 VAR_10.type = VAR_0;
 VAR_10.frequency = VAR_5->frequency / 1000 * 16 / 1000;
 if (VAR_4->ops.i2c_gate_ctrl)
  VAR_4->ops.i2c_gate_ctrl(VAR_4, 1);
 FUNC_0(&VAR_9->i2c_adap, &VAR_8, 1);
 FUNC_3(VAR_9, VAR_3, VAR_2, &VAR_10);
 VAR_8.buf = VAR_7;
 if (VAR_4->ops.i2c_gate_ctrl)
  VAR_4->ops.i2c_gate_ctrl(VAR_4, 1);
 FUNC_0(&VAR_9->i2c_adap, &VAR_8, 1);

 FUNC_2(VAR_9, VAR_1);


 return FUNC_1(VAR_4);
}
