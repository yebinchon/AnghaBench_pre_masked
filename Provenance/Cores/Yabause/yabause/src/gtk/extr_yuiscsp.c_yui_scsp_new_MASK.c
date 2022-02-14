
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {int state; int hbox; int action_group; } ;
typedef TYPE_1__ YuiWindow ;
typedef TYPE_1__ YuiScsp ;
typedef TYPE_1__ GtkWidget ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int (*) (TYPE_1__*)) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,int *) ;
 void* FUNC_5 (TYPE_1__*,char*,int ,TYPE_1__*) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,TYPE_1__*,int ,int ,int) ;
 TYPE_1__* FUNC_9 () ;
 TYPE_1__* FUNC_10 (char*) ;
 int FUNC_11 (TYPE_1__*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 () ;
 int FUNC_15 (TYPE_1__*) ;

GtkWidget * FUNC_16(YuiWindow * VAR_6) {
 GtkWidget * VAR_7;
 YuiScsp * VAR_8;

 VAR_5 = VAR_6;

 VAR_7 = FUNC_1(FUNC_4(FUNC_14(), ((void*)0)));
 VAR_8 = FUNC_3(VAR_7);

 {
  GtkWidget * VAR_9, * VAR_10, * VAR_11;
  VAR_9 = FUNC_9();
  FUNC_6(FUNC_7(VAR_5->action_group, "run"), VAR_9);
  FUNC_8(FUNC_0(VAR_8->hbox), VAR_9, VAR_0, VAR_0, 2);

  VAR_10 = FUNC_9();
  FUNC_6(FUNC_7(VAR_5->action_group, "pause"), VAR_10);
  FUNC_8(FUNC_0(VAR_8->hbox), VAR_10, VAR_0, VAR_0, 2);

  VAR_11 = FUNC_10("gtk-close");
  FUNC_5(VAR_11, "clicked", FUNC_2(FUNC_13), VAR_7);
  FUNC_8(FUNC_0(VAR_8->hbox), VAR_11, VAR_0, VAR_0, 2);
 }
 VAR_3 = FUNC_5(VAR_5, "paused", FUNC_2(FUNC_15), VAR_8);
 VAR_4 = FUNC_5(VAR_5, "running", FUNC_2(FUNC_12), VAR_8);

 if ((VAR_5->state & (VAR_2 | VAR_1)) == VAR_1)
  FUNC_15(VAR_8);

 FUNC_11(FUNC_1(VAR_8));

 return VAR_7;
}
