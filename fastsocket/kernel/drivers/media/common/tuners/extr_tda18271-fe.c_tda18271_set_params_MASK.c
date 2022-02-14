
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct tda18271_std_map_item {int dummy; } ;
struct tda18271_std_map {struct tda18271_std_map_item dvbt_8; struct tda18271_std_map_item dvbt_7; struct tda18271_std_map_item dvbt_6; struct tda18271_std_map_item qam_6; struct tda18271_std_map_item atsc_6; } ;
struct tda18271_priv {int frequency; int bandwidth; int mode; struct tda18271_std_map std; } ;
struct TYPE_11__ {int bandwidth; } ;
struct TYPE_7__ {int modulation; } ;
struct TYPE_12__ {TYPE_5__ ofdm; TYPE_1__ vsb; } ;
struct dvb_frontend_parameters {int frequency; TYPE_6__ u; } ;
struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_8__ {int (* standby ) (struct dvb_frontend*) ;} ;
struct TYPE_10__ {TYPE_3__ info; TYPE_2__ analog_ops; } ;
struct dvb_frontend {TYPE_4__ ops; struct tda18271_priv* tuner_priv; } ;





 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;


 int VAR_3 ;


 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dvb_frontend*,struct tda18271_std_map_item*,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_4,
          struct dvb_frontend_parameters *VAR_5)
{
 struct tda18271_priv *VAR_6 = VAR_4->tuner_priv;
 struct tda18271_std_map *VAR_7 = &VAR_6->std;
 struct tda18271_std_map_item *VAR_8;
 int VAR_9;
 u32 VAR_10, VAR_11 = VAR_5->frequency;

 VAR_6->mode = VAR_3;

 if (VAR_4->ops.info.type == VAR_1) {
  switch (VAR_5->u.vsb.modulation) {
  case 128:
  case 129:
   VAR_8 = &VAR_7->atsc_6;
   break;
  case 130:
  case 131:
   VAR_8 = &VAR_7->qam_6;
   break;
  default:
   FUNC_3("modulation not set!\n");
   return -VAR_0;
  }




  VAR_10 = 6000000;
 } else if (VAR_4->ops.info.type == VAR_2) {
  switch (VAR_5->u.ofdm.bandwidth) {
  case 134:
   VAR_10 = 6000000;
   VAR_8 = &VAR_7->dvbt_6;
   break;
  case 133:
   VAR_10 = 7000000;
   VAR_8 = &VAR_7->dvbt_7;
   break;
  case 132:
   VAR_10 = 8000000;
   VAR_8 = &VAR_7->dvbt_8;
   break;
  default:
   FUNC_3("bandwidth not set!\n");
   return -VAR_0;
  }
 } else {
  FUNC_3("modulation type not supported!\n");
  return -VAR_0;
 }


 if (VAR_4->ops.analog_ops.standby)
  VAR_4->ops.analog_ops.standby(VAR_4);

 VAR_9 = FUNC_1(VAR_4, VAR_8, VAR_11, VAR_10);

 if (FUNC_2(VAR_9))
  goto fail;

 VAR_6->frequency = VAR_11;
 VAR_6->bandwidth = (VAR_4->ops.info.type == VAR_2) ?
  VAR_5->u.ofdm.bandwidth : 0;
fail:
 return VAR_9;
}
