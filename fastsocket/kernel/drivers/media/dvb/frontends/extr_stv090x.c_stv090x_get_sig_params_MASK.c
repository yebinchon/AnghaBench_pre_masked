
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct dvb_frontend {int dummy; } ;
struct stv090x_state {scalar_t__ algo; int frequency; int modcod; int pilots; int frame_len; int rolloff; int inversion; int srate; int search_range; TYPE_2__* config; TYPE_1__* internal; int delsys; struct dvb_frontend frontend; } ;
typedef int s32 ;
typedef enum stv090x_signal_state { ____Placeholder_stv090x_signal_state } stv090x_signal_state ;
struct TYPE_4__ {scalar_t__ (* tuner_get_frequency ) (struct dvb_frontend*,int*) ;} ;
struct TYPE_3__ {int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (void*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_1 (struct stv090x_state*,int ) ;
 int FUNC_2 (struct stv090x_state*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int,char*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct dvb_frontend*,int*) ;
 scalar_t__ FUNC_7 (struct dvb_frontend*,int*) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (struct stv090x_state*,int ) ;
 int FUNC_10 (struct stv090x_state*) ;
 scalar_t__ FUNC_11 (struct stv090x_state*) ;
 scalar_t__ FUNC_12 (struct stv090x_state*,int) ;

__attribute__((used)) static enum stv090x_signal_state FUNC_13(struct stv090x_state *VAR_13)
{
 struct dvb_frontend *VAR_14 = &VAR_13->frontend;

 u8 VAR_15;
 u32 VAR_16;
 s32 VAR_17 = 0, VAR_18;

 FUNC_5(5);

 if (VAR_13->algo == VAR_8) {
  VAR_15 = FUNC_1(VAR_13, VAR_12);
  FUNC_2(VAR_13, VAR_7, 0x5c);
  while ((VAR_17 <= 50) && (VAR_15 != 0) && (VAR_15 != 0xff)) {
   VAR_15 = FUNC_1(VAR_13, VAR_12);
   FUNC_5(5);
   VAR_17 += 5;
  }
 }
 VAR_13->delsys = FUNC_10(VAR_13);

 if (FUNC_12(VAR_13, 1) < 0)
  goto err;

 if (VAR_13->config->tuner_get_frequency) {
  if (VAR_13->config->tuner_get_frequency(VAR_14, &VAR_13->frequency) < 0)
   goto err_gateoff;
 }

 if (FUNC_12(VAR_13, 0) < 0)
  goto err;

 VAR_18 = FUNC_9(VAR_13, VAR_13->internal->mclk) / 1000;
 VAR_13->frequency += VAR_18;

 if (FUNC_11(VAR_13) < 0)
  goto err;

 VAR_16 = FUNC_1(VAR_13, VAR_2);
 VAR_13->modcod = FUNC_0(VAR_16, VAR_0);
 VAR_13->pilots = FUNC_0(VAR_16, VAR_1) & 0x01;
 VAR_13->frame_len = FUNC_0(VAR_16, VAR_1) >> 1;
 VAR_16 = FUNC_1(VAR_13, VAR_11);
 VAR_13->rolloff = FUNC_0(VAR_16, VAR_6);
 VAR_16 = FUNC_1(VAR_13, VAR_3);
 VAR_13->inversion = FUNC_0(VAR_16, VAR_5);

 if ((VAR_13->algo == VAR_8) || (VAR_13->srate < 10000000)) {

  if (FUNC_12(VAR_13, 1) < 0)
   goto err;

  if (VAR_13->config->tuner_get_frequency) {
   if (VAR_13->config->tuner_get_frequency(VAR_14, &VAR_13->frequency) < 0)
    goto err_gateoff;
  }

  if (FUNC_12(VAR_13, 0) < 0)
   goto err;

  if (FUNC_3(VAR_18) <= ((VAR_13->search_range / 2000) + 500))
   return VAR_10;
  else if (FUNC_3(VAR_18) <= (FUNC_8(VAR_13->srate, VAR_13->rolloff) / 2000))
   return VAR_10;
  else
   return VAR_9;
 } else {
  if (FUNC_3(VAR_18) <= ((VAR_13->search_range / 2000) + 500))
   return VAR_10;
  else
   return VAR_9;
 }

 return VAR_9;

err_gateoff:
 FUNC_12(VAR_13, 0);
err:
 FUNC_4(VAR_4, 1, "I/O error");
 return -1;
}
