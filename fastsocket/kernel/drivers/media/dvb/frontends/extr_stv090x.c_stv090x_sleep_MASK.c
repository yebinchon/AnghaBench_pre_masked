
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stv090x_state {scalar_t__ device; TYPE_1__* config; } ;
struct dvb_frontend {struct stv090x_state* demodulator_priv; } ;
struct TYPE_2__ {scalar_t__ (* tuner_sleep ) (struct dvb_frontend*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int,char*,...) ;
 scalar_t__ FUNC_2 (struct dvb_frontend*) ;
 scalar_t__ FUNC_3 (struct stv090x_state*,int) ;
 int FUNC_4 (struct stv090x_state*,int ) ;
 scalar_t__ FUNC_5 (struct stv090x_state*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_7)
{
 struct stv090x_state *VAR_8 = VAR_7->demodulator_priv;
 u32 VAR_9;

 if (FUNC_3(VAR_8, 1) < 0)
  goto err;

 if (VAR_8->config->tuner_sleep) {
  if (VAR_8->config->tuner_sleep(VAR_7) < 0)
   goto err_gateoff;
 }

 if (FUNC_3(VAR_8, 0) < 0)
  goto err;

 FUNC_1(VAR_1, 1, "Set %s to sleep",
  VAR_8->device == VAR_4 ? "STV0900" : "STV0903");

 VAR_9 = FUNC_4(VAR_8, VAR_5);
 FUNC_0(VAR_9, VAR_3, 0x01);
 if (FUNC_5(VAR_8, VAR_5, VAR_9) < 0)
  goto err;

 VAR_9 = FUNC_4(VAR_8, VAR_6);
 FUNC_0(VAR_9, VAR_0, 0);
 if (FUNC_5(VAR_8, VAR_6, VAR_9) < 0)
  goto err;

 return 0;

err_gateoff:
 FUNC_3(VAR_8, 0);
err:
 FUNC_1(VAR_2, 1, "I/O error");
 return -1;
}
