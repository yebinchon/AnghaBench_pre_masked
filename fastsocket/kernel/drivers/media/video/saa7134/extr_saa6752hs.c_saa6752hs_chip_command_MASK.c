
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
typedef enum saa6752hs_command { ____Placeholder_saa6752hs_command } saa6752hs_command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (struct i2c_client*,unsigned char*,int) ;
 int FUNC_1 (struct i2c_client*,unsigned char*,int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_4,
      enum saa6752hs_command VAR_5)
{
 unsigned char VAR_6[3];
 unsigned long VAR_7;
 int VAR_8 = 0;


 switch(VAR_5) {
 case 131:
  VAR_6[0] = 0x00;
  break;

 case 128:
  VAR_6[0] = 0x03;
  break;

 case 129:
  VAR_6[0] = 0x02;
  break;

 case 134:
  VAR_6[0] = 0x04;
  break;

 case 133:
  VAR_6[0] = 0x05;
  break;

 case 130:
  VAR_6[0] = 0x06;
  break;

 case 132:
  VAR_6[0] = 0x07;
  break;

 default:
  return -VAR_0;
 }


 FUNC_1(VAR_4, VAR_6, 1);
 VAR_7 = VAR_3 + VAR_2 * 3;
 for (;;) {

  VAR_6[0] = 0x10;
  FUNC_1(VAR_4, VAR_6, 1);
  FUNC_0(VAR_4, VAR_6, 1);

  if (!(VAR_6[0] & 0x20))
   break;
  if (FUNC_3(VAR_3,VAR_7)) {
   VAR_8 = -VAR_1;
   break;
  }

  FUNC_2(10);
 }


 FUNC_2(50);

 return VAR_8;
}
