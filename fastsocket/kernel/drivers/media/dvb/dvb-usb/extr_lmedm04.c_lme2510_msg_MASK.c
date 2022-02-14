
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lme2510_state {int i2c_talk_onoff; int tuner_config; int signal_lock; int stream_on; int signal_level; int signal_sn; } ;
struct dvb_usb_device {int i2c_mutex; struct lme2510_state* priv; } ;


 int VAR_0 ;


 int FUNC_0 (int,char*,int,int) ;
 int FUNC_1 (struct dvb_usb_device*) ;
 int FUNC_2 (struct dvb_usb_device*,int*,int,int*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct dvb_usb_device *VAR_1,
  u8 *VAR_2, int VAR_3, u8 *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 struct lme2510_state *VAR_7 = VAR_1->priv;

 if (FUNC_4(&VAR_1->i2c_mutex) < 0)
   return -VAR_0;

 if (VAR_7->i2c_talk_onoff == 1) {

  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

  switch (VAR_7->tuner_config) {
  case 129:
   if (VAR_2[2] == 0x1c) {
    if (VAR_2[3] == 0x0e) {
     VAR_7->signal_lock = VAR_4[1];
     if ((VAR_7->stream_on & 1) &&
      (VAR_7->signal_lock & 0x10)) {
      FUNC_1(VAR_1);
      VAR_7->i2c_talk_onoff = 0;
     }
     FUNC_3(80);
    }
   }
   break;
  case 128:
   if (VAR_2[2] == 0xd0) {
    if (VAR_2[3] == 0x24) {
     VAR_7->signal_lock = VAR_4[1];
     if ((VAR_7->stream_on & 1) &&
      (VAR_7->signal_lock & 0x8)) {
      FUNC_1(VAR_1);
      VAR_7->i2c_talk_onoff = 0;
     }
    }
    if ((VAR_2[3] != 0x6) & (VAR_2[3] != 0x5))
     FUNC_3(5);
   }
   break;
  default:
   break;
  }
 } else {
  switch (VAR_7->tuner_config) {
  case 129:
   switch (VAR_2[3]) {
   case 0x0e:
    VAR_4[0] = 0x55;
    VAR_4[1] = VAR_7->signal_lock;
    break;
   case 0x43:
    VAR_4[0] = 0x55;
    VAR_4[1] = VAR_7->signal_level;
    break;
   case 0x1c:
    VAR_4[0] = 0x55;
    VAR_4[1] = VAR_7->signal_sn;
    break;
   case 0x15:
   case 0x16:
   case 0x17:
   case 0x18:
    VAR_4[0] = 0x55;
    VAR_4[1] = 0x00;
    break;
   default:
    FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    VAR_7->i2c_talk_onoff = 1;
    break;
   }
   break;
  case 128:
   switch (VAR_2[3]) {
   case 0x10:
    VAR_4[0] = 0x55;
    VAR_4[1] = (VAR_7->signal_level & 0x80)
      ? 0 : (VAR_7->signal_level * 2);
    break;
   case 0x2d:
    VAR_4[0] = 0x55;
    VAR_4[1] = VAR_7->signal_sn;
    break;
   case 0x24:
    VAR_4[0] = 0x55;
    VAR_4[1] = VAR_7->signal_lock;
    break;
   case 0x2e:
   case 0x26:
   case 0x27:
    VAR_4[0] = 0x55;
    VAR_4[1] = 0x00;
    break;
   default:
    FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    VAR_7->i2c_talk_onoff = 1;
    break;
   }
   break;
  default:
   break;
  }

  FUNC_0(4, "I2C From Interupt Message out(%02x) in(%02x)",
    VAR_2[3], VAR_4[1]);

 }

 FUNC_5(&VAR_1->i2c_mutex);

 return VAR_6;
}
