
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int action_group; } ;
typedef TYPE_1__ YuiWindow ;
typedef int GtkWidget ;
typedef int GtkAction ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,int ,TYPE_1__*) ;
 int FUNC_5 (int *,char*,int ,TYPE_1__*) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int ,char*) ;
 int * FUNC_9 (char*) ;
 int FUNC_10 (int ,int *) ;
 int * FUNC_11 (char*,int *) ;
 int * FUNC_12 () ;
 int * FUNC_13 (char*) ;
 int FUNC_14 (int ,int *) ;
 int * FUNC_15 () ;
 int * FUNC_16 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

GtkWidget* FUNC_17(YuiWindow * VAR_16) {
  GtkWidget *VAR_17;
  GtkWidget *VAR_18;
  GtkWidget *VAR_19;
  GtkWidget *VAR_20;
  GtkWidget *VAR_21;
  GtkWidget *VAR_22;
  GtkWidget *VAR_23;
  GtkWidget *VAR_24;
  GtkWidget *VAR_25;
  GtkWidget *VAR_26;
  GtkWidget *VAR_27;
  GtkWidget *VAR_28;
  GtkWidget *VAR_29;
  GtkWidget *VAR_30;
  GtkWidget *VAR_31;
  GtkWidget *VAR_32;
  GtkWidget *VAR_33;
  GtkWidget *VAR_34;
  GtkWidget *VAR_35;
  GtkWidget *VAR_36;
  GtkWidget *VAR_37;
  GtkWidget *VAR_38;
  GtkWidget *VAR_39;
  GtkWidget *VAR_40;
  GtkWidget *VAR_41;
  GtkWidget *VAR_42;

  VAR_17 = FUNC_12 ();

  VAR_18 = FUNC_13 ("_Yabause");
  FUNC_10 (FUNC_0 (VAR_17), VAR_18);

  VAR_19 = FUNC_15 ();
  FUNC_14 (FUNC_1 (VAR_18), VAR_19);

  VAR_20 = FUNC_11("gtk-preferences", ((void*)0));
  FUNC_4(VAR_20, "activate", VAR_4, 0);
  FUNC_10 (FUNC_0 (VAR_19), VAR_20);

  FUNC_10(FUNC_0(VAR_19), FUNC_7(FUNC_8(VAR_16->action_group, "run")));
  FUNC_10(FUNC_0(VAR_19), FUNC_7(FUNC_8(VAR_16->action_group, "pause")));
  FUNC_10(FUNC_0(VAR_19), FUNC_7(FUNC_8(VAR_16->action_group, "reset")));

  VAR_40 = FUNC_13 (FUNC_3("Transfer"));
  FUNC_10 (FUNC_0 (VAR_19), VAR_40);
  FUNC_5(VAR_40, "activate", FUNC_2(VAR_12), VAR_16);

  VAR_42 = FUNC_13 (FUNC_3("Screenshot"));
  FUNC_10 (FUNC_0 (VAR_19), VAR_42);
  FUNC_5(VAR_42, "activate", FUNC_2(VAR_8), VAR_16);

  VAR_24 = FUNC_9 (FUNC_3("Frame Skip/Limiter"));
  {
    GtkAction * VAR_43 = FUNC_8(VAR_16->action_group, "frameskip");
    FUNC_6(VAR_43, VAR_24);
  }
  FUNC_10 (FUNC_0 (VAR_19), VAR_24);

  {
    GtkWidget * VAR_44;
    GtkWidget * VAR_45;
    GtkWidget * VAR_46;
    GtkWidget * VAR_47;

    VAR_45 = FUNC_13(FUNC_3("Save State"));
    FUNC_10(FUNC_0(VAR_19), VAR_45);

    VAR_44 = FUNC_15();
    FUNC_14(FUNC_1(VAR_45), VAR_44);

    VAR_46 = FUNC_13(FUNC_3("Save"));
    FUNC_10(FUNC_0(VAR_44), VAR_46);
    FUNC_5(VAR_46, "activate", FUNC_2(VAR_2), ((void*)0));

    VAR_47 = FUNC_13(FUNC_3("Load"));
    FUNC_10(FUNC_0(VAR_44), VAR_47);
    FUNC_5(VAR_47, "activate", FUNC_2(VAR_1), ((void*)0));
  }

  FUNC_10 (FUNC_0 (VAR_19), FUNC_16 ());

  FUNC_10(FUNC_0(VAR_19), FUNC_7(FUNC_8(VAR_16->action_group, "quit")));

  VAR_21 = FUNC_13 (FUNC_3("_View"));
  FUNC_10 (FUNC_0 (VAR_17), VAR_21);

  VAR_22 = FUNC_15 ();
  FUNC_14 (FUNC_1 (VAR_21), VAR_22);

  VAR_23 = FUNC_9 (FUNC_3("FPS"));
  FUNC_4(VAR_23, "activate", FUNC_2(VAR_0), ((void*)0));
  FUNC_10 (FUNC_0 (VAR_22), VAR_23);

  VAR_25 = FUNC_13 (FUNC_3("Layer"));
  FUNC_10 (FUNC_0 (VAR_22), VAR_25);

  VAR_26 = FUNC_15 ();
  FUNC_14 (FUNC_1 (VAR_25), VAR_26);

  FUNC_10(FUNC_0(VAR_26), FUNC_7(FUNC_8(VAR_16->action_group, "toggle_vdp1")));
  FUNC_10(FUNC_0(VAR_26), FUNC_7(FUNC_8(VAR_16->action_group, "toggle_nbg0")));
  FUNC_10(FUNC_0(VAR_26), FUNC_7(FUNC_8(VAR_16->action_group, "toggle_nbg1")));
  FUNC_10(FUNC_0(VAR_26), FUNC_7(FUNC_8(VAR_16->action_group, "toggle_nbg2")));
  FUNC_10(FUNC_0(VAR_26), FUNC_7(FUNC_8(VAR_16->action_group, "toggle_nbg3")));
  FUNC_10(FUNC_0(VAR_26), FUNC_7(FUNC_8(VAR_16->action_group, "toggle_rbg0")));

  FUNC_10(FUNC_0(VAR_22), FUNC_7(FUNC_8(VAR_16->action_group, "fullscreen")));

  VAR_27 = FUNC_13 (FUNC_3("Log"));
  FUNC_5(VAR_27, "activate", FUNC_2(VAR_15), VAR_16);
  FUNC_10(FUNC_0(VAR_22), VAR_27);

  VAR_28 = FUNC_13 (FUNC_3("_Debug"));
  FUNC_10 (FUNC_0 (VAR_17), VAR_28);

  VAR_29 = FUNC_15 ();
  FUNC_14 (FUNC_1 (VAR_28), VAR_29);

  VAR_30 = FUNC_13 ("MSH2");
  FUNC_10 (FUNC_0 (VAR_29), VAR_30);
  FUNC_5(VAR_30, "activate", FUNC_2(VAR_7), VAR_16);

  VAR_31 = FUNC_13 ("SSH2");
  FUNC_10 (FUNC_0 (VAR_29), VAR_31);
  FUNC_5(VAR_31, "activate", FUNC_2(VAR_11), VAR_16);

  VAR_32 = FUNC_13 ("Vdp1");
  FUNC_10 (FUNC_0 (VAR_29), VAR_32);
  FUNC_5(VAR_32, "activate", FUNC_2(VAR_13), VAR_16);

  VAR_33 = FUNC_13 ("Vdp2");
  FUNC_10 (FUNC_0 (VAR_29), VAR_33);
  FUNC_5(VAR_33, "activate", FUNC_2(VAR_14), VAR_16);

  VAR_34 = FUNC_13 ("M68K");
  FUNC_10 (FUNC_0 (VAR_29), VAR_34);
  FUNC_5(VAR_34, "activate", FUNC_2(VAR_5), VAR_16);

  VAR_35 = FUNC_13 ("SCU-DSP");
  FUNC_10 (FUNC_0 (VAR_29), VAR_35);
  FUNC_5(VAR_35, "activate", FUNC_2(VAR_10), VAR_16);

  VAR_36 = FUNC_13 ("SCSP");
  FUNC_10 (FUNC_0 (VAR_29), VAR_36);
  FUNC_5(VAR_36, "activate", FUNC_2(VAR_9), VAR_16);

  FUNC_10 (FUNC_0 (VAR_29), FUNC_16 ());

  VAR_41 = FUNC_13 (FUNC_3("Memory dump"));
  FUNC_10 (FUNC_0 (VAR_29), VAR_41);
  FUNC_5(VAR_41, "activate", FUNC_2(VAR_6), VAR_16);

  VAR_37 = FUNC_13 (FUNC_3("_Help"));
  FUNC_10 (FUNC_0 (VAR_17), VAR_37);

  VAR_38 = FUNC_15 ();
  FUNC_14 (FUNC_1 (VAR_37), VAR_38);

  VAR_39 = FUNC_11 ("gtk-about", ((void*)0));
  FUNC_10 (FUNC_0 (VAR_38), VAR_39);
  FUNC_4(VAR_39, "activate", FUNC_2(VAR_3), VAR_16);

  return VAR_17;
}
