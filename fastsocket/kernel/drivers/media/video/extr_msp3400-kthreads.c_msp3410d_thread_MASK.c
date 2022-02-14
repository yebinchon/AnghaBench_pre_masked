
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msp_state {scalar_t__ mode; int scan_in_progress; int v4l2_std; int watch_stereo; int nicam_on; int std; int i2s_mode; scalar_t__ has_i2s_conf; scalar_t__ has_nicam; int rxsubchans; scalar_t__ radio; int second; int main; scalar_t__ restart; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {char* name; int retval; int second; int main; } ;


 int FUNC_0 (double) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct i2c_client*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;
 int FUNC_5 (struct i2c_client*,scalar_t__) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (struct i2c_client*,int) ;
 scalar_t__ FUNC_7 (struct msp_state*,int) ;
 int FUNC_8 (int) ;
 TYPE_1__* VAR_13 ;
 int FUNC_9 (struct msp_state*) ;
 int FUNC_10 (struct i2c_client*,int,int) ;
 int FUNC_11 (struct i2c_client*,int,int) ;
 int FUNC_12 () ;
 struct msp_state* FUNC_13 (int ) ;
 int FUNC_14 (int,scalar_t__,struct i2c_client*,char*,...) ;
 int FUNC_15 (struct i2c_client*) ;

int FUNC_16(void *VAR_14)
{
 struct i2c_client *VAR_15 = VAR_14;
 struct msp_state *VAR_16 = FUNC_13(FUNC_1(VAR_15));
 int VAR_17, VAR_18, VAR_19, VAR_20;

 FUNC_14(1, VAR_12, VAR_15, "msp3410 daemon started\n");
 FUNC_12();
 for (;;) {
  FUNC_14(2, VAR_12, VAR_15, "msp3410 thread: sleep\n");
  FUNC_7(VAR_16, -1);
  FUNC_14(2, VAR_12, VAR_15, "msp3410 thread: wakeup\n");

restart:
  FUNC_14(2, VAR_12, VAR_15, "thread: restart scan\n");
  VAR_16->restart = 0;
  if (FUNC_2())
   break;

  if (VAR_16->mode == VAR_2) {

   FUNC_14(1, VAR_12, VAR_15,
    "thread: no carrier scan\n");
   VAR_16->scan_in_progress = 0;
   FUNC_9(VAR_16);
   continue;
  }


  VAR_16->scan_in_progress = 1;
  FUNC_9(VAR_16);




  if (VAR_16->radio)
   VAR_19 = 0x40;
  else
   VAR_19 = (VAR_16->v4l2_std & VAR_7) ? 0x20 : 1;
  VAR_16->watch_stereo = 0;
  VAR_16->nicam_on = 0;


  if (FUNC_7(VAR_16, 200))
   goto restart;

  if (VAR_12)
   FUNC_14(2, VAR_12, VAR_15,
    "setting standard: %s (0x%04x)\n",
    FUNC_8(VAR_19), VAR_19);

  if (VAR_19 != 1) {

   VAR_17 = VAR_19;
  } else {

   FUNC_10(VAR_15, 0x20, VAR_19);
   for (;;) {
    if (FUNC_7(VAR_16, 100))
     goto restart;


    VAR_17 = FUNC_6(VAR_15, 0x7e);
    if (VAR_17 < 0x07ff)
     break;
    FUNC_14(2, VAR_12, VAR_15,
     "detection still in progress\n");
   }
  }
  for (VAR_18 = 0; VAR_13[VAR_18].name != ((void*)0); VAR_18++)
   if (VAR_13[VAR_18].retval == VAR_17)
    break;
  FUNC_14(1, VAR_12, VAR_15, "current standard: %s (0x%04x)\n",
   FUNC_8(VAR_17), VAR_17);
  VAR_16->main = VAR_13[VAR_18].main;
  VAR_16->second = VAR_13[VAR_18].second;
  VAR_16->std = VAR_17;
  VAR_16->rxsubchans = VAR_9;

  if (VAR_11 && !VAR_16->radio &&
      (VAR_16->v4l2_std & VAR_8) && (VAR_17 != 0x0009)) {

   FUNC_14(1, VAR_12, VAR_15, "autodetection failed,"
    " switching to backup standard: %s (0x%04x)\n",
    VAR_13[8].name ?
     VAR_13[8].name : "unknown", VAR_17);
   VAR_16->std = VAR_17 = 0x0009;
   FUNC_10(VAR_15, 0x20, VAR_17);
  }


  switch (VAR_17) {
  case 0x0008:
  case 0x000a:
  case 0x000b:
   if (VAR_17 == 0x000a)
    VAR_16->mode = VAR_4;
   else
    VAR_16->mode = VAR_3;

   VAR_16->nicam_on = 1;
   VAR_16->watch_stereo = 1;
   break;
  case 0x0009:
   VAR_16->mode = VAR_0;
   VAR_16->nicam_on = 1;
   VAR_16->watch_stereo = 1;
   break;
  case 0x0020:

   VAR_16->mode = VAR_1;
   break;
  case 0x0040:
   VAR_16->mode = VAR_5;
   VAR_16->rxsubchans = VAR_10;


   FUNC_5(VAR_15, VAR_5);
   FUNC_4(VAR_15, FUNC_0(10.7),
         FUNC_0(10.7));
   break;
  case 0x0002:
  case 0x0003:
  case 0x0004:
  case 0x0005:
   VAR_16->mode = VAR_6;
   VAR_16->watch_stereo = 1;
   break;
  }


  FUNC_11(VAR_15, 0x0d, 0x1900);
  FUNC_11(VAR_15, 0x0e, 0x3000);
  if (VAR_16->has_nicam)
   FUNC_11(VAR_15, 0x10, 0x5a00);

  if (VAR_16->has_i2s_conf)
   FUNC_10(VAR_15, 0x40, VAR_16->i2s_mode);


  FUNC_3(VAR_15);
  VAR_16->scan_in_progress = 0;
  FUNC_9(VAR_16);



  VAR_20 = 3;
  while (VAR_16->watch_stereo) {
   if (FUNC_7(VAR_16, VAR_20 ? 1000 : 5000))
    goto restart;
   if (VAR_20)
    VAR_20--;
   FUNC_15(VAR_15);
  }
 }
 FUNC_14(1, VAR_12, VAR_15, "thread: exit\n");
 return 0;
}
