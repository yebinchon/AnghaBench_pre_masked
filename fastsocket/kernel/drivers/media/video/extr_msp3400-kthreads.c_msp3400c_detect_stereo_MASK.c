
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_state {int rxsubchans; int nicam_on; int mode; } ;
struct i2c_client {int dummy; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*) ;
 int VAR_4 ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int) ;
 struct msp_state* FUNC_3 (int ) ;
 int FUNC_4 (int,int ,struct i2c_client*,char*,int,...) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_5)
{
 struct msp_state *VAR_6 = FUNC_3(FUNC_0(VAR_5));
 int VAR_7;
 int VAR_8 = VAR_6->rxsubchans;
 int VAR_9 = VAR_6->nicam_on;
 int VAR_10 = 0;

 switch (VAR_6->mode) {
 case 128:
  VAR_7 = FUNC_2(VAR_5, 0x18);
  if (VAR_7 > 32767)
   VAR_7 -= 65536;
  FUNC_4(2, VAR_4, VAR_5,
   "stereo detect register: %d\n", VAR_7);
  if (VAR_7 > 8192) {
   VAR_8 = VAR_3;
  } else if (VAR_7 < -4096) {
   VAR_8 = VAR_0 | VAR_1;
  } else {
   VAR_8 = VAR_2;
  }
  VAR_9 = 0;
  break;
 case 130:
 case 129:
 case 131:
  VAR_7 = FUNC_1(VAR_5, 0x23);
  FUNC_4(2, VAR_4, VAR_5, "nicam sync=%d, mode=%d\n",
   VAR_7 & 1, (VAR_7 & 0x1e) >> 1);

  if (VAR_7 & 1) {

   switch ((VAR_7 & 0x1e) >> 1) {
   case 0:
   case 8:
    VAR_8 = VAR_3;
    break;
   case 1:
   case 9:
    VAR_8 = VAR_2;
    break;
   case 2:
   case 10:
    VAR_8 = VAR_0 | VAR_1;
    break;
   default:
    VAR_8 = VAR_2;
    break;
   }
   VAR_9 = 1;
  } else {
   VAR_9 = 0;
   VAR_8 = VAR_2;
  }
  break;
 }
 if (VAR_8 != VAR_6->rxsubchans) {
  VAR_10 = 1;
  FUNC_4(1, VAR_4, VAR_5,
   "watch: rxsubchans %02x => %02x\n",
   VAR_6->rxsubchans, VAR_8);
  VAR_6->rxsubchans = VAR_8;
 }
 if (VAR_9 != VAR_6->nicam_on) {
  VAR_10 = 1;
  FUNC_4(1, VAR_4, VAR_5, "watch: nicam %d => %d\n",
   VAR_6->nicam_on, VAR_9);
  VAR_6->nicam_on = VAR_9;
 }
 return VAR_10;
}
