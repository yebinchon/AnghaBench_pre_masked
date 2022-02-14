
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int * pixbuf; } ;
typedef TYPE_1__ YuiViewer ;
typedef TYPE_1__ GtkWidget ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,int ,int *) ;
 int FUNC_4 (TYPE_1__*,char*,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int ,int *) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_10 (YuiViewer * VAR_6) {
 GtkWidget * VAR_7;
 GtkWidget * VAR_8;

 FUNC_8(FUNC_1(VAR_6), VAR_0 | VAR_1);

 VAR_7 = FUNC_6();
 VAR_8 = FUNC_5(VAR_2, ((void*)0));

 FUNC_7(FUNC_0(VAR_7), VAR_8);

 FUNC_9(VAR_7);

 FUNC_4(VAR_6, "button-press-event", FUNC_2(VAR_3), VAR_7);
 FUNC_3(VAR_6, "expose-event", FUNC_2(VAR_4), ((void*)0));
 FUNC_4(VAR_8, "activate", FUNC_2(VAR_5), VAR_6);

 VAR_6->pixbuf = ((void*)0);
}
