
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int PC; } ;
typedef TYPE_1__ scudspregs_struct ;
struct TYPE_9__ {int buttonStep; int regList; int bpList; int uLabel; } ;
typedef TYPE_2__ YuiScudsp ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;

void FUNC_4(YuiScudsp * VAR_1) {
  scudspregs_struct VAR_2;
  FUNC_0(&VAR_2);
  FUNC_2(VAR_1,VAR_2.PC);
  FUNC_3(VAR_1, &VAR_2);
  FUNC_1(VAR_1->uLabel, VAR_0);
  FUNC_1(VAR_1->bpList, VAR_0);
  FUNC_1(VAR_1->regList, VAR_0);
  FUNC_1(VAR_1->buttonStep, VAR_0);
}
