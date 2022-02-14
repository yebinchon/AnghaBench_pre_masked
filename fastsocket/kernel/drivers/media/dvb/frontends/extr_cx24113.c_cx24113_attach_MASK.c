
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_2__ {int tuner_ops; } ;
struct dvb_frontend {struct cx24113_state* tuner_priv; TYPE_1__ ops; } ;
struct cx24113_state {int rev; void* ver; struct i2c_adapter* i2c; struct cx24113_config const* config; } ;
struct cx24113_config {int dummy; } ;


 int VAR_0 ;

 void* FUNC_0 (struct cx24113_state*,int) ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct cx24113_state*) ;
 struct cx24113_state* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *,int) ;

struct dvb_frontend *FUNC_6(struct dvb_frontend *VAR_2,
  const struct cx24113_config *VAR_3, struct i2c_adapter *VAR_4)
{

 struct cx24113_state *VAR_5 =
  FUNC_4(sizeof(struct cx24113_state), VAR_0);
 int VAR_6;
 if (VAR_5 == ((void*)0)) {
  FUNC_1("Unable to kzalloc\n");
  goto error;
 }


 VAR_5->config = VAR_3;
 VAR_5->i2c = VAR_4;

 FUNC_2("trying to detect myself\n");



 FUNC_0(VAR_5, 0x00);

 VAR_6 = FUNC_0(VAR_5, 0x00);
 if (VAR_6 < 0) {
  FUNC_2("CX24113 not found.\n");
  goto error;
 }
 VAR_5->rev = VAR_6;

 switch (VAR_6) {
 case 0x43:
  FUNC_2("detected CX24113 variant\n");
  break;
 case 128:
  FUNC_2("successfully detected\n");
  break;
 default:
  FUNC_1("unsupported device id: %x\n", VAR_5->rev);
  goto error;
 }
 VAR_5->ver = FUNC_0(VAR_5, 0x01);
 FUNC_2("version: %x\n", VAR_5->ver);


 FUNC_5(&VAR_2->ops.tuner_ops, &VAR_1,
   sizeof(struct dvb_tuner_ops));
 VAR_2->tuner_priv = VAR_5;
 return VAR_2;

error:
 FUNC_3(VAR_5);

 return ((void*)0);
}
