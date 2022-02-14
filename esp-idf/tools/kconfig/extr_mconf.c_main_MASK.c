
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int * VAR_5 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int *) ;
 int VAR_6 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 int VAR_7 ;
 int FUNC_13 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 (char*,char*) ;
 scalar_t__ FUNC_15 (char*,char*) ;
 int FUNC_16 (int ) ;

int FUNC_17(int VAR_11, char **VAR_12)
{
 char *VAR_13;
 int VAR_14;

 FUNC_12(VAR_1, "");
 FUNC_1(VAR_3, VAR_2);
 FUNC_16(VAR_3);

 FUNC_13(VAR_4, VAR_7);

 if (VAR_11 > 1 && FUNC_15(VAR_12[1], "-s") == 0) {
  VAR_8 = 1;

  FUNC_6(((void*)0));
  VAR_12++;
 }
 FUNC_4(VAR_12[1]);
 FUNC_5(((void*)0));

 VAR_13 = FUNC_8("MENUCONFIG_MODE");
 if (VAR_13) {
  if (!FUNC_14(VAR_13, "single_menu"))
   VAR_9 = 1;
 }

 if (FUNC_10(((void*)0))) {
  FUNC_7(VAR_10, "%s", FUNC_0("Your display is too small to run Menuconfig!\n"));
  FUNC_7(VAR_10, "%s", FUNC_0("It must be at least 19 lines by 80 columns.\n"));
  return 1;
 }

 FUNC_11(FUNC_3());
 FUNC_6(VAR_5);
 do {
  FUNC_2(&VAR_6, ((void*)0));
  VAR_14 = FUNC_9();
 } while (VAR_14 == VAR_0);

 return VAR_14;
}
