
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int sh2regs_struct ;
struct TYPE_5__ {unsigned int addr; } ;
typedef TYPE_1__ codebreakpoint_struct ;
struct TYPE_6__ {int lastCode; int store; int debugsh; } ;
typedef TYPE_2__ YuiSh ;
typedef int GtkTreeIter ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int ,int *,char*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int,char*,int) ;
 int FUNC_7 (char*,char*,unsigned int) ;
 int FUNC_8 (char*,char*,unsigned int*,char*) ;

__attribute__((used)) static void FUNC_9( YuiSh *VAR_3, u32 VAR_4) {


  int VAR_5, VAR_6;
  char VAR_7[64];
  u32 VAR_8;
  GtkTreeIter VAR_9;
  unsigned int VAR_10;
  char VAR_11[20];
  char VAR_12[64];
  codebreakpoint_struct *VAR_13;
  sh2regs_struct VAR_14;

  FUNC_5(VAR_3->store);

  if ( VAR_4 - VAR_3->lastCode >= 20*2 ) VAR_8 = VAR_4 - (8*2);
  else VAR_8 = VAR_3->lastCode;
  VAR_3->lastCode = VAR_8;

  VAR_13 = FUNC_2(VAR_3->debugsh);

  for (VAR_5 = 0; VAR_5 < 24; VAR_5++) {
    FUNC_3(VAR_3->debugsh, &VAR_14);
    FUNC_1(VAR_8+2*VAR_5, FUNC_0(VAR_8+2*VAR_5), 0, &VAR_14, VAR_7);

    FUNC_8(VAR_7, "0x%8X: %[^\n]", &VAR_10, VAR_12);
    FUNC_7(VAR_11, "0x%08X", VAR_10);

    FUNC_4(VAR_3->store, &VAR_9);
    if ( VAR_8 + 2*VAR_5 == VAR_4 ) {
      FUNC_6(VAR_3->store, &VAR_9, 0, VAR_0, -1);
    } else {
      for (VAR_6 = 0;VAR_6 < VAR_2 - 1;VAR_6++) {
        if (VAR_13[VAR_6].addr == VAR_10) {
          FUNC_6(VAR_3->store, &VAR_9, 0, VAR_1, -1);
        }
      }
    }

    FUNC_6(VAR_3->store, &VAR_9, 1, VAR_11, -1);

    FUNC_6(VAR_3->store, &VAR_9, 2, VAR_12, -1);
  }
}
