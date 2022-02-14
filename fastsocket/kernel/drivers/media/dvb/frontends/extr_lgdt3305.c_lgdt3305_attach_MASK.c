
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {struct lgdt3305_state* demodulator_priv; int ops; } ;
struct lgdt3305_state {int current_frequency; int current_modulation; struct dvb_frontend frontend; struct i2c_adapter* i2c_adap; struct lgdt3305_config const* cfg; } ;
struct lgdt3305_config {int demod_chip; int i2c_addr; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct lgdt3305_state*) ;
 struct lgdt3305_state* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct lgdt3305_state*,int,int*) ;
 int FUNC_7 (struct lgdt3305_state*,int,int) ;
 int FUNC_8 (int *,int *,int) ;

struct dvb_frontend *FUNC_9(const struct lgdt3305_config *VAR_4,
         struct i2c_adapter *VAR_5)
{
 struct lgdt3305_state *VAR_6 = ((void*)0);
 int VAR_7;
 u8 VAR_8;

 FUNC_3("(%d-%04x)\n",
        VAR_5 ? FUNC_0(VAR_5) : 0,
        VAR_4 ? VAR_4->i2c_addr : 0);

 VAR_6 = FUNC_2(sizeof(struct lgdt3305_state), VAR_0);
 if (VAR_6 == ((void*)0))
  goto fail;

 VAR_6->cfg = VAR_4;
 VAR_6->i2c_adap = VAR_5;

 switch (VAR_4->demod_chip) {
 case 129:
  FUNC_8(&VAR_6->frontend.ops, &VAR_2,
         sizeof(struct dvb_frontend_ops));
  break;
 case 128:
  FUNC_8(&VAR_6->frontend.ops, &VAR_3,
         sizeof(struct dvb_frontend_ops));
  break;
 default:
  goto fail;
 }
 VAR_6->frontend.demodulator_priv = VAR_6;


 VAR_7 = FUNC_6(VAR_6, VAR_1, &VAR_8);
 if ((FUNC_4(VAR_7)) | (VAR_8 == 0))
  goto fail;
 VAR_7 = FUNC_7(VAR_6, 0x0808, 0x80);
 if (FUNC_4(VAR_7))
  goto fail;
 VAR_7 = FUNC_6(VAR_6, 0x0808, &VAR_8);
 if ((FUNC_4(VAR_7)) | (VAR_8 != 0x80))
  goto fail;
 VAR_7 = FUNC_7(VAR_6, 0x0808, 0x00);
 if (FUNC_4(VAR_7))
  goto fail;

 VAR_6->current_frequency = -1;
 VAR_6->current_modulation = -1;

 return &VAR_6->frontend;
fail:
 FUNC_5("unable to detect %s hardware\n",
  VAR_4->demod_chip ? "LGDT3304" : "LGDT3305");
 FUNC_1(VAR_6);
 return ((void*)0);
}
