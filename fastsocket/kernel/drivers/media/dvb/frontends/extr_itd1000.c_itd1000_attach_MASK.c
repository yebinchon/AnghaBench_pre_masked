
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct itd1000_state {void** shadow; struct i2c_adapter* i2c; struct itd1000_config* cfg; } ;
struct itd1000_config {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_2__ {int tuner_ops; } ;
struct dvb_frontend {struct itd1000_state* tuner_priv; TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 void* FUNC_1 (struct itd1000_state*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct itd1000_state*) ;
 struct itd1000_state* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (void**,int,int) ;

struct dvb_frontend *FUNC_6(struct dvb_frontend *VAR_2, struct i2c_adapter *VAR_3, struct itd1000_config *VAR_4)
{
 struct itd1000_state *VAR_5 = ((void*)0);
 u8 VAR_6 = 0;

 VAR_5 = FUNC_3(sizeof(struct itd1000_state), VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_5->cfg = VAR_4;
 VAR_5->i2c = VAR_3;

 VAR_6 = FUNC_1(VAR_5, 0);
 if (VAR_6 != 0) {
  FUNC_2(VAR_5);
  return ((void*)0);
 }
 FUNC_0("successfully identified (ID: %d)", VAR_6);

 FUNC_5(VAR_5->shadow, 0xff, sizeof(VAR_5->shadow));
 for (VAR_6 = 0x65; VAR_6 < 0x9c; VAR_6++)
  VAR_5->shadow[VAR_6] = FUNC_1(VAR_5, VAR_6);

 FUNC_4(&VAR_2->ops.tuner_ops, &VAR_1, sizeof(struct dvb_tuner_ops));

 VAR_2->tuner_priv = VAR_5;

 return VAR_2;
}
