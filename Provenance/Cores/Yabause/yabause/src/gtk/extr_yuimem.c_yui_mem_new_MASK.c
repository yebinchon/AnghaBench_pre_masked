
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int state; int action_group; } ;
typedef TYPE_1__ YuiWindow ;
struct TYPE_18__ {TYPE_1__* yui; void* running_handler; void* paused_handler; int toolbar; } ;
typedef TYPE_2__ YuiMem ;
typedef int GtkWidget ;
typedef TYPE_2__ GtkToolItem ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int (*) (TYPE_2__*)) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int ,int *) ;
 void* FUNC_6 (TYPE_1__*,char*,int ,TYPE_2__*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,char*) ;
 TYPE_2__* FUNC_9 (char*) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 () ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;

GtkWidget * FUNC_17(YuiWindow * VAR_2) {
 GtkWidget * VAR_3;
 YuiMem * VAR_4;

 VAR_3 = FUNC_2(FUNC_5(FUNC_13(), ((void*)0)));
 VAR_4 = FUNC_4(VAR_3);

 VAR_4->yui = VAR_2;

 if (!( VAR_4->yui->state & VAR_0 )) {
   FUNC_16(VAR_4->yui);
   FUNC_15(VAR_4->yui);
 }

 {
  GtkToolItem * VAR_5, * VAR_6;

  VAR_5 = FUNC_9("run");
  FUNC_7(FUNC_8(VAR_4->yui->action_group, "run"), FUNC_2(VAR_5));
  FUNC_10(FUNC_0(VAR_4->toolbar), FUNC_1(VAR_5), 0);

  VAR_6 = FUNC_9("pause");
  FUNC_7(FUNC_8(VAR_4->yui->action_group, "pause"), FUNC_2(VAR_6));
  FUNC_10(FUNC_0(VAR_4->toolbar), FUNC_1(VAR_6), 1);
 }

 VAR_4->paused_handler = FUNC_6(VAR_4->yui, "paused", FUNC_3(FUNC_14), VAR_4);
 VAR_4->running_handler = FUNC_6(VAR_4->yui, "running", FUNC_3(FUNC_12), VAR_4);

 if ((VAR_4->yui->state & (VAR_1 | VAR_0)) == VAR_0)
  FUNC_14(VAR_4);

 FUNC_11(FUNC_2(VAR_4));

 return VAR_3;
}
