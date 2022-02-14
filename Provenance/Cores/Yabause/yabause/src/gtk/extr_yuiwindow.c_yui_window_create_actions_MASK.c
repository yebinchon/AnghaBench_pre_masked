
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int action_group; } ;
typedef TYPE_1__ YuiWindow ;
typedef int GtkToggleAction ;
typedef int GtkAction ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,int ,TYPE_1__*) ;
 int FUNC_4 (int *,char*,int ,TYPE_1__*) ;
 int FUNC_5 (int ,int *,char*) ;
 int * FUNC_6 (char*,int *,int *,char*) ;
 int VAR_7 ;
 int * FUNC_7 (char*,int *,int *,char*) ;
 int FUNC_8 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_9(YuiWindow * VAR_13) {
 GtkAction * VAR_14;
 GtkToggleAction * VAR_15;

 VAR_14 = FUNC_6("run", FUNC_2("Run"), FUNC_2("start emulation"), "gtk-media-play");
 FUNC_5(VAR_13->action_group, VAR_14, "<Ctrl>r");
 FUNC_4(VAR_14, "activate", FUNC_1(VAR_10), VAR_13);

 VAR_14 = FUNC_6("pause", FUNC_2("Pause"), FUNC_2("pause emulation"), "gtk-media-pause");
 FUNC_5(VAR_13->action_group, VAR_14, "<Ctrl>p");
 FUNC_4(VAR_14, "activate", FUNC_1(VAR_8), VAR_13);

 VAR_14 = FUNC_6("reset", FUNC_2("Reset"), FUNC_2("reset emulation"), ((void*)0));
 FUNC_5(VAR_13->action_group, VAR_14, ((void*)0));
 FUNC_4(VAR_14, "activate", FUNC_1(VAR_9), VAR_13);

 VAR_15 = FUNC_7("fullscreen", FUNC_2("Fullscreen"), ((void*)0), "gtk-fullscreen");
 FUNC_5(VAR_13->action_group, FUNC_0(VAR_15), "<Ctrl>f");
 FUNC_3(VAR_15, "activate", FUNC_1(VAR_12), VAR_13);

 VAR_15 = FUNC_7("frameskip", FUNC_2("Frame Skip/Limiter"), ((void*)0), ((void*)0));
 FUNC_5(VAR_13->action_group, FUNC_0(VAR_15), ((void*)0));
 FUNC_3(VAR_15, "activate", FUNC_1(VAR_11), VAR_13);

 VAR_14 = FUNC_6("quit", FUNC_2("Quit"), ((void*)0), "gtk-quit");
 FUNC_5(VAR_13->action_group, VAR_14, "<Ctrl>q");
 FUNC_3(VAR_14, "activate", FUNC_1(VAR_7), VAR_13);

 VAR_15 = FUNC_7("toggle_vdp1", FUNC_2("VDP1"), ((void*)0), ((void*)0));
 FUNC_8(VAR_15, VAR_0);
 FUNC_5(VAR_13->action_group, FUNC_0(VAR_15), ((void*)0));
 FUNC_3(VAR_15, "activate", FUNC_1(VAR_6), ((void*)0));

 VAR_15 = FUNC_7("toggle_nbg0", FUNC_2("NBG0"), ((void*)0), ((void*)0));
 FUNC_8(VAR_15, VAR_0);
 FUNC_5(VAR_13->action_group, FUNC_0(VAR_15), ((void*)0));
 FUNC_3(VAR_15, "activate", FUNC_1(VAR_1), ((void*)0));

 VAR_15 = FUNC_7("toggle_nbg1", FUNC_2("NBG1"), ((void*)0), ((void*)0));
 FUNC_8(VAR_15, VAR_0);
 FUNC_5(VAR_13->action_group, FUNC_0(VAR_15), ((void*)0));
 FUNC_3(VAR_15, "activate", FUNC_1(VAR_2), ((void*)0));

 VAR_15 = FUNC_7("toggle_nbg2", FUNC_2("NBG2"), ((void*)0), ((void*)0));
 FUNC_8(VAR_15, VAR_0);
 FUNC_5(VAR_13->action_group, FUNC_0(VAR_15), ((void*)0));
 FUNC_3(VAR_15, "activate", FUNC_1(VAR_3), ((void*)0));

 VAR_15 = FUNC_7("toggle_nbg3", FUNC_2("NBG3"), ((void*)0), ((void*)0));
 FUNC_8(VAR_15, VAR_0);
 FUNC_5(VAR_13->action_group, FUNC_0(VAR_15), ((void*)0));
 FUNC_3(VAR_15, "activate", FUNC_1(VAR_4), ((void*)0));

 VAR_15 = FUNC_7("toggle_rbg0", FUNC_2("RBG0"), ((void*)0), ((void*)0));
 FUNC_8(VAR_15, VAR_0);
 FUNC_5(VAR_13->action_group, FUNC_0(VAR_15), ((void*)0));
 FUNC_3(VAR_15, "activate", FUNC_1(VAR_5), ((void*)0));
}
