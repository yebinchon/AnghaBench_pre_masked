
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_27__ {int * texture; scalar_t__ cursor; int image; int buffer; int store; struct TYPE_27__* toolbar; } ;
typedef TYPE_1__ YuiVdp1 ;
typedef TYPE_1__ GtkWidget ;
typedef int GtkTreeViewColumn ;
typedef int GtkCellRenderer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;
 TYPE_1__* FUNC_11 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (int *,char*,int ,int *) ;
 int FUNC_13 (TYPE_1__*,char*,int ,TYPE_1__*) ;
 int FUNC_14 (int ,TYPE_1__*,int ,int ,int) ;
 int * FUNC_15 () ;
 int * FUNC_16 () ;
 int FUNC_17 (int ,TYPE_1__*) ;
 int FUNC_18 (int ,int ) ;
 TYPE_1__* FUNC_19 () ;
 int FUNC_20 (int,int ,int ) ;
 int FUNC_21 (int ,TYPE_1__*,int ,int ) ;
 int FUNC_22 (int ,TYPE_1__*,int ,int ) ;
 int FUNC_23 (int ,int) ;
 int FUNC_24 (int ,int ) ;
 TYPE_1__* FUNC_25 (int *,int *) ;
 int FUNC_26 (int ,int ,int ) ;
 int FUNC_27 (int ) ;
 TYPE_1__* FUNC_28 () ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (int ,int ) ;
 TYPE_1__* FUNC_31 () ;
 int FUNC_32 (int ,int ) ;
 int FUNC_33 (int ,int *) ;
 int * FUNC_34 (char*,int *,char*,int,int *) ;
 TYPE_1__* FUNC_35 (int ) ;
 int FUNC_36 (int ,int ) ;
 TYPE_1__* FUNC_37 (int ,int ) ;
 TYPE_1__* FUNC_38 () ;
 int FUNC_39 (int ,int,int) ;
 int FUNC_40 (int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_41 () ;

__attribute__((used)) static void FUNC_42 (YuiVdp1 * VAR_8) {
 GtkWidget * VAR_9, * VAR_10, * VAR_11, * VAR_12;

 FUNC_40(FUNC_9(VAR_8), "VDP1");

 VAR_10 = FUNC_37(VAR_0, 0);
 FUNC_18(FUNC_1(VAR_10), 0);
 FUNC_17(FUNC_1(VAR_8), VAR_10);

 VAR_8->toolbar = FUNC_31();

 FUNC_32(FUNC_6(VAR_8->toolbar), VAR_3);

 FUNC_14(FUNC_0(VAR_10), VAR_8->toolbar, VAR_0, VAR_0, 0);

 VAR_9 = FUNC_19();
 FUNC_14(FUNC_0(VAR_10), VAR_9, VAR_5, VAR_5, 4);

 VAR_8->store = FUNC_20(2, VAR_4, VAR_1);
 VAR_12 = FUNC_35(FUNC_7 (VAR_8->store));
 FUNC_36(FUNC_8(VAR_12), VAR_0);
 {
  GtkWidget * VAR_13;
  GtkCellRenderer *VAR_14;
  GtkCellRenderer *VAR_15;
  GtkTreeViewColumn *VAR_16;

  VAR_13 = FUNC_25(((void*)0), ((void*)0));
  FUNC_26(FUNC_3(VAR_13), VAR_2, VAR_2);

  VAR_14 = FUNC_16();
  VAR_16 = FUNC_34("Command", VAR_14, "text", 0, ((void*)0));
  FUNC_33(FUNC_8 (VAR_12), VAR_16);

  VAR_15 = FUNC_15();
  FUNC_12(VAR_15, "xalign", 0, ((void*)0));
  VAR_16 = FUNC_34("Icon", VAR_15, "pixbuf", 1, ((void*)0));
  FUNC_33(FUNC_8 (VAR_12), VAR_16);

  FUNC_17(FUNC_1(VAR_13), VAR_12);
  FUNC_21(FUNC_2(VAR_9), VAR_13, VAR_0, VAR_5);
 }
 FUNC_13(VAR_12, "cursor-changed", FUNC_10(VAR_7), VAR_8);

 FUNC_13(FUNC_11(VAR_8), "delete-event", FUNC_4(VAR_6), ((void*)0));

 VAR_11 = FUNC_38();
 FUNC_22(FUNC_2(VAR_9), VAR_11, VAR_5, VAR_5);
 {
  GtkWidget * VAR_17 = FUNC_25(((void*)0), ((void*)0));
  GtkWidget * VAR_18 = FUNC_28();
  FUNC_26(FUNC_3(VAR_17), VAR_2, VAR_2);
  FUNC_30(FUNC_5(VAR_18), VAR_0);
  FUNC_29(FUNC_5(VAR_18), VAR_0);
  VAR_8->buffer = FUNC_27 (FUNC_5 (VAR_18));
  FUNC_17(FUNC_1(VAR_17), VAR_18);
  FUNC_21(FUNC_2(VAR_11), VAR_17, VAR_0, VAR_5);
 }
 VAR_8->image = FUNC_41();
 {
  GtkWidget * VAR_19 = FUNC_25(((void*)0), ((void*)0));
  FUNC_26(FUNC_3(VAR_19), VAR_2, VAR_2);
  FUNC_24(FUNC_3(VAR_19), VAR_8->image);
  FUNC_22(FUNC_2(VAR_11), VAR_19, VAR_5, VAR_5);
 }

 VAR_8->cursor = 0;
 VAR_8->texture = ((void*)0);

 FUNC_39(FUNC_9(VAR_8), 500, 450);

 FUNC_23(FUNC_2(VAR_9), 250);

 FUNC_23(FUNC_2(VAR_11), 200);
}
