
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_frontend {struct stv090x_state* demodulator_priv; int ops; } ;
struct stv090x_state {int demod; scalar_t__ demod_mode; scalar_t__ device; struct dvb_frontend frontend; TYPE_1__* internal; struct stv090x_config const* config; struct i2c_adapter* i2c; int rolloff; int * verbose; } ;
struct stv090x_internal {int dummy; } ;
struct stv090x_dev {TYPE_1__* internal; } ;
struct stv090x_config {scalar_t__ demod_mode; scalar_t__ device; int address; } ;
struct i2c_adapter {int dummy; } ;
typedef enum stv090x_demodulator { ____Placeholder_stv090x_demodulator } stv090x_demodulator ;
struct TYPE_3__ {int num_used; scalar_t__ dev_ver; int tuner_lock; int demod_lock; int i2c_addr; struct i2c_adapter* i2c_adap; scalar_t__ mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct stv090x_dev* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int,char*,...) ;
 struct stv090x_dev* FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (struct stv090x_state*) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 struct stv090x_state* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (struct dvb_frontend*) ;
 scalar_t__ FUNC_8 (struct dvb_frontend*) ;
 scalar_t__ FUNC_9 (struct dvb_frontend*) ;
 int VAR_7 ;

struct dvb_frontend *FUNC_10(const struct stv090x_config *VAR_8,
        struct i2c_adapter *VAR_9,
        enum stv090x_demodulator VAR_10)
{
 struct stv090x_state *VAR_11 = ((void*)0);
 struct stv090x_dev *VAR_12;

 VAR_11 = FUNC_5(sizeof (struct stv090x_state), VAR_2);
 if (VAR_11 == ((void*)0))
  goto error;

 VAR_11->verbose = &VAR_7;
 VAR_11->config = VAR_8;
 VAR_11->i2c = VAR_9;
 VAR_11->frontend.ops = VAR_6;
 VAR_11->frontend.demodulator_priv = VAR_11;
 VAR_11->demod = VAR_10;
 VAR_11->demod_mode = VAR_8->demod_mode;
 VAR_11->device = VAR_8->device;
 VAR_11->rolloff = VAR_5;

 VAR_12 = FUNC_2(VAR_11->i2c,
    VAR_11->config->address);

 if ((VAR_12 != ((void*)0)) && (VAR_11->demod_mode == VAR_4)) {
  VAR_11->internal = VAR_12->internal;
  VAR_11->internal->num_used++;
  FUNC_1(VAR_1, 1, "Found Internal Structure!");
  FUNC_1(VAR_0, 1, "Attaching %s demodulator(%d) Cut=0x%02x",
   VAR_11->device == VAR_3 ? "STV0900" : "STV0903",
   VAR_10,
   VAR_11->internal->dev_ver);
  return &VAR_11->frontend;
 } else {
  VAR_11->internal = FUNC_4(sizeof(struct stv090x_internal),
       VAR_2);
  VAR_12 = FUNC_0(VAR_11->internal);
  VAR_11->internal->num_used = 1;
  VAR_11->internal->mclk = 0;
  VAR_11->internal->dev_ver = 0;
  VAR_11->internal->i2c_adap = VAR_11->i2c;
  VAR_11->internal->i2c_addr = VAR_11->config->address;
  FUNC_1(VAR_1, 1, "Create New Internal Structure!");
 }

 FUNC_6(&VAR_11->internal->demod_lock);
 FUNC_6(&VAR_11->internal->tuner_lock);

 if (FUNC_8(&VAR_11->frontend) < 0) {
  FUNC_1(VAR_0, 1, "Error putting device to sleep");
  goto error;
 }

 if (FUNC_7(&VAR_11->frontend) < 0) {
  FUNC_1(VAR_0, 1, "Error setting up device");
  goto error;
 }
 if (FUNC_9(&VAR_11->frontend) < 0) {
  FUNC_1(VAR_0, 1, "Error waking device");
  goto error;
 }

 FUNC_1(VAR_0, 1, "Attaching %s demodulator(%d) Cut=0x%02x",
        VAR_11->device == VAR_3 ? "STV0900" : "STV0903",
        VAR_10,
        VAR_11->internal->dev_ver);

 return &VAR_11->frontend;

error:
 FUNC_3(VAR_11);
 return ((void*)0);
}
