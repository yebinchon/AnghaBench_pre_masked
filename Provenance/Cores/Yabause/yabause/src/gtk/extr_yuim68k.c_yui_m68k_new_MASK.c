
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;


struct TYPE_33__ {int addr; } ;
typedef TYPE_1__ m68kcodebreakpoint_struct ;
typedef int gint ;
typedef char gchar ;
struct TYPE_34__ {int state; int* cbp; void* running_handler; void* paused_handler; int hbox; int action_group; struct TYPE_34__* buttonStep; int bpListStore; int regListStore; } ;
typedef TYPE_2__ YuiWindow ;
typedef TYPE_2__ GtkWidget ;
typedef int GtkTreeIter ;
typedef int GtkAccelGroup ;
typedef int GClosure ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int (*) (TYPE_2__*)) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_7 (TYPE_2__*) ;
 int * FUNC_8 (int ,TYPE_2__*,int *) ;
 TYPE_2__* FUNC_9 (int ,int *) ;
 int FUNC_10 (TYPE_2__*,char*,int ,TYPE_2__*) ;
 void* FUNC_11 (TYPE_2__*,char*,int ,TYPE_2__*) ;
 int FUNC_12 (int *,int ,int ,int ,int *) ;
 int * FUNC_13 () ;
 int FUNC_14 (int ,TYPE_2__*) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (int ,TYPE_2__*,int ,int ,int) ;
 TYPE_2__* FUNC_17 () ;
 TYPE_2__* FUNC_18 (char*) ;
 TYPE_2__* FUNC_19 (char*) ;
 int FUNC_20 (int ,int *) ;
 int FUNC_21 (int ,int *,int ,char*,int) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (int ,int *) ;
 int FUNC_24 (char*,char*,int) ;
 TYPE_2__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int FUNC_25 (TYPE_2__*) ;
 int FUNC_26 (TYPE_2__*) ;
 int FUNC_27 () ;
 int FUNC_28 (TYPE_2__*) ;
 int FUNC_29 (TYPE_2__*) ;
 int FUNC_30 (TYPE_2__*) ;
 int FUNC_31 (TYPE_2__*) ;

GtkWidget * FUNC_32(YuiWindow * VAR_8) {
  GtkWidget * VAR_9;
  GClosure *VAR_10;
  GtkAccelGroup *VAR_11;
  const m68kcodebreakpoint_struct *VAR_12;
  gint VAR_13;
  VAR_5 = VAR_8;

  if ( VAR_6 ) return FUNC_2(VAR_6);

  VAR_9 = FUNC_2(FUNC_9(FUNC_27(), ((void*)0)));
  VAR_6 = FUNC_7(VAR_9);

  if (!( VAR_5->state & VAR_3 )) {
    FUNC_31(VAR_5);
    FUNC_30(VAR_5);
  }

  FUNC_6(&VAR_7);

  for (VAR_13 = 0; VAR_13 < 23 ; VAR_13++) {

    GtkTreeIter VAR_14;
    FUNC_20( FUNC_1( VAR_6->regListStore ), &VAR_14 );
  }

  VAR_12 = FUNC_5();

  for (VAR_13 = 0; VAR_13 < VAR_2 ; VAR_13++) {

    GtkTreeIter VAR_15;
    VAR_6->cbp[VAR_13] = VAR_12[VAR_13].addr;
    FUNC_20( FUNC_1( VAR_6->bpListStore ), &VAR_15 );
    if (VAR_12[VAR_13].addr != 0xFFFFFFFF) {

      gchar VAR_16[20];
      FUNC_24(VAR_16, "%08X", (int)VAR_12[VAR_13].addr);
      FUNC_21( FUNC_1( VAR_6->bpListStore ), &VAR_15, 0, VAR_16, -1 );
    } else FUNC_21( FUNC_1( VAR_6->bpListStore ), &VAR_15, 0, "<empty>", -1 );
  }

  {
    GtkWidget * VAR_17, * VAR_18, * VAR_19;

    VAR_6->buttonStep = FUNC_19( "Step [F7]" );
    FUNC_16( FUNC_0( VAR_6->hbox ), VAR_6->buttonStep, VAR_0, VAR_0, 2 );
    FUNC_10( VAR_6->buttonStep, "clicked", FUNC_4(FUNC_28), VAR_6 );

    VAR_17 = FUNC_17();
    FUNC_14(FUNC_15(VAR_5->action_group, "run"), VAR_17);
    FUNC_16(FUNC_0(VAR_6->hbox), VAR_17, VAR_0, VAR_0, 2);

    VAR_18 = FUNC_17();
    FUNC_14(FUNC_15(VAR_5->action_group, "pause"), VAR_18);
    FUNC_16(FUNC_0(VAR_6->hbox), VAR_18, VAR_0, VAR_0, 2);

    VAR_19 = FUNC_18("gtk-close");
    FUNC_11(VAR_19, "clicked", FUNC_4(FUNC_26), VAR_9);
    FUNC_16(FUNC_0(VAR_6->hbox), VAR_19, VAR_0, VAR_0, 2);
  }
  VAR_6->paused_handler = FUNC_11(VAR_5, "paused", FUNC_4(FUNC_29), VAR_6);
  VAR_6->running_handler = FUNC_11(VAR_5, "running", FUNC_4(FUNC_25), VAR_6);
  VAR_11 = FUNC_13 ();
  VAR_10 = FUNC_8 (FUNC_4 (FUNC_28), VAR_6, ((void*)0));
  FUNC_12( VAR_11, VAR_1, 0, 0, VAR_10 );
  FUNC_23( FUNC_3( VAR_9 ), VAR_11 );

  FUNC_29(VAR_6);
  if ( VAR_5->state & VAR_4 ) FUNC_25(VAR_6);

  FUNC_22(FUNC_2(VAR_6));

  return VAR_9;
}
