
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct v4l2_priv_tun_config {int* priv; int tuner; } ;
struct TYPE_2__ {int adap; } ;
struct tuner_simple_priv {int last_div; TYPE_1__ i2c_props; } ;
struct tuner_params {int port1_active; int port1_invert_for_secam_lc; int port2_active; int port2_invert_for_secam_lc; scalar_t__ default_pll_gating_18; scalar_t__ default_top_high; scalar_t__ default_top_mid; scalar_t__ default_top_low; scalar_t__ default_top_secam_high; scalar_t__ default_top_secam_mid; scalar_t__ default_top_secam_low; scalar_t__ intercarrier_mode; scalar_t__ has_tda9887; scalar_t__ cb_first_if_lower_freq; } ;
struct dvb_frontend {struct tuner_simple_priv* tuner_priv; } ;
struct analog_parameters {int std; int frequency; } ;
typedef enum param_type { ____Placeholder_param_type } param_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int ,struct v4l2_priv_tun_config*) ;
 int VAR_13 ;
 int FUNC_2 (struct dvb_frontend*,struct tuner_params*,int*,int*,int*) ;
 int FUNC_3 (struct dvb_frontend*,int*,int,int,int) ;
 int FUNC_4 (struct dvb_frontend*,struct analog_parameters*,int*,int*) ;
 struct tuner_params* FUNC_5 (struct dvb_frontend*,int) ;
 int FUNC_6 (char*,int,int,int,int,...) ;
 int FUNC_7 (TYPE_1__*,int*,int) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static int FUNC_9(struct dvb_frontend *VAR_14,
         struct analog_parameters *VAR_15)
{
 struct tuner_simple_priv *VAR_16 = VAR_14->tuner_priv;
 u8 VAR_17, VAR_18;
 u16 VAR_19;
 u8 VAR_20[4];
 int VAR_21, VAR_22, VAR_23;
 enum param_type VAR_24;
 struct tuner_params *VAR_25;
 if (VAR_15->std == VAR_10) {
  VAR_22 = 940;
  VAR_24 = VAR_4;
 } else if ((VAR_15->std & VAR_9) &&
    !(VAR_15->std & ~VAR_9)) {
  VAR_22 = 732;
  VAR_24 = VAR_4;
 } else if (VAR_15->std == VAR_12) {
  VAR_22 = 543;
  VAR_24 = VAR_6;
 } else {
  VAR_22 = 623;
  VAR_24 = VAR_5;
 }

 VAR_25 = FUNC_5(VAR_14, VAR_24);

 VAR_23 = FUNC_2(VAR_14, VAR_25, &VAR_15->frequency,
     &VAR_17, &VAR_18);

 VAR_19 = VAR_15->frequency + VAR_22 + VAR_13;

 FUNC_6("Freq= %d.%02d MHz, V_IF=%d.%02d MHz, "
    "Offset=%d.%02d MHz, div=%0d\n",
    VAR_15->frequency / 16, VAR_15->frequency % 16 * 100 / 16,
    VAR_22 / 16, VAR_22 % 16 * 100 / 16,
    VAR_13 / 16, VAR_13 % 16 * 100 / 16, VAR_19);


 FUNC_4(VAR_14, VAR_15, &VAR_17, &VAR_18);

 if (VAR_25->cb_first_if_lower_freq && VAR_19 < VAR_16->last_div) {
  VAR_20[0] = VAR_17;
  VAR_20[1] = VAR_18;
  VAR_20[2] = (VAR_19>>8) & 0x7f;
  VAR_20[3] = VAR_19 & 0xff;
 } else {
  VAR_20[0] = (VAR_19>>8) & 0x7f;
  VAR_20[1] = VAR_19 & 0xff;
  VAR_20[2] = VAR_17;
  VAR_20[3] = VAR_18;
 }
 VAR_16->last_div = VAR_19;
 if (VAR_25->has_tda9887) {
  struct v4l2_priv_tun_config VAR_26;
  int VAR_27 = 0;
  int VAR_28 = (VAR_15->std & (VAR_11 |
       VAR_12)) &&
   !(VAR_15->std & ~(VAR_11 |
       VAR_12));

  VAR_26.tuner = VAR_8;
  VAR_26.priv = &VAR_27;

  if (VAR_15->std == VAR_12) {
   if (VAR_25->port1_active ^ VAR_25->port1_invert_for_secam_lc)
    VAR_27 |= VAR_2;
   if (VAR_25->port2_active ^ VAR_25->port2_invert_for_secam_lc)
    VAR_27 |= VAR_3;
  } else {
   if (VAR_25->port1_active)
    VAR_27 |= VAR_2;
   if (VAR_25->port2_active)
    VAR_27 |= VAR_3;
  }
  if (VAR_25->intercarrier_mode)
   VAR_27 |= VAR_1;
  if (VAR_28) {
   if (VAR_23 == 0 && VAR_25->default_top_secam_low)
    VAR_27 |= FUNC_0(VAR_25->default_top_secam_low);
   else if (VAR_23 == 1 && VAR_25->default_top_secam_mid)
    VAR_27 |= FUNC_0(VAR_25->default_top_secam_mid);
   else if (VAR_25->default_top_secam_high)
    VAR_27 |= FUNC_0(VAR_25->default_top_secam_high);
  } else {
   if (VAR_23 == 0 && VAR_25->default_top_low)
    VAR_27 |= FUNC_0(VAR_25->default_top_low);
   else if (VAR_23 == 1 && VAR_25->default_top_mid)
    VAR_27 |= FUNC_0(VAR_25->default_top_mid);
   else if (VAR_25->default_top_high)
    VAR_27 |= FUNC_0(VAR_25->default_top_high);
  }
  if (VAR_25->default_pll_gating_18)
   VAR_27 |= VAR_0;
  FUNC_1(VAR_16->i2c_props.adap, VAR_7,
        &VAR_26);
 }
 FUNC_6("tv 0x%02x 0x%02x 0x%02x 0x%02x\n",
    VAR_20[0], VAR_20[1], VAR_20[2], VAR_20[3]);

 VAR_21 = FUNC_7(&VAR_16->i2c_props, VAR_20, 4);
 if (4 != VAR_21)
  FUNC_8("i2c i/o error: rc == %d (should be 4)\n", VAR_21);

 FUNC_3(VAR_14, &VAR_20[0], VAR_19, VAR_17, VAR_18);

 return 0;
}
