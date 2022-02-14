
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef char gchar ;
typedef scalar_t__ gboolean ;
struct TYPE_12__ {scalar_t__ state; int * area; int clean_handler; int * menu; int * box; int log; struct TYPE_12__* logpopup; int action_group; } ;
typedef TYPE_1__ YuiWindow ;
typedef int GtkWidget ;
typedef int GtkAccelGroup ;
typedef int GList ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int * FUNC_6 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int * FUNC_7 (TYPE_1__*) ;
 char* FUNC_8 (char const* const,char*,char*,int *) ;
 scalar_t__ FUNC_9 (char*,int ) ;
 char** FUNC_10 () ;
 int FUNC_11 (int *,int ,int *) ;
 int FUNC_12 (int *,char*,int ,TYPE_1__*) ;
 int FUNC_13 (char*,int *) ;
 int * FUNC_14 () ;
 int FUNC_15 (int ,char*) ;
 int * FUNC_16 (int ) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int ,scalar_t__) ;
 int FUNC_19 (int ,int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_20 (int ,int *) ;
 int FUNC_21 (int ,int ) ;
 int * FUNC_22 (int *,int *) ;
 int FUNC_23 (int ,int ,int ) ;
 int FUNC_24 () ;
 int * FUNC_25 (scalar_t__,int ) ;
 int FUNC_26 (TYPE_1__*,int,int) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int ,int *) ;
 TYPE_1__* FUNC_30 (int ) ;
 int FUNC_31 (int ,int ) ;
 int FUNC_32 (int ,char*) ;
 int * FUNC_33 () ;
 int VAR_5 ;
 int FUNC_34 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_35 (YuiWindow * VAR_11) {
 GtkAccelGroup * VAR_12 = FUNC_14();
 GtkWidget * VAR_13;

 VAR_11->action_group = FUNC_17("yui");
 FUNC_34(VAR_11);
 FUNC_18(FUNC_15(VAR_11->action_group, "pause"), VAR_0);
 FUNC_18(FUNC_15(VAR_11->action_group, "reset"), VAR_0);
 {
  GList * VAR_14 = FUNC_16(VAR_11->action_group);
  FUNC_11(VAR_14, VAR_5, VAR_12);
 }
 FUNC_29(FUNC_4(VAR_11), VAR_12);

 {
  const gchar * const * VAR_15;
  gboolean VAR_16 = VAR_0;
  gchar * VAR_17;

  VAR_15 = FUNC_10();
  while (!VAR_16 && (*VAR_15 != ((void*)0))) {
   VAR_17 = FUNC_8(*VAR_15, "pixmaps", "yabause.png", ((void*)0));
   if (FUNC_9(VAR_17, VAR_3)) {
    FUNC_31(FUNC_4(VAR_11), FUNC_13(VAR_17, ((void*)0)));
    VAR_16 = VAR_4;
   }
   VAR_15++;
  }

  if (!VAR_16) {
   FUNC_31(FUNC_4(VAR_11), FUNC_13("yabause.png", ((void*)0)));
  }
 }

 FUNC_32 (FUNC_4(VAR_11), "Yabause");

 VAR_11->box = FUNC_25(VAR_0, 0);
 FUNC_20(FUNC_1(VAR_11), VAR_11->box);

 VAR_11->menu = FUNC_7(VAR_11);
 FUNC_19(FUNC_0(VAR_11->box), VAR_11->menu, VAR_0, VAR_0, 0);

 VAR_11->area = FUNC_33();
 FUNC_19(FUNC_0(VAR_11->box), VAR_11->area, VAR_4, VAR_4, 0);
 FUNC_26(FUNC_3(VAR_11->area), 320, 224);

 FUNC_12(FUNC_6(VAR_11), "delete-event", FUNC_5(VAR_6), ((void*)0));
 FUNC_12(FUNC_6(VAR_11), "key-press-event", FUNC_5(VAR_8), VAR_11);
 FUNC_12(FUNC_6(VAR_11), "key-release-event", FUNC_5(VAR_9), VAR_11);

 VAR_11->logpopup = FUNC_30(VAR_2);
 FUNC_32( FUNC_4( VAR_11->logpopup ), "Yabause Logs" );
 FUNC_26( VAR_11->logpopup, 500, 300 );
 VAR_13 = FUNC_22(((void*)0), ((void*)0));
 FUNC_23(FUNC_2(VAR_13), VAR_1, VAR_1);
 FUNC_20(FUNC_1(VAR_11->logpopup), VAR_13);
 FUNC_12(FUNC_6(VAR_11->logpopup), "delete-event", FUNC_5(VAR_10), VAR_11);

 VAR_11->log = FUNC_24();
 FUNC_21(FUNC_2(VAR_13), VAR_11->log);

 FUNC_27(VAR_11->box);
 FUNC_28(VAR_11->menu);
 FUNC_27(VAR_11->area);

 VAR_11->clean_handler = FUNC_12(VAR_11->area, "expose-event", FUNC_5(VAR_7), VAR_11);
 VAR_11->state = 0;
}
