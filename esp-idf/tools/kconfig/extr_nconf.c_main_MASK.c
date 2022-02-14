
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (char*) ;
 int * VAR_14 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int * VAR_15 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 char* FUNC_15 (char*) ;
 int FUNC_16 (int ,int,int) ;
 int VAR_18 ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 () ;
 int FUNC_19 (int ,int ) ;
 int VAR_19 ;
 char* VAR_20 ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 () ;
 int FUNC_24 (int ,scalar_t__) ;
 int FUNC_25 (char*) ;
 int FUNC_26 () ;
 int VAR_21 ;
 int FUNC_27 () ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int) ;
 int FUNC_30 (int ,int ) ;
 int FUNC_31 (int ,int ) ;
 int FUNC_32 (int ,int ) ;
 int FUNC_33 (int ,char*) ;
 int FUNC_34 (int ,char*) ;
 int FUNC_35 () ;
 int FUNC_36 (int ,int ,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_37 (char*,char*) ;
 scalar_t__ FUNC_38 (char*,char*) ;
 int FUNC_39 (int ) ;
 int FUNC_40 (int ) ;

int FUNC_41(int VAR_24, char **VAR_25)
{
 int VAR_26, VAR_27;
 char *VAR_28;

 FUNC_34(VAR_2, "");
 FUNC_2(VAR_12, VAR_3);
 FUNC_39(VAR_12);

 if (VAR_24 > 1 && FUNC_38(VAR_25[1], "-s") == 0) {

  FUNC_9(((void*)0));
  VAR_25++;
 }
 FUNC_7(VAR_25[1]);
 FUNC_8(((void*)0));

 VAR_28 = FUNC_15("NCONFIG_MODE");
 if (VAR_28) {
  if (!FUNC_37(VAR_28, "single_menu"))
   VAR_22 = 1;
 }


 FUNC_18();

 FUNC_27();

 FUNC_3();
 FUNC_23();
 FUNC_19(VAR_23, VAR_13);
 FUNC_10(0);

 FUNC_16(VAR_23, VAR_26, VAR_27);
 if (VAR_27 < 75 || VAR_26 < 20) {
  FUNC_13();
  FUNC_25("Your terminal should have at "
   "least 20 lines and 75 columns\n");
  return 1;
 }

 FUNC_24(VAR_23, VAR_1);



 VAR_0 = 1;



 VAR_16 = FUNC_22(VAR_17);
 FUNC_20(VAR_16, VAR_10);
 FUNC_21(VAR_16, VAR_11);
 FUNC_21(VAR_16, VAR_9);
 FUNC_21(VAR_16, VAR_8);
 FUNC_21(VAR_16, VAR_7);
 FUNC_33(VAR_16, " ");
 FUNC_31(VAR_16, VAR_14[VAR_5]);
 FUNC_30(VAR_16, VAR_14[VAR_4]);
 FUNC_32(VAR_16, VAR_14[VAR_6]);

 FUNC_28(FUNC_6());
 FUNC_35();


 if (FUNC_17(FUNC_0(1)) == VAR_1) {
  FUNC_36(VAR_19,
    FUNC_1("Instructions"),
    FUNC_1(VAR_20));
 }

 FUNC_9(VAR_15);

 while (!VAR_18) {
  FUNC_5(&VAR_21);
  if (!VAR_18 && FUNC_12() == 0)
   break;
 }

 FUNC_40(VAR_16);
 FUNC_14(VAR_16);
 FUNC_11(VAR_19);
 FUNC_4();
 FUNC_26();
 FUNC_13();
 return 0;
}
