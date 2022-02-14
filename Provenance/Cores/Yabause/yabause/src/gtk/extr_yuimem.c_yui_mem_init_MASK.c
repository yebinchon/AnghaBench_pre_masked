
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_1__ ;


typedef size_t gint ;
struct TYPE_35__ {int wLine; scalar_t__ address; int store; struct TYPE_35__* quickCombo; struct TYPE_35__* toolbar; } ;
typedef TYPE_1__ YuiMem ;
struct TYPE_36__ {scalar_t__ name; } ;
typedef TYPE_1__ GtkWidget ;
typedef int GtkTreeViewColumn ;
typedef TYPE_1__ GtkToolItem ;
typedef TYPE_1__ GtkCellRenderer ;
typedef int GtkAccelGroup ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;
 TYPE_1__* FUNC_11 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (int ,TYPE_1__*,int *) ;
 int FUNC_13 (TYPE_1__*,char*,int ,char*,int ,int *) ;
 int FUNC_14 (TYPE_1__*,char*,int ,TYPE_1__*) ;
 int FUNC_15 (int *,int ,int ,int ,int ) ;
 int * FUNC_16 () ;
 TYPE_1__* FUNC_17 (int ) ;
 int FUNC_18 (int ,TYPE_1__*,int ,int ,int ) ;
 TYPE_1__* FUNC_19 () ;
 TYPE_1__* FUNC_20 () ;
 int FUNC_21 (int ,size_t,scalar_t__) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,TYPE_1__*) ;
 int FUNC_24 (int ,int) ;
 int FUNC_25 (int,int ,int ) ;
 TYPE_1__* FUNC_26 () ;
 TYPE_1__* FUNC_27 (int ) ;
 TYPE_1__* FUNC_28 () ;
 int FUNC_29 (TYPE_1__*,int ) ;
 int FUNC_30 (int ,TYPE_1__*,int) ;
 TYPE_1__* FUNC_31 () ;
 int FUNC_32 (int ,int ) ;
 int FUNC_33 (int ,int *) ;
 int * FUNC_34 (char*,TYPE_1__*,char*,int,int *) ;
 TYPE_1__* FUNC_35 (int ) ;
 TYPE_1__* FUNC_36 (int ,int ) ;
 int FUNC_37 (int ,int *) ;
 int FUNC_38 (int ,int,int) ;
 int FUNC_39 (int ,char*) ;
 TYPE_6__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void FUNC_40 (YuiMem * VAR_18) {
 GtkWidget * VAR_19;
 GtkCellRenderer * VAR_20;
 GtkTreeViewColumn * VAR_21;
 GtkAccelGroup *VAR_22;
 GtkToolItem * VAR_23, * VAR_24, * VAR_25;
 GtkWidget * VAR_26, * VAR_27;
 gint VAR_28;

 FUNC_39(FUNC_9(VAR_18), "Memory dump");

 VAR_27 = FUNC_36(VAR_0, 0);
 FUNC_23(FUNC_3(VAR_18), VAR_27);

 VAR_18->toolbar = FUNC_31();
 FUNC_32(FUNC_6(VAR_18->toolbar), VAR_6);
 FUNC_18(FUNC_1(VAR_27), VAR_18->toolbar, VAR_0, VAR_0, 0);

 FUNC_30(FUNC_6(VAR_18->toolbar), FUNC_26(), 0);

 VAR_23 = FUNC_28();
 FUNC_29(VAR_23, VAR_0);
 FUNC_30(FUNC_6(VAR_18->toolbar), VAR_23, 1);

 VAR_25 = FUNC_27(VAR_4);
 FUNC_14(VAR_25, "clicked", FUNC_10(VAR_14), VAR_18);
 FUNC_30(FUNC_6(VAR_18->toolbar), VAR_25, 2);

 VAR_24 = FUNC_27(VAR_5);
 FUNC_14(VAR_24, "clicked", FUNC_10(VAR_16), VAR_18);
 FUNC_30(FUNC_6(VAR_18->toolbar), VAR_24, 3);

 VAR_18->quickCombo = FUNC_20();

 FUNC_24(FUNC_4(FUNC_17(FUNC_0(VAR_18->quickCombo))), 8);

 for ( VAR_28 = 0 ; VAR_9[VAR_28].name ; VAR_28++ )
   FUNC_21( FUNC_2( VAR_18->quickCombo ), VAR_28, VAR_9[VAR_28].name );
 FUNC_22( FUNC_2(VAR_18->quickCombo), 0 );
 FUNC_14(VAR_18->quickCombo, "changed", FUNC_10(VAR_11), VAR_18 );
 FUNC_14(FUNC_17(FUNC_0(VAR_18->quickCombo)), "activate", FUNC_10(VAR_10), VAR_18 );

 VAR_26 = FUNC_36(VAR_0, 0);
 FUNC_18(FUNC_1(VAR_26), VAR_18->quickCombo, VAR_8, VAR_0, 0);
 FUNC_23(FUNC_3(VAR_23), VAR_26);

 VAR_18->store = FUNC_25(2, VAR_7, VAR_7);
 VAR_19 = FUNC_35(FUNC_7 (VAR_18->store));

 VAR_20 = FUNC_19();
 VAR_21 = FUNC_34("Address", VAR_20, "text", 0, ((void*)0));
 FUNC_33(FUNC_8 (VAR_19), VAR_21);
 VAR_20 = FUNC_19();
 VAR_21 = FUNC_34("Dump", VAR_20, "text", 1, ((void*)0));
 FUNC_33(FUNC_8 (VAR_19), VAR_21);
 FUNC_13(FUNC_11(VAR_20), "editable", VAR_8, "mode", VAR_3, ((void*)0) );
 FUNC_14(FUNC_11(VAR_20), "edited", FUNC_5(VAR_12), VAR_18 );
 FUNC_18(FUNC_1(VAR_27), VAR_19, VAR_8, VAR_8, 0);

 FUNC_14(FUNC_11(VAR_18), "delete-event", FUNC_5(VAR_13), ((void*)0));

 VAR_22 = FUNC_16 ();
 FUNC_15( VAR_22, VAR_2, 0, 0,
     FUNC_12 (FUNC_10(VAR_17), VAR_18, ((void*)0)) );
 FUNC_15( VAR_22, VAR_1, 0, 0,
     FUNC_12 (FUNC_10(VAR_15), VAR_18, ((void*)0)) );
 FUNC_37( FUNC_9( VAR_18 ), VAR_22 );

 VAR_18->address = 0;
 VAR_18->wLine = 8;

 FUNC_38(FUNC_9(VAR_18), 300, -1);
}
