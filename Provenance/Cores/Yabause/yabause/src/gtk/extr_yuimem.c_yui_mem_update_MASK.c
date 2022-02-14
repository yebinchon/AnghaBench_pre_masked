
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int address; int quickCombo; int store; } ;
typedef TYPE_1__ YuiMem ;
typedef int GtkTreeIter ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *,int ,char*,int,char*,int) ;
 int FUNC_9 (char*,char*,int) ;

__attribute__((used)) static void FUNC_10(YuiMem * VAR_0) {
 int VAR_1, VAR_2;
 GtkTreeIter VAR_3;
 char VAR_4[10];
 char VAR_5[30];

 FUNC_7(VAR_0->store);

 for(VAR_1 = 0;VAR_1 < 6;VAR_1++) {
  FUNC_9(VAR_4, "%08x", VAR_0->address + (8 * VAR_1));
  for(VAR_2 = 0;VAR_2 < 8;VAR_2++) {
   FUNC_9(VAR_5 + (VAR_2 * 3), "%02x ", FUNC_3(VAR_0->address + (8 * VAR_1) + VAR_2));
  }

  FUNC_6(VAR_0->store, &VAR_3);
  FUNC_8(FUNC_2(VAR_0->store ), &VAR_3, 0, VAR_4, 1, VAR_5, -1);
 }

 FUNC_9( VAR_4, "%08X", VAR_0->address );
 FUNC_5( FUNC_1(FUNC_4(FUNC_0(VAR_0->quickCombo))), VAR_4 );
}
