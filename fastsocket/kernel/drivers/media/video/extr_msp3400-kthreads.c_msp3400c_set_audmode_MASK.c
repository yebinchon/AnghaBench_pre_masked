
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_state {int audmode; scalar_t__ opmode; int mode; int rxsubchans; int nicam_on; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (double) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 int FUNC_4 (struct i2c_client*,int) ;
 int FUNC_5 (struct i2c_client*,int,int) ;
 struct msp_state* FUNC_6 (int ) ;
 int FUNC_7 (int,int ,struct i2c_client*,char*,...) ;

__attribute__((used)) static void FUNC_8(struct i2c_client *VAR_6)
{
 static char *VAR_7[] = {
  "mono", "stereo", "lang2", "lang1", "lang1+lang2"
 };
 struct msp_state *VAR_8 = FUNC_6(FUNC_1(VAR_6));
 char *VAR_9 = (VAR_8->audmode >= 0 && VAR_8->audmode < 5) ?
  VAR_7[VAR_8->audmode] : "unknown";
 int VAR_10 = 0;
 int VAR_11 = VAR_8->audmode;

 if (VAR_8->opmode == VAR_0) {



  FUNC_7(1, VAR_5, VAR_6,
   "set_audmode called with mode=%d instead of set_source (ignored)\n",
   VAR_8->audmode);
  return;
 }





 if (VAR_8->mode != 138) {

  if (VAR_8->rxsubchans == VAR_3)
   VAR_11 = 129;

  else if (VAR_8->rxsubchans & VAR_2) {

   if (VAR_11 == 129 ||
       VAR_11 == 128)
    VAR_11 = 132;
  }

  else if (VAR_11 != 129)
   VAR_11 = 128;
 }


 switch (VAR_8->mode) {
 case 133:
  FUNC_7(1, VAR_5, VAR_6, "FM set_audmode: %s\n", VAR_9);
  switch (VAR_11) {
  case 128:
   FUNC_5(VAR_6, 0x000e, 0x3001);
   break;
  case 129:
  case 132:
  case 130:
  case 131:
   FUNC_5(VAR_6, 0x000e, 0x3000);
   break;
  }
  break;
 case 134:
  FUNC_7(1, VAR_5, VAR_6, "SAT set_audmode: %s\n", VAR_9);
  switch (VAR_11) {
  case 129:
   FUNC_2(VAR_6, FUNC_0(6.5), FUNC_0(6.5));
   break;
  case 128:
  case 131:
   FUNC_2(VAR_6, FUNC_0(7.2), FUNC_0(7.02));
   break;
  case 132:
   FUNC_2(VAR_6, FUNC_0(7.38), FUNC_0(7.02));
   break;
  case 130:
   FUNC_2(VAR_6, FUNC_0(7.38), FUNC_0(7.02));
   break;
  }
  break;
 case 137:
 case 136:
 case 140:
  FUNC_7(1, VAR_5, VAR_6,
   "NICAM set_audmode: %s\n", VAR_9);
  if (VAR_8->nicam_on)
   VAR_10 = 0x0100;
  break;
 case 139:
  FUNC_7(1, VAR_5, VAR_6,
   "BTSC set_audmode: %s\n", VAR_9);
  break;
 case 138:
  FUNC_7(1, VAR_5, VAR_6,
   "extern set_audmode: %s\n", VAR_9);
  VAR_10 = 0x0200;
  break;
 case 135:
  FUNC_7(1, VAR_5, VAR_6,
   "FM-Radio set_audmode: %s\n", VAR_9);
  break;
 default:
  FUNC_7(1, VAR_5, VAR_6, "mono set_audmode\n");
  return;
 }


 FUNC_7(1, VAR_5, VAR_6, "set audmode %d\n", VAR_11);
 switch (VAR_11) {
 case 128:
 case 131:
  VAR_10 |= 0x0020;
  break;
 case 129:
  if (VAR_8->mode == 140) {
   FUNC_7(1, VAR_5, VAR_6, "switching to AM mono\n");


   FUNC_3(VAR_6, VAR_1, 0);
   VAR_10 = 0x0200;
   break;
  }
  if (VAR_8->rxsubchans & VAR_4)
   VAR_10 = 0x0030;
  break;
 case 132:
  break;
 case 130:
  VAR_10 |= 0x0010;
  break;
 }
 FUNC_7(1, VAR_5, VAR_6,
  "set_audmode final source/matrix = 0x%x\n", VAR_10);

 FUNC_4(VAR_6, VAR_10);
}
