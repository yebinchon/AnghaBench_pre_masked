
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {char* name; struct i2c_adapter* adap; int addr; } ;
struct tea5761_priv {TYPE_1__ i2c_props; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_4__ {int tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; struct tea5761_priv* tuner_priv; } ;


 int VAR_0 ;
 struct tea5761_priv* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (struct i2c_adapter*,int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,char*) ;

struct dvb_frontend *FUNC_4(struct dvb_frontend *VAR_2,
        struct i2c_adapter* VAR_3,
        u8 VAR_4)
{
 struct tea5761_priv *VAR_5 = ((void*)0);

 if (FUNC_2(VAR_3, VAR_4) != 0)
  return ((void*)0);

 VAR_5 = FUNC_0(sizeof(struct tea5761_priv), VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 VAR_2->tuner_priv = VAR_5;

 VAR_5->i2c_props.addr = VAR_4;
 VAR_5->i2c_props.adap = VAR_3;
 VAR_5->i2c_props.name = "tea5761";

 FUNC_1(&VAR_2->ops.tuner_ops, &VAR_1,
        sizeof(struct dvb_tuner_ops));

 FUNC_3("type set to %s\n", "Philips TEA5761HN FM Radio");

 return VAR_2;
}
