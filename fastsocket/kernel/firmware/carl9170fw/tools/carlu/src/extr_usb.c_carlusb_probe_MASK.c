
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carlu {int stop_event_polling; int event_thread; int event_pipe; } ;


 int VAR_0 ;
 struct carlu* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct carlu*) ;
 scalar_t__ FUNC_2 (struct carlu*) ;
 int FUNC_3 (struct carlu*) ;
 int FUNC_4 (int ,struct carlu*) ;
 int FUNC_5 (struct carlu*,int) ;
 int FUNC_6 (struct carlu*) ;
 int FUNC_7 (struct carlu*) ;
 int VAR_1 ;
 int FUNC_8 (struct carlu*) ;
 int FUNC_9 (struct carlu*) ;
 int FUNC_10 (struct carlu*) ;
 int FUNC_11 (struct carlu*) ;
 struct carlu* FUNC_12 () ;
 int FUNC_13 (struct carlu*) ;
 int FUNC_14 (struct carlu*,int) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ) ;

struct carlu *FUNC_18(void)
{
 struct carlu *VAR_2;
 int VAR_3 = -VAR_0;

 VAR_2 = FUNC_12();
 if (FUNC_2(VAR_2)) {
  if (FUNC_1(VAR_2))
   VAR_3 = FUNC_3(VAR_2);
  goto err_out;
 }

 VAR_3 = FUNC_13(VAR_2);
 if (VAR_3)
  goto err_out;

 VAR_3 = FUNC_11(VAR_2);
 if (VAR_3)
  goto err_out;

 VAR_3 = FUNC_17(VAR_2->event_pipe);
 if (VAR_3)
  goto err_out;

 VAR_2->stop_event_polling = 0;
 VAR_2->event_thread = FUNC_4(VAR_1, VAR_2);

 VAR_3 = FUNC_14(VAR_2, 1);
 if (VAR_3)
  goto err_kill;

 VAR_3 = FUNC_9(VAR_2);
 if (VAR_3)
  goto err_kill;

 VAR_3 = FUNC_10(VAR_2);
 if (VAR_3)
  goto err_kill;

 VAR_3 = FUNC_5(VAR_2, 0x44110dee);
 if (VAR_3) {
  FUNC_15("echo test failed...\n");
  goto err_kill;
 }

 FUNC_16("firmware is active and running.\n");

 FUNC_6(VAR_2);

 return VAR_2;

err_kill:
 FUNC_7(VAR_2);

err_out:
 FUNC_8(VAR_2);
 FUNC_15("usb device rendezvous failed (%d).\n", VAR_3);
 return FUNC_0(VAR_3);
}
