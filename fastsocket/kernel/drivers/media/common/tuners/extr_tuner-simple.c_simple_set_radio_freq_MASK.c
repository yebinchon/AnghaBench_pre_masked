
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct v4l2_priv_tun_config {int* priv; int tuner; } ;
struct tunertype {int count; struct tuner_params* params; } ;
struct TYPE_4__ {int adap; } ;
struct tuner_simple_priv {int last_div; TYPE_2__ i2c_props; struct tunertype* tun; } ;
struct tuner_params {scalar_t__ type; int radio_if; scalar_t__ fm_gain_normal; scalar_t__ intercarrier_mode; int port2_fm_high_sensitivity; scalar_t__ port2_active; int port1_fm_high_sensitivity; scalar_t__ port1_active; scalar_t__ has_tda9887; scalar_t__ cb_first_if_lower_freq; TYPE_1__* ranges; } ;
struct dvb_frontend {struct tuner_simple_priv* tuner_priv; } ;
struct analog_parameters {unsigned int frequency; } ;
struct TYPE_3__ {int config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,struct v4l2_priv_tun_config*) ;
 int FUNC_1 (struct dvb_frontend*,int*) ;
 int FUNC_2 (char*,int,int,int,int) ;
 int FUNC_3 (TYPE_2__*,int*,int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_10,
     struct analog_parameters *VAR_11)
{
 struct tunertype *VAR_12;
 struct tuner_simple_priv *VAR_13 = VAR_10->tuner_priv;
 u8 VAR_14[4];
 u16 VAR_15;
 int VAR_16, VAR_17;
 struct tuner_params *VAR_18;
 unsigned int VAR_19 = VAR_11->frequency;

 VAR_12 = VAR_13->tun;

 for (VAR_17 = VAR_12->count-1; VAR_17 > 0; VAR_17--)
  if (VAR_12->params[VAR_17].type == VAR_5)
   break;

 VAR_18 = &VAR_12->params[VAR_17];


 switch (VAR_18->radio_if) {
 case 0:
  VAR_19 += (unsigned int)(10.7*16000);
  break;
 case 1:
  VAR_19 += (unsigned int)(33.3*16000);
  break;
 case 2:
  VAR_19 += (unsigned int)(41.3*16000);
  break;
 default:
  FUNC_4("Unsupported radio_if value %d\n",
      VAR_18->radio_if);
  return 0;
 }

 VAR_14[2] = (VAR_18->ranges[0].config & ~VAR_6) |
      VAR_7;


 FUNC_1(VAR_10, &VAR_14[0]);




 VAR_15 = (VAR_19 + 400) / 800;

 if (VAR_18->cb_first_if_lower_freq && VAR_15 < VAR_13->last_div) {
  VAR_14[0] = VAR_14[2];
  VAR_14[1] = VAR_14[3];
  VAR_14[2] = (VAR_15>>8) & 0x7f;
  VAR_14[3] = VAR_15 & 0xff;
 } else {
  VAR_14[0] = (VAR_15>>8) & 0x7f;
  VAR_14[1] = VAR_15 & 0xff;
 }

 FUNC_2("radio 0x%02x 0x%02x 0x%02x 0x%02x\n",
        VAR_14[0], VAR_14[1], VAR_14[2], VAR_14[3]);
 VAR_13->last_div = VAR_15;

 if (VAR_18->has_tda9887) {
  int VAR_20 = 0;
  struct v4l2_priv_tun_config VAR_21;

  VAR_21.tuner = VAR_9;
  VAR_21.priv = &VAR_20;

  if (VAR_18->port1_active &&
      !VAR_18->port1_fm_high_sensitivity)
   VAR_20 |= VAR_2;
  if (VAR_18->port2_active &&
      !VAR_18->port2_fm_high_sensitivity)
   VAR_20 |= VAR_3;
  if (VAR_18->intercarrier_mode)
   VAR_20 |= VAR_1;


  if (VAR_18->fm_gain_normal)
   VAR_20 |= VAR_0;
  if (VAR_18->radio_if == 2)
   VAR_20 |= VAR_4;
  FUNC_0(VAR_13->i2c_props.adap, VAR_8,
        &VAR_21);
 }
 VAR_16 = FUNC_3(&VAR_13->i2c_props, VAR_14, 4);
 if (4 != VAR_16)
  FUNC_4("i2c i/o error: rc == %d (should be 4)\n", VAR_16);

 return 0;
}
