
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_state {scalar_t__ mode; int scan_in_progress; int watch_stereo; int nicam_on; int v4l2_std; int main; int second; int has_nicam; scalar_t__ radio; scalar_t__ restart; } ;
struct msp3400c_carrier_detect {int cdo; int name; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct msp3400c_carrier_detect*) ;
 int FUNC_1 (double) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct i2c_client*) ;
 scalar_t__ FUNC_3 () ;
 struct msp3400c_carrier_detect* VAR_7 ;
 struct msp3400c_carrier_detect* VAR_8 ;
 struct msp3400c_carrier_detect* VAR_9 ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (struct i2c_client*,int ,int ) ;
 int FUNC_7 (struct i2c_client*,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_8 (struct i2c_client*,int) ;
 scalar_t__ FUNC_9 (struct msp_state*,int) ;
 int FUNC_10 (struct msp_state*) ;
 int FUNC_11 () ;
 struct msp_state* FUNC_12 (int ) ;
 int FUNC_13 (int,scalar_t__,struct i2c_client*,char*,...) ;
 int FUNC_14 (struct i2c_client*) ;

int FUNC_15(void *VAR_12)
{
 struct i2c_client *VAR_13 = VAR_12;
 struct msp_state *VAR_14 = FUNC_12(FUNC_2(VAR_13));
 struct msp3400c_carrier_detect *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;

 FUNC_13(1, VAR_11, VAR_13, "msp3400 daemon started\n");
 FUNC_11();
 for (;;) {
  FUNC_13(2, VAR_11, VAR_13, "msp3400 thread: sleep\n");
  FUNC_9(VAR_14, -1);
  FUNC_13(2, VAR_11, VAR_13, "msp3400 thread: wakeup\n");

restart:
  FUNC_13(2, VAR_11, VAR_13, "thread: restart scan\n");
  VAR_14->restart = 0;
  if (FUNC_3())
   break;

  if (VAR_14->radio || VAR_2 == VAR_14->mode) {

   FUNC_13(1, VAR_11, VAR_13,
    "thread: no carrier scan\n");
   VAR_14->scan_in_progress = 0;
   FUNC_10(VAR_14);
   continue;
  }


  VAR_14->scan_in_progress = 1;
  FUNC_10(VAR_14);

  FUNC_7(VAR_13, VAR_0);
  VAR_19 = VAR_20 = 0;
  VAR_17 = VAR_18 = -1;
  VAR_14->watch_stereo = 0;
  VAR_14->nicam_on = 0;


  if (FUNC_9(VAR_14, 200))
   goto restart;


  VAR_15 = VAR_9;
  VAR_16 = FUNC_0(VAR_9);

  if (VAR_10 && (VAR_14->v4l2_std & VAR_6)) {

   VAR_17 = 3;
   VAR_16 = 0;
   FUNC_13(1, VAR_11, VAR_13, "AM sound override\n");
  }

  for (VAR_22 = 0; VAR_22 < VAR_16; VAR_22++) {
   FUNC_6(VAR_13, VAR_15[VAR_22].cdo, VAR_15[VAR_22].cdo);
   if (FUNC_9(VAR_14, 100))
    goto restart;
   VAR_21 = FUNC_8(VAR_13, 0x1b);
   if (VAR_21 > 32767)
    VAR_21 -= 65536;
   if (VAR_19 < VAR_21)
    VAR_19 = VAR_21, VAR_17 = VAR_22;
   FUNC_13(1, VAR_11, VAR_13,
    "carrier1 val: %5d / %s\n", VAR_21, VAR_15[VAR_22].name);
  }


  switch (VAR_17) {
  case 1:
   VAR_15 = VAR_7;
   VAR_16 = FUNC_0(VAR_7);
   break;
  case 3:
   VAR_15 = VAR_8;
   VAR_16 = FUNC_0(VAR_8);
   break;
  case 0:
  case 2:
  default:
   VAR_15 = ((void*)0);
   VAR_16 = 0;
   break;
  }

  if (VAR_10 && (VAR_14->v4l2_std & VAR_6)) {

   VAR_15 = ((void*)0);
   VAR_16 = 0;
   VAR_18 = 0;
  }
  for (VAR_22 = 0; VAR_22 < VAR_16; VAR_22++) {
   FUNC_6(VAR_13, VAR_15[VAR_22].cdo, VAR_15[VAR_22].cdo);
   if (FUNC_9(VAR_14, 100))
    goto restart;
   VAR_21 = FUNC_8(VAR_13, 0x1b);
   if (VAR_21 > 32767)
    VAR_21 -= 65536;
   if (VAR_20 < VAR_21)
    VAR_20 = VAR_21, VAR_18 = VAR_22;
   FUNC_13(1, VAR_11, VAR_13,
    "carrier2 val: %5d / %s\n", VAR_21, VAR_15[VAR_22].name);
  }


  VAR_14->main = VAR_9[VAR_17].cdo;
  switch (VAR_17) {
  case 1:
   if (VAR_18 == 0) {

    VAR_14->second = VAR_7[VAR_18].cdo;
    FUNC_7(VAR_13, VAR_5);
    VAR_14->watch_stereo = 1;
   } else if (VAR_18 == 1 && VAR_14->has_nicam) {

    VAR_14->second = VAR_7[VAR_18].cdo;
    FUNC_7(VAR_13, VAR_3);
    VAR_14->nicam_on = 1;
    VAR_14->watch_stereo = 1;
   } else {
    goto no_second;
   }
   break;
  case 2:

   VAR_14->second = FUNC_1(6.552);
   FUNC_7(VAR_13, VAR_4);
   VAR_14->nicam_on = 1;
   VAR_14->watch_stereo = 1;
   break;
  case 3:
   if (VAR_18 == 1 || VAR_18 == 2) {

    VAR_14->second = VAR_8[VAR_18].cdo;
    FUNC_7(VAR_13, VAR_5);
    VAR_14->watch_stereo = 1;
   } else if (VAR_18 == 0 && (VAR_14->v4l2_std & VAR_6)) {

    VAR_14->second = VAR_8[VAR_18].cdo;
    FUNC_7(VAR_13, VAR_1);
    VAR_14->watch_stereo = 1;
   } else if (VAR_18 == 0 && VAR_14->has_nicam) {

    VAR_14->second = VAR_8[VAR_18].cdo;
    FUNC_7(VAR_13, VAR_3);
    VAR_14->nicam_on = 1;
    VAR_14->watch_stereo = 1;
   } else {
    goto no_second;
   }
   break;
  case 0:
  default:
no_second:
   VAR_14->second = VAR_9[VAR_17].cdo;
   FUNC_7(VAR_13, VAR_5);
   break;
  }
  FUNC_6(VAR_13, VAR_14->second, VAR_14->main);


  VAR_14->scan_in_progress = 0;
  FUNC_5(VAR_13);
  FUNC_10(VAR_14);

  if (VAR_11)
   FUNC_4(VAR_13);



  VAR_16 = 3;
  while (VAR_14->watch_stereo) {
   if (FUNC_9(VAR_14, VAR_16 ? 1000 : 5000))
    goto restart;
   if (VAR_16)
    VAR_16--;
   FUNC_14(VAR_13);
  }
 }
 FUNC_13(1, VAR_11, VAR_13, "thread: exit\n");
 return 0;
}
