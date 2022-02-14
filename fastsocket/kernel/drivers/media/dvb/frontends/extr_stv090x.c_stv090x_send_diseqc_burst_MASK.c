
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct stv090x_state {TYPE_1__* config; } ;
struct dvb_frontend {struct stv090x_state* demodulator_priv; } ;
typedef scalar_t__ fe_sec_mini_cmd_t ;
struct TYPE_2__ {scalar_t__ diseqc_envelope_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct stv090x_state*,int ) ;
 int FUNC_2 (int,int ,int) ;
 scalar_t__ FUNC_3 (struct stv090x_state*,int ,int) ;
 int VAR_9 ;
 int FUNC_4 (int ,int,char*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_10, fe_sec_mini_cmd_t VAR_11)
{
 struct stv090x_state *VAR_12 = VAR_10->demodulator_priv;
 u32 VAR_13, VAR_14 = 0, VAR_15 = 1;
 u8 VAR_16, VAR_17;
 int VAR_18;

 VAR_13 = FUNC_1(VAR_12, VAR_1);

 if (VAR_11 == VAR_8) {
  VAR_16 = (VAR_12->config->diseqc_envelope_mode) ? 5 : 3;
  VAR_17 = 0x00;
 } else {
  VAR_16 = (VAR_12->config->diseqc_envelope_mode) ? 4 : 2;
  VAR_17 = 0xFF;
 }

 FUNC_2(VAR_13, VAR_4, VAR_16);
 FUNC_2(VAR_13, VAR_0, 1);
 if (FUNC_3(VAR_12, VAR_1, VAR_13) < 0)
  goto err;
 FUNC_2(VAR_13, VAR_0, 0);
 if (FUNC_3(VAR_12, VAR_1, VAR_13) < 0)
  goto err;

 FUNC_2(VAR_13, VAR_5, 1);
 if (FUNC_3(VAR_12, VAR_1, VAR_13) < 0)
  goto err;

 while (VAR_15) {
  VAR_13 = FUNC_1(VAR_12, VAR_3);
  VAR_15 = FUNC_0(VAR_13, VAR_7);
 }

 if (FUNC_3(VAR_12, VAR_2, VAR_17) < 0)
  goto err;

 VAR_13 = FUNC_1(VAR_12, VAR_1);
 FUNC_2(VAR_13, VAR_5, 0);
 if (FUNC_3(VAR_12, VAR_1, VAR_13) < 0)
  goto err;

 VAR_18 = 0;

 while ((!VAR_14) && (VAR_18 < 10)) {
  VAR_13 = FUNC_1(VAR_12, VAR_3);
  VAR_14 = FUNC_0(VAR_13, VAR_9);
  FUNC_5(10);
  VAR_18++;
 }

 return 0;
err:
 FUNC_4(VAR_6, 1, "I/O error");
 return -1;
}
