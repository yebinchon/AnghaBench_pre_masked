
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {struct TYPE_16__* bpListRenderer; struct TYPE_16__* bpList; struct TYPE_16__* hboxmain; void* bpListColumn; void* bpListStore; struct TYPE_16__* regListRenderer2; struct TYPE_16__* regList; void* regListColumn2; void* regListColumn1; struct TYPE_16__* regListRenderer1; void* regListStore; struct TYPE_16__* uLabel; struct TYPE_16__* uFrame; struct TYPE_16__* vboxmain; struct TYPE_16__* hbox; struct TYPE_16__* vbox; } ;
typedef TYPE_1__ YuiM68k ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ,char*,int ,char*,int ,int *) ;
 int FUNC_8 (int ,char*,int ,TYPE_1__*) ;
 int FUNC_9 (int ,TYPE_1__*,int ,int ,int) ;
 void* FUNC_10 () ;
 int FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (int ,int) ;
 TYPE_1__* FUNC_13 (char*) ;
 TYPE_1__* FUNC_14 (int ,int) ;
 TYPE_1__* FUNC_15 () ;
 TYPE_1__* FUNC_16 (int *) ;
 void* FUNC_17 (int,int ,...) ;
 int FUNC_18 (int ,void*) ;
 void* FUNC_19 (char*,TYPE_1__*,char*,int,int *) ;
 void* FUNC_20 (int ) ;
 void* FUNC_21 (int ,int) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_24 (YuiM68k * VAR_7) {
  FUNC_23(FUNC_5(VAR_7), "M68K");
  FUNC_22( FUNC_5(VAR_7), VAR_0 );

  VAR_7->vbox = FUNC_21(VAR_0, 2);
  FUNC_12( FUNC_1( VAR_7->vbox ),4 );
  FUNC_11 (FUNC_1 (VAR_7), VAR_7->vbox);

  VAR_7->hboxmain = FUNC_14(VAR_0, 2);
  FUNC_12( FUNC_1( VAR_7->hboxmain ),4 );
  FUNC_9( FUNC_0( VAR_7->vbox ), VAR_7->hboxmain, VAR_0, VAR_0, 4 );

  VAR_7->hbox = FUNC_15();
  FUNC_12( FUNC_1( VAR_7->hbox ),4 );
  FUNC_9( FUNC_0( VAR_7->vbox ), VAR_7->hbox, VAR_0, VAR_0, 4 );

  VAR_7->vboxmain = FUNC_21(VAR_0, 2);
  FUNC_12( FUNC_1( VAR_7->vboxmain ),4 );
  FUNC_9( FUNC_0( VAR_7->hboxmain ), VAR_7->vboxmain, VAR_0, VAR_0, 4 );



  VAR_7->uFrame = FUNC_13("Disassembled code");
  FUNC_9( FUNC_0( VAR_7->vboxmain ), VAR_7->uFrame, VAR_0, VAR_0, 4 );

  VAR_7->uLabel = FUNC_16(((void*)0));
  FUNC_11 (FUNC_1 (VAR_7->uFrame), VAR_7->uLabel );



  VAR_7->regListStore = FUNC_17(2,VAR_2,VAR_2);
  VAR_7->regList = FUNC_20( FUNC_3(VAR_7->regListStore) );
  VAR_7->regListRenderer1 = FUNC_10();
  VAR_7->regListRenderer2 = FUNC_10();
  FUNC_7(FUNC_6(VAR_7->regListRenderer2), "editable", VAR_3, "mode", VAR_1, ((void*)0) );
  VAR_7->regListColumn1 = FUNC_19("Register", VAR_7->regListRenderer1, "text", 0, ((void*)0));
  FUNC_18(FUNC_4(VAR_7->regList), VAR_7->regListColumn1);
  VAR_7->regListColumn2 = FUNC_19("Value", VAR_7->regListRenderer2, "text", 1, ((void*)0));
  FUNC_18(FUNC_4(VAR_7->regList), VAR_7->regListColumn2);
  FUNC_9( FUNC_0( VAR_7->hboxmain ), VAR_7->regList, VAR_0, VAR_0, 4 );
  FUNC_8(FUNC_6(VAR_7->regListRenderer2), "edited", FUNC_2(VAR_6), VAR_7 );



  VAR_7->bpListStore = FUNC_17(1,VAR_2);
  VAR_7->bpList = FUNC_20( FUNC_3(VAR_7->bpListStore) );
  VAR_7->bpListRenderer = FUNC_10();
  FUNC_7(FUNC_6(VAR_7->bpListRenderer), "editable", VAR_3, "mode", VAR_1, ((void*)0) );
  VAR_7->bpListColumn = FUNC_19("Breakpoints", VAR_7->bpListRenderer, "text", 0, ((void*)0));
  FUNC_18(FUNC_4(VAR_7->bpList), VAR_7->bpListColumn);
  FUNC_9( FUNC_0( VAR_7->hboxmain ), VAR_7->bpList, VAR_0, VAR_0, 4 );
  FUNC_8(FUNC_6(VAR_7->bpListRenderer), "edited", FUNC_2(VAR_5), VAR_7 );

  FUNC_8(FUNC_6(VAR_7), "delete-event", FUNC_2(VAR_4), ((void*)0));
}
