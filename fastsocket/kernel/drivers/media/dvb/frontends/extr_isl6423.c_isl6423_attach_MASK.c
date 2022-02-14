
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isl6423_dev {int reg_3; int reg_4; int verbose; struct i2c_adapter* i2c; struct isl6423_config const* config; } ;
struct isl6423_config {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {int enable_high_lnb_voltage; int set_voltage; int release_sec; } ;
struct dvb_frontend {struct isl6423_dev* sec_priv; TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dvb_frontend*) ;
 scalar_t__ FUNC_1 (struct dvb_frontend*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct isl6423_dev*) ;
 struct isl6423_dev* FUNC_3 (int,int ) ;
 int VAR_4 ;

struct dvb_frontend *FUNC_4(struct dvb_frontend *VAR_5,
        struct i2c_adapter *VAR_6,
        const struct isl6423_config *VAR_7)
{
 struct isl6423_dev *VAR_8;

 VAR_8 = FUNC_3(sizeof(struct isl6423_dev), VAR_0);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->config = VAR_7;
 VAR_8->i2c = VAR_6;
 VAR_5->sec_priv = VAR_8;


 VAR_8->reg_3 = 0x02 << 5;

 VAR_8->reg_4 = 0x03 << 5;

 if (FUNC_0(VAR_5))
  goto exit;

 if (FUNC_1(VAR_5))
  goto exit;

 VAR_5->ops.release_sec = VAR_1;
 VAR_5->ops.set_voltage = VAR_2;
 VAR_5->ops.enable_high_lnb_voltage = VAR_3;
 VAR_8->verbose = VAR_4;

 return VAR_5;

exit:
 FUNC_2(VAR_8);
 VAR_5->sec_priv = ((void*)0);
 return ((void*)0);
}
