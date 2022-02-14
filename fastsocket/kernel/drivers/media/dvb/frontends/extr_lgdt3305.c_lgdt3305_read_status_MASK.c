
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lgdt3305_state {int current_modulation; TYPE_1__* cfg; } ;
struct dvb_frontend {struct lgdt3305_state* demodulator_priv; } ;
typedef int fe_status_t ;
struct TYPE_2__ {int demod_chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int FUNC_0 (char*,char*,char*,char*,char*,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct lgdt3305_state*,int*) ;
 int FUNC_3 (struct lgdt3305_state*,int*) ;
 int FUNC_4 (struct lgdt3305_state*,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_8, fe_status_t *VAR_9)
{
 struct lgdt3305_state *VAR_10 = VAR_8->demodulator_priv;
 u8 VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16,
  VAR_17, VAR_18, VAR_19;

 *VAR_9 = 0;

 VAR_12 = FUNC_4(VAR_10, VAR_7, &VAR_11);
 if (FUNC_1(VAR_12))
  goto fail;

 VAR_13 = (VAR_11 & (1 << 4)) ? 1 : 0;
 VAR_14 = (VAR_11 & (1 << 3)) ? 0 : 1;
 VAR_19 = (VAR_11 & (1 << 2)) ? 1 : 0;
 VAR_15 = (VAR_11 & (1 << 1)) ? 1 : 0;
 VAR_16 = (VAR_11 & (1 << 0)) ? 1 : 0;

 FUNC_0("%s%s%s%s%s\n",
        VAR_13 ? "SIGNALEXIST " : "",
        VAR_14 ? "INLOCK " : "",
        VAR_19 ? "SYNCLOCK " : "",
        VAR_15 ? "NOFECERR " : "",
        VAR_16 ? "SNRGOOD " : "");

 VAR_12 = FUNC_2(VAR_10, &VAR_17);
 if (FUNC_1(VAR_12))
  goto fail;

 if (VAR_13)
  *VAR_9 |= VAR_3;
 if (VAR_17)
  *VAR_9 |= VAR_1;
 if (VAR_15)
  *VAR_9 |= VAR_5;
 if (VAR_19)
  *VAR_9 |= VAR_4;

 switch (VAR_10->current_modulation) {
 case 130:
 case 129:

  if (((VAR_6 == VAR_10->cfg->demod_chip)) && (VAR_17))
   *VAR_9 |= VAR_3;

  VAR_12 = FUNC_3(VAR_10, &VAR_18);
  if (FUNC_1(VAR_12))
   goto fail;

  if (VAR_18)
   *VAR_9 |= VAR_2;
  break;
 case 128:
  if (VAR_14)
   *VAR_9 |= VAR_2;
  break;
 default:
  VAR_12 = -VAR_0;
 }
fail:
 return VAR_12;
}
