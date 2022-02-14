
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tveeprom {int model; scalar_t__ tuner_type; scalar_t__ has_radio; int tuner_formats; } ;
struct TYPE_4__ {int tuner; int radio; } ;
struct cx18 {int std; TYPE_2__ options; int card_name; TYPE_1__* card; int card_i2c; int v4l2_cap; } ;
struct TYPE_3__ {int i2c; int name; int v4l2_capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct cx18*,struct tveeprom*) ;

__attribute__((used)) static void FUNC_5(struct cx18 *VAR_10)
{
 struct tveeprom VAR_11;

 FUNC_4(VAR_10, &VAR_11);






 switch (VAR_11.model) {
 case 74301:
 case 74321:
 case 74351:
 case 74361:

  VAR_10->card = FUNC_3(VAR_1);
  break;
 case 74021:
 case 74031:
 case 74041:
 case 74141:
 case 74541:
 case 74551:
 case 74591:
 case 74651:
 case 74691:
 case 74751:
 case 74891:

  VAR_10->card = FUNC_3(VAR_0);
  break;
 case 0x718:
  return;
 case 0xffffffff:
  FUNC_2("Unknown EEPROM encoding\n");
  return;
 case 0:
  FUNC_1("Invalid EEPROM\n");
  return;
 default:
  FUNC_1("Unknown model %d, defaulting to original HVR-1600 "
    "(cardtype=1)\n", VAR_11.model);
  VAR_10->card = FUNC_3(VAR_0);
  break;
 }

 VAR_10->v4l2_cap = VAR_10->card->v4l2_capabilities;
 VAR_10->card_name = VAR_10->card->name;
 VAR_10->card_i2c = VAR_10->card->i2c;

 FUNC_2("Autodetected %s\n", VAR_10->card_name);

 if (VAR_11.tuner_type == VAR_2)
  FUNC_1("tveeprom cannot autodetect tuner!\n");

 if (VAR_10->options.tuner == -1)
  VAR_10->options.tuner = VAR_11.tuner_type;
 if (VAR_10->options.radio == -1)
  VAR_10->options.radio = (VAR_11.has_radio != 0);

 if (VAR_10->std != 0)

  return;


 if (VAR_11.tuner_formats & VAR_5) {
  FUNC_0("PAL tuner detected\n");
  VAR_10->std |= VAR_6 | VAR_7;
 } else if (VAR_11.tuner_formats & VAR_3) {
  FUNC_0("NTSC tuner detected\n");
  VAR_10->std |= VAR_4;
 } else if (VAR_11.tuner_formats & VAR_8) {
  FUNC_0("SECAM tuner detected\n");
  VAR_10->std |= VAR_9;
 } else {
  FUNC_2("No tuner detected, default to NTSC-M\n");
  VAR_10->std |= VAR_4;
 }
}
