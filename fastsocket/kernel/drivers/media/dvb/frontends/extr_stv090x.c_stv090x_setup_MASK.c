
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stv090x_state {scalar_t__ device; TYPE_1__* internal; struct stv090x_config* config; } ;
struct stv090x_reg {int data; int addr; } ;
struct stv090x_config {int clk_mode; scalar_t__ adc1_range; scalar_t__ adc2_range; scalar_t__ diseqc_envelope_mode; int repeater_level; } ;
struct dvb_frontend {struct stv090x_state* demodulator_priv; } ;
struct TYPE_2__ {int dev_ver; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct stv090x_reg*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (int ,int,char*,...) ;
 int FUNC_4 (int) ;
 struct stv090x_reg* VAR_23 ;
 struct stv090x_reg* VAR_24 ;
 struct stv090x_reg* VAR_25 ;
 struct stv090x_reg* VAR_26 ;
 void* FUNC_5 (struct stv090x_state*,int ) ;
 int FUNC_6 (struct dvb_frontend*,int ) ;
 scalar_t__ FUNC_7 (struct stv090x_state*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_27)
{
 struct stv090x_state *VAR_28 = VAR_27->demodulator_priv;
 const struct stv090x_config *VAR_29 = VAR_28->config;
 const struct stv090x_reg *VAR_30 = ((void*)0);
 const struct stv090x_reg *VAR_31 = ((void*)0);
 unsigned long VAR_32 = 0, VAR_33 = 0;
 u32 VAR_34 = 0;

 int VAR_35;

 if (VAR_28->device == VAR_6) {
  FUNC_3(VAR_3, 1, "Initializing STV0900");
  VAR_30 = VAR_24;
  VAR_32 = FUNC_0(VAR_24);
  VAR_31 = VAR_23;
  VAR_33 = FUNC_0(VAR_23);
 } else if (VAR_28->device == VAR_7) {
  FUNC_3(VAR_3, 1, "Initializing STV0903");
  VAR_30 = VAR_26;
  VAR_32 = FUNC_0(VAR_26);
  VAR_31 = VAR_25;
  VAR_33 = FUNC_0(VAR_25);
 }




 if (FUNC_7(VAR_28, VAR_12, 0x5c) < 0)
  goto err;
 if (FUNC_7(VAR_28, VAR_15, 0x5c) < 0)
  goto err;

 FUNC_4(5);


 if (FUNC_7(VAR_28, VAR_14, 0x6c) < 0)
  goto err;
 if (FUNC_7(VAR_28, VAR_17, 0x6c) < 0)
  goto err;


 FUNC_2(VAR_34, VAR_2, VAR_29->repeater_level);
 if (FUNC_7(VAR_28, VAR_13, VAR_34) < 0)
  goto err;
 if (FUNC_7(VAR_28, VAR_16, VAR_34) < 0)
  goto err;

 if (FUNC_7(VAR_28, VAR_11, 0x13) < 0)
  goto err;
 FUNC_4(5);
 if (FUNC_7(VAR_28, VAR_9, 0x08) < 0)
  goto err;
 if (FUNC_7(VAR_28, VAR_18, 0x20 | VAR_29->clk_mode) < 0)
  goto err;
 FUNC_4(5);


 FUNC_3(VAR_3, 1, "Setting up initial values");
 for (VAR_35 = 0; VAR_35 < VAR_32; VAR_35++) {
  if (FUNC_7(VAR_28, VAR_30[VAR_35].addr, VAR_30[VAR_35].data) < 0)
   goto err;
 }

 VAR_28->internal->dev_ver = FUNC_5(VAR_28, VAR_10);
 if (VAR_28->internal->dev_ver >= 0x20) {
  if (FUNC_7(VAR_28, VAR_19, 0x0c) < 0)
   goto err;


  FUNC_3(VAR_3, 1, "Setting up Cut 2.0 initial values");
  for (VAR_35 = 0; VAR_35 < VAR_33; VAR_35++) {
   if (FUNC_7(VAR_28, VAR_31[VAR_35].addr, VAR_31[VAR_35].data) < 0)
    goto err;
  }

 } else if (VAR_28->internal->dev_ver < 0x20) {
  FUNC_3(VAR_4, 1, "ERROR: Unsupported Cut: 0x%02x!",
   VAR_28->internal->dev_ver);

  goto err;
 } else if (VAR_28->internal->dev_ver > 0x30) {

  FUNC_3(VAR_4, 1, "INFO: Cut: 0x%02x probably incomplete support!",
   VAR_28->internal->dev_ver);
 }


 VAR_34 = FUNC_5(VAR_28, VAR_21);
 FUNC_1(VAR_34, VAR_0,
  (VAR_29->adc1_range == VAR_8) ? 0 : 1);
 if (FUNC_7(VAR_28, VAR_21, VAR_34) < 0)
  goto err;


 VAR_34 = FUNC_5(VAR_28, VAR_22);
 FUNC_1(VAR_34, VAR_1,
  (VAR_29->adc2_range == VAR_8) ? 0 : 1);
 if (FUNC_7(VAR_28, VAR_22, VAR_34) < 0)
  goto err;

 if (FUNC_7(VAR_28, VAR_20, 0x80) < 0)
  goto err;
 if (FUNC_7(VAR_28, VAR_20, 0x00) < 0)
  goto err;


 if (VAR_29->diseqc_envelope_mode)
  FUNC_6(VAR_27, VAR_5);

 return 0;
err:
 FUNC_3(VAR_4, 1, "I/O error");
 return -1;
}
