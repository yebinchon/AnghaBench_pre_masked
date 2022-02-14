
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ cursor; struct TYPE_19__* hbox; struct TYPE_19__* vbox; int buffer; struct TYPE_19__* spin; } ;
typedef TYPE_1__ YuiScsp ;
typedef TYPE_1__ GtkWidget ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_8 (int ,char*,int ,TYPE_1__*) ;
 int FUNC_9 (int ,TYPE_1__*,int ,int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (int ,int) ;
 TYPE_1__* FUNC_13 () ;
 TYPE_1__* FUNC_14 (int *,int *) ;
 int FUNC_15 (int ,int ,int ) ;
 TYPE_1__* FUNC_16 (int ,int,int) ;
 int FUNC_17 (int ,int ,int) ;
 int FUNC_18 (int ) ;
 TYPE_1__* FUNC_19 () ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int ) ;
 TYPE_1__* FUNC_22 (int ,int) ;
 int FUNC_23 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_24 (YuiScsp * VAR_5) {
 FUNC_23(FUNC_6(VAR_5), "SCSP");

 VAR_5->vbox = FUNC_22(VAR_0, 2);
 FUNC_12(FUNC_1(VAR_5->vbox), 4);
 FUNC_11(FUNC_1(VAR_5), VAR_5->vbox);

 VAR_5->spin = FUNC_16(0, 31, 1);
 FUNC_17(FUNC_4(VAR_5->spin), 0, 31);
 FUNC_9(FUNC_0(VAR_5->vbox), VAR_5->spin, VAR_0, VAR_0, 4);
 FUNC_8(FUNC_7(VAR_5->spin), "value-changed", FUNC_3(VAR_4), VAR_5);

 FUNC_8(FUNC_7(VAR_5), "delete-event", FUNC_3(VAR_3), ((void*)0));

 {
  GtkWidget * VAR_6 = FUNC_14(((void*)0), ((void*)0));
  GtkWidget * VAR_7 = FUNC_19();
  FUNC_15(FUNC_2(VAR_6), VAR_1, VAR_1);
  FUNC_21(FUNC_5(VAR_7), VAR_0);
  FUNC_20(FUNC_5(VAR_7), VAR_0);
  VAR_5->buffer = FUNC_18 (FUNC_5 (VAR_7));
  FUNC_11(FUNC_1(VAR_6), VAR_7);
  FUNC_9(FUNC_0(VAR_5->vbox), VAR_6, VAR_2, VAR_2, 4);
 }

 VAR_5->hbox = FUNC_13();
 FUNC_10(FUNC_0(VAR_5->hbox), 4);
 FUNC_9(FUNC_0(VAR_5->vbox ), VAR_5->hbox, VAR_0, VAR_0, 4);

 VAR_5->cursor = 0;
}
