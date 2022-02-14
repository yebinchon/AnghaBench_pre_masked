
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int has_audio; int i2s_3rates; int i2s_5rates; int ac97; int ac97_vendor_id; int ac97_feat; } ;
struct em28xx {scalar_t__ chip_id; int has_alsa_audio; TYPE_1__ audio_mode; scalar_t__ has_audio_class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;
 int FUNC_0 (struct em28xx*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct em28xx*,int ) ;
 int FUNC_3 (struct em28xx*,int ) ;
 int FUNC_4 (char*,...) ;

int FUNC_5(struct em28xx *VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14;
 u32 VAR_15;

 if (VAR_10->chip_id == VAR_3 || VAR_10->chip_id == VAR_4) {

  VAR_10->audio_mode.has_audio = 0;
  VAR_10->has_audio_class = 0;
  VAR_10->has_alsa_audio = 0;
  return 0;
 }


 if (!VAR_10->has_audio_class)
  VAR_10->has_alsa_audio = 1;

 VAR_10->audio_mode.has_audio = 1;


 VAR_14 = FUNC_3(VAR_10, VAR_9);
 FUNC_1("Config register raw data: 0x%02x\n", VAR_14);
 if (VAR_14 < 0) {

  VAR_14 = VAR_5;
 } else if ((VAR_14 & VAR_6) == 0x00) {

  VAR_10->has_alsa_audio = 0;
  VAR_10->audio_mode.has_audio = 0;
  return 0;
 } else if ((VAR_14 & VAR_6) ==
     VAR_7) {
  FUNC_1("I2S Audio (3 sample rates)\n");
  VAR_10->audio_mode.i2s_3rates = 1;
 } else if ((VAR_14 & VAR_6) ==
     VAR_8) {
  FUNC_1("I2S Audio (5 sample rates)\n");
  VAR_10->audio_mode.i2s_5rates = 1;
 }

 if ((VAR_14 & VAR_6) != VAR_5) {

  VAR_10->audio_mode.ac97 = 128;
  goto init_audio;
 }

 VAR_10->audio_mode.ac97 = 130;

 VAR_11 = FUNC_2(VAR_10, VAR_1);
 if (VAR_11 < 0) {





  FUNC_4("AC97 chip type couldn't be determined\n");
  VAR_10->audio_mode.ac97 = 128;
  VAR_10->has_alsa_audio = 0;
  VAR_10->audio_mode.has_audio = 0;
  goto init_audio;
 }

 VAR_12 = FUNC_2(VAR_10, VAR_2);
 if (VAR_12 < 0)
  goto init_audio;

 VAR_15 = VAR_11 << 16 | VAR_12;

 VAR_10->audio_mode.ac97_vendor_id = VAR_15;
 FUNC_4("AC97 vendor ID = 0x%08x\n", VAR_15);

 VAR_13 = FUNC_2(VAR_10, VAR_0);
 if (VAR_13 < 0)
  goto init_audio;

 VAR_10->audio_mode.ac97_feat = VAR_13;
 FUNC_4("AC97 features = 0x%04x\n", VAR_13);


 if ((VAR_15 == 0xffffffff) && (VAR_13 == 0x6a90))
  VAR_10->audio_mode.ac97 = 131;
 else if ((VAR_15 >> 8) == 0x838476)
  VAR_10->audio_mode.ac97 = 129;

init_audio:

 switch (VAR_10->audio_mode.ac97) {
 case 128:
  FUNC_1("No AC97 audio processor\n");
  break;
 case 131:
  FUNC_1("Empia 202 AC97 audio processor detected\n");
  break;
 case 129:
  FUNC_1("Sigmatel audio processor detected(stac 97%02x)\n",
       VAR_10->audio_mode.ac97_vendor_id & 0xff);
  break;
 case 130:
  FUNC_4("Unknown AC97 audio processor detected!\n");
  break;
 default:
  break;
 }

 return FUNC_0(VAR_10);
}
