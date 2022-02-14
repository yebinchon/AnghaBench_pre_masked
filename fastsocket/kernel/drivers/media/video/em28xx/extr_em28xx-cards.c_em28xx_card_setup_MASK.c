
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct tveeprom {int audio_processor; scalar_t__ tuner_type; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_6__ {int has_msp34xx; scalar_t__ valid; scalar_t__ decoder; scalar_t__ adecoder; scalar_t__ tvaudio_addr; scalar_t__ tuner_type; scalar_t__ radio_addr; TYPE_1__ radio; scalar_t__ has_snapshot_button; scalar_t__ has_ir_i2c; int tuner_gpio; int name; scalar_t__ is_webcam; } ;
struct TYPE_7__ {int addr; } ;
struct em28xx {int progressive; int model; scalar_t__ tuner_addr; int tda9887_conf; int i2s_speed; scalar_t__ em28xx_sensor; int i2c_adap; int v4l2_dev; TYPE_2__ board; int sensor_xtal; scalar_t__ tuner_type; int eedata; TYPE_3__ i2c_client; } ;
typedef enum v4l2_i2c_tuner_type { ____Placeholder_v4l2_i2c_tuner_type } v4l2_i2c_tuner_type ;
struct TYPE_8__ {scalar_t__ tuner_addr; int tda9887_conf; scalar_t__ tuner_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_4__* VAR_15 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct em28xx*,int ) ;
 int FUNC_2 (struct em28xx*) ;
 scalar_t__ FUNC_3 (struct em28xx*) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (struct em28xx*) ;
 int FUNC_6 (struct em28xx*) ;
 int FUNC_7 (struct em28xx*) ;
 int FUNC_8 (struct em28xx*,int ) ;
 int FUNC_9 (struct em28xx*) ;
 int FUNC_10 (struct em28xx*) ;
 int FUNC_11 (struct em28xx*,int,int) ;
 int FUNC_12 (int) ;
 int * VAR_16 ;
 int * VAR_17 ;
 int FUNC_13 (char*) ;
 int VAR_18 ;
 int * VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_14 (TYPE_3__*,struct tveeprom*,int ) ;
 int * VAR_21 ;
 struct v4l2_subdev* FUNC_15 (int *,int *,char*,scalar_t__,int *) ;
 scalar_t__ FUNC_16 (struct v4l2_subdev*) ;
 int * FUNC_17 (int) ;
 int FUNC_18 (struct v4l2_subdev*,int ,int ,int ,int *) ;

void FUNC_19(struct em28xx *VAR_22)
{




 if (VAR_22->board.is_webcam) {
  if (FUNC_3(VAR_22) < 0)
   VAR_22->board.is_webcam = 0;
  else
   VAR_22->progressive = 1;
 }

 if (!VAR_22->board.is_webcam) {
  switch (VAR_22->model) {
  case 135:
  case 138:
  if (FUNC_2(VAR_22) < 0)
   FUNC_0("Board not discovered\n");
  else {
   FUNC_9(VAR_22);
   FUNC_6(VAR_22);
  }
  break;
  default:
   FUNC_9(VAR_22);
  }
 }

 FUNC_4("Identified as %s (card=%d)\n",
      VAR_22->board.name, VAR_22->model);

 VAR_22->tuner_type = VAR_15[VAR_22->model].tuner_type;
 if (VAR_15[VAR_22->model].tuner_addr)
  VAR_22->tuner_addr = VAR_15[VAR_22->model].tuner_addr;

 if (VAR_15[VAR_22->model].tda9887_conf)
  VAR_22->tda9887_conf = VAR_15[VAR_22->model].tda9887_conf;


 switch (VAR_22->model) {
 case 137:
 case 134:
 case 133:
 case 129:
 case 128:
 {
  struct tveeprom VAR_23;





  VAR_22->i2c_client.addr = 0xa0 >> 1;
  FUNC_14(&VAR_22->i2c_client, &VAR_23, VAR_22->eedata);

  VAR_22->tuner_type = VAR_23.tuner_type;

  if (VAR_23.audio_processor == VAR_12) {
   VAR_22->i2s_speed = 2048000;
   VAR_22->board.has_msp34xx = 1;
  }
  break;
 }
 case 131:
  FUNC_11(VAR_22, 0x0d, 0x42);
  FUNC_12(10);
  FUNC_11(VAR_22, VAR_6, 0xfd);
  FUNC_12(10);
  break;
 case 136:

  FUNC_11(VAR_22, VAR_6, 0xf9);
  break;
 case 135:
 case 138:
 case 132:
  if (!FUNC_2(VAR_22))
   FUNC_9(VAR_22);





  FUNC_1(VAR_22, VAR_22->board.tuner_gpio);
  FUNC_8(VAR_22, VAR_3);
  break;
 case 130:
  if (!FUNC_2(VAR_22))
   FUNC_9(VAR_22);





  FUNC_1(VAR_22, VAR_22->board.tuner_gpio);
  FUNC_8(VAR_22, VAR_3);
  break;
 }





 if (VAR_22->board.has_snapshot_button)
  FUNC_7(VAR_22);

 if (VAR_22->board.valid == VAR_4) {
  FUNC_0("\n\n");
  FUNC_0("The support for this board weren't "
         "valid yet.\n");
  FUNC_0("Please send a report of having this working\n");
  FUNC_0("not to V4L mailing list (and/or to other "
    "addresses)\n\n");
 }


 if (VAR_20 >= 0)
  VAR_22->tuner_type = VAR_20;


 if (VAR_22->board.has_msp34xx)
  FUNC_15(&VAR_22->v4l2_dev, &VAR_22->i2c_adap,
   "msp3400", 0, VAR_16);

 if (VAR_22->board.decoder == VAR_7)
  FUNC_15(&VAR_22->v4l2_dev, &VAR_22->i2c_adap,
   "saa7115_auto", 0, VAR_19);

 if (VAR_22->board.decoder == VAR_9)
  FUNC_15(&VAR_22->v4l2_dev, &VAR_22->i2c_adap,
   "tvp5150", 0, VAR_21);

 if (VAR_22->em28xx_sensor == VAR_5) {
  struct v4l2_subdev *VAR_24;

  VAR_24 = FUNC_15(&VAR_22->v4l2_dev,
    &VAR_22->i2c_adap, "mt9v011", 0, VAR_17);
  FUNC_18(VAR_24, VAR_13, VAR_18, 0, &VAR_22->sensor_xtal);
 }


 if (VAR_22->board.adecoder == VAR_8)
  FUNC_15(&VAR_22->v4l2_dev, &VAR_22->i2c_adap,
   "tvaudio", VAR_22->board.tvaudio_addr, ((void*)0));

 if (VAR_22->board.tuner_type != VAR_11) {
  int VAR_25 = (VAR_22->tda9887_conf & VAR_10);

  if (VAR_22->board.radio.type)
   FUNC_15(&VAR_22->v4l2_dev, &VAR_22->i2c_adap,
    "tuner", VAR_22->board.radio_addr, ((void*)0));

  if (VAR_25)
   FUNC_15(&VAR_22->v4l2_dev,
    &VAR_22->i2c_adap, "tuner",
    0, FUNC_17(VAR_0));
  if (VAR_22->tuner_addr == 0) {
   enum v4l2_i2c_tuner_type VAR_26 =
    VAR_25 ? VAR_2 : VAR_1;
   struct v4l2_subdev *VAR_27;

   VAR_27 = FUNC_15(&VAR_22->v4l2_dev,
    &VAR_22->i2c_adap, "tuner",
    0, FUNC_17(VAR_26));

   if (VAR_27)
    VAR_22->tuner_addr = FUNC_16(VAR_27);
  } else {
   FUNC_15(&VAR_22->v4l2_dev, &VAR_22->i2c_adap,
    "tuner", VAR_22->tuner_addr, ((void*)0));
  }
 }

 FUNC_10(VAR_22);

 if(!VAR_14)
  FUNC_5(VAR_22);
}
