
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {struct af9005_device_state* priv; } ;
struct af9005_device_state {int sequence; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int,int*,int,int ) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct dvb_usb_device *VAR_2, u8 VAR_3, u8 * VAR_4,
   int VAR_5, u8 * VAR_6, int VAR_7)
{
 struct af9005_device_state *VAR_8 = VAR_2->priv;

 int VAR_9, VAR_10, VAR_11;
 u8 VAR_12[64];
 u8 VAR_13[64];

 if (VAR_5 < 0) {
  FUNC_1("send command, wlen less than 0 bytes. Makes no sense.");
  return -VAR_0;
 }
 if (VAR_5 > 54) {
  FUNC_1("send command, wlen more than 54 bytes. Not supported.");
  return -VAR_0;
 }
 if (VAR_7 > 54) {
  FUNC_1("send command, rlen more than 54 bytes. Not supported.");
  return -VAR_0;
 }
 VAR_11 = VAR_5 + 5;
 VAR_12[0] = (u8) (VAR_11 & 0xff);
 VAR_12[1] = (u8) ((VAR_11 & 0xff00) >> 8);

 VAR_12[2] = 0x26;
 VAR_12[3] = VAR_5 + 3;
 VAR_12[4] = VAR_8->sequence++;
 VAR_12[5] = VAR_3;
 VAR_12[6] = VAR_5;
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
  VAR_12[7 + VAR_10] = VAR_4[VAR_10];
 VAR_9 = FUNC_0(VAR_2, VAR_12, VAR_5 + 7, VAR_13, VAR_7 + 7, 0);
 if (VAR_9)
  return VAR_9;
 if (VAR_13[2] != 0x27) {
  FUNC_1("send command, wrong reply code.");
  return -VAR_1;
 }
 if (VAR_13[4] != VAR_12[4]) {
  FUNC_1("send command, wrong sequence in reply.");
  return -VAR_1;
 }
 if (VAR_13[5] != 0x01) {
  FUNC_1("send command, wrong status code in reply.");
  return -VAR_1;
 }
 if (VAR_13[6] != VAR_7) {
  FUNC_1("send command, invalid data length in reply.");
  return -VAR_1;
 }
 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
  VAR_6[VAR_10] = VAR_13[VAR_10 + 7];
 return 0;
}
