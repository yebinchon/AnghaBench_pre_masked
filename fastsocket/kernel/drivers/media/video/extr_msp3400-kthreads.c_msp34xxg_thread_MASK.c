
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_state {scalar_t__ mode; int std; int acb; int watch_stereo; scalar_t__ force_btsc; scalar_t__ radio; scalar_t__ scan_in_progress; scalar_t__ restart; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct i2c_client*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct i2c_client*) ;
 int VAR_1 ;
 int FUNC_3 (struct i2c_client*,int) ;
 scalar_t__ FUNC_4 (struct msp_state*,int) ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct msp_state*) ;
 int FUNC_7 (struct i2c_client*,int,int) ;
 scalar_t__ FUNC_8 (struct i2c_client*,int,int) ;
 int FUNC_9 () ;
 struct msp_state* FUNC_10 (int ) ;
 int FUNC_11 (int,int ,struct i2c_client*,char*,...) ;
 int FUNC_12 (struct i2c_client*) ;

int FUNC_13(void *VAR_3)
{
 struct i2c_client *VAR_4 = VAR_3;
 struct msp_state *VAR_5 = FUNC_10(FUNC_0(VAR_4));
 int VAR_6, VAR_7;

 FUNC_11(1, VAR_1, VAR_4, "msp34xxg daemon started\n");
 FUNC_9();
 for (;;) {
  FUNC_11(2, VAR_1, VAR_4, "msp34xxg thread: sleep\n");
  FUNC_4(VAR_5, -1);
  FUNC_11(2, VAR_1, VAR_4, "msp34xxg thread: wakeup\n");

restart:
  FUNC_11(1, VAR_1, VAR_4, "thread: restart scan\n");
  VAR_5->restart = 0;
  if (FUNC_1())
   break;

  if (VAR_5->mode == VAR_0) {

   FUNC_11(1, VAR_1, VAR_4,
    "thread: no carrier scan\n");
   VAR_5->scan_in_progress = 0;
   FUNC_6(VAR_5);
   continue;
  }


  FUNC_2(VAR_4);
  VAR_5->std = VAR_5->radio ? 0x40 :
   (VAR_5->force_btsc && VAR_2 == 1) ? 32 : VAR_2;
  FUNC_7(VAR_4, 0x20, VAR_5->std);

  if (VAR_5->std != 1)
   goto unmute;


  FUNC_11(1, VAR_1, VAR_4,
   "started autodetect, waiting for result\n");
  for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {
   if (FUNC_4(VAR_5, 100))
    goto restart;


   VAR_6 = FUNC_3(VAR_4, 0x7e);
   if (VAR_6 < 0x07ff) {
    VAR_5->std = VAR_6;
    break;
   }
   FUNC_11(2, VAR_1, VAR_4,
    "detection still in progress\n");
  }
  if (VAR_5->std == 1) {
   FUNC_11(1, VAR_1, VAR_4,
    "detection still in progress after 10 tries. giving up.\n");
   continue;
  }

unmute:
  FUNC_11(1, VAR_1, VAR_4,
   "detected standard: %s (0x%04x)\n",
   FUNC_5(VAR_5->std), VAR_5->std);

  if (VAR_5->std == 9) {

   FUNC_8(VAR_4, 0x0e, 0x7c00);
  }


  FUNC_6(VAR_5);


  if (FUNC_8(VAR_4, 0x13, VAR_5->acb))
   return -1;



  if (VAR_5->std != 0x20)
   continue;

  VAR_5->watch_stereo = 1;



  FUNC_12(VAR_4);
  while (VAR_5->watch_stereo) {
   FUNC_12(VAR_4);
   if (FUNC_4(VAR_5, 5000))
    goto restart;
  }
 }
 FUNC_11(1, VAR_1, VAR_4, "thread: exit\n");
 return 0;
}
