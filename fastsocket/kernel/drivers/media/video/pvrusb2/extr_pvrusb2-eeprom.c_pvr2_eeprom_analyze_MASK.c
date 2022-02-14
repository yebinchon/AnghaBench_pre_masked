
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tvdata ;
struct tveeprom {int tuner_formats; int serial_number; int tuner_type; int rev_str; int revision; int model; int audio_processor; int has_radio; } ;
struct pvr2_hdw {int tuner_updated; int std_mask_eeprom; int serial_number; int tuner_type; int i2c_adap; int eeprom_addr; } ;
struct i2c_client {int * adapter; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct tveeprom*,int ,int) ;
 int * FUNC_2 (struct pvr2_hdw*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct i2c_client*,struct tveeprom*,int *) ;

int FUNC_5(struct pvr2_hdw *VAR_1)
{
 u8 *VAR_2;
 struct tveeprom VAR_3;

 FUNC_1(&VAR_3,0,sizeof(VAR_3));

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2) return -VAR_0;

 {
  struct i2c_client VAR_4;

  VAR_4.addr = VAR_1->eeprom_addr;
  VAR_4.adapter = &VAR_1->i2c_adap;
  FUNC_4(&VAR_4,&VAR_3,VAR_2);
 }

 FUNC_3("eeprom assumed v4l tveeprom module");
 FUNC_3("eeprom direct call results:");
 FUNC_3("has_radio=%d",VAR_3.has_radio);
 FUNC_3("tuner_type=%d",VAR_3.tuner_type);
 FUNC_3("tuner_formats=0x%x",VAR_3.tuner_formats);
 FUNC_3("audio_processor=%d",VAR_3.audio_processor);
 FUNC_3("model=%d",VAR_3.model);
 FUNC_3("revision=%d",VAR_3.revision);
 FUNC_3("serial_number=%d",VAR_3.serial_number);
 FUNC_3("rev_str=%s",VAR_3.rev_str);
 VAR_1->tuner_type = VAR_3.tuner_type;
 VAR_1->tuner_updated = !0;
 VAR_1->serial_number = VAR_3.serial_number;
 VAR_1->std_mask_eeprom = VAR_3.tuner_formats;

 FUNC_0(VAR_2);

 return 0;
}
