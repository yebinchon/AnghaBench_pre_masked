
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct isl6405 {int i2c_addr; int override_or; int override_and; struct i2c_adapter* i2c; int config; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {int enable_high_lnb_voltage; scalar_t__ (* set_voltage ) (struct dvb_frontend*,int ) ;int release_sec; } ;
struct dvb_frontend {TYPE_1__ ops; struct isl6405* sec_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct dvb_frontend*,int ) ;
 int FUNC_1 (struct isl6405*) ;
 struct isl6405* FUNC_2 (int,int ) ;

struct dvb_frontend *FUNC_3(struct dvb_frontend *VAR_6, struct i2c_adapter *VAR_7,
        u8 VAR_8, u8 VAR_9, u8 VAR_10)
{
 struct isl6405 *VAR_11 = FUNC_2(sizeof(struct isl6405), VAR_0);
 if (!VAR_11)
  return ((void*)0);


 if (VAR_9 & 0x80)
  VAR_11->config = VAR_2;
 else
  VAR_11->config = VAR_1;
 VAR_11->i2c = VAR_7;
 VAR_11->i2c_addr = VAR_8;
 VAR_6->sec_priv = VAR_11;


 VAR_11->override_or = VAR_9;


 VAR_11->override_and = ~VAR_10;


 if (FUNC_0(VAR_6, VAR_3)) {
  FUNC_1(VAR_11);
  VAR_6->sec_priv = ((void*)0);
  return ((void*)0);
 }


 VAR_6->ops.release_sec = VAR_5;


 VAR_6->ops.set_voltage = FUNC_0;
 VAR_6->ops.enable_high_lnb_voltage = VAR_4;

 return VAR_6;
}
