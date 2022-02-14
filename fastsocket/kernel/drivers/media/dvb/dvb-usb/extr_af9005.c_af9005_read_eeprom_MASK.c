
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {struct af9005_device_state* priv; } ;
struct af9005_device_state {int sequence; } ;
typedef int obuf ;
typedef int ibuf ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int,int*,int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int*,int ,int) ;

int FUNC_3(struct dvb_usb_device *VAR_1, u8 VAR_2, u8 * VAR_3,
         int VAR_4)
{
 struct af9005_device_state *VAR_5 = VAR_1->priv;
 u8 VAR_6[16], VAR_7[14];
 int VAR_8, VAR_9;

 FUNC_2(VAR_6, 0, sizeof(VAR_6));
 FUNC_2(VAR_7, 0, sizeof(VAR_7));

 VAR_6[0] = 14;
 VAR_6[1] = 0;

 VAR_6[2] = 0x2a;

 VAR_6[3] = 12;

 VAR_6[4] = VAR_5->sequence++;

 VAR_6[5] = 0;

 VAR_6[6] = VAR_4;
 VAR_6[7] = VAR_2;
 VAR_8 = FUNC_0(VAR_1, VAR_6, 16, VAR_7, 14, 0);
 if (VAR_8)
  return VAR_8;
 if (VAR_7[2] != 0x2b) {
  FUNC_1("Read eeprom, invalid reply code");
  return -VAR_0;
 }
 if (VAR_7[3] != 10) {
  FUNC_1("Read eeprom, invalid reply length");
  return -VAR_0;
 }
 if (VAR_7[4] != VAR_6[4]) {
  FUNC_1("Read eeprom, wrong sequence in reply ");
  return -VAR_0;
 }
 if (VAR_7[5] != 1) {
  FUNC_1("Read eeprom, wrong status in reply ");
  return -VAR_0;
 }
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_3[VAR_9] = VAR_7[6 + VAR_9];
 }
 return 0;
}
