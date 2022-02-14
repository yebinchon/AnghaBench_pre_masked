
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int PC; } ;
typedef TYPE_1__ sh2regs_struct ;
struct TYPE_12__ {TYPE_5__* debugsh; int buttonStep; int regList; int mbpList; int bpList; } ;
typedef TYPE_2__ YuiSh ;
struct TYPE_14__ {int isIdle; } ;
struct TYPE_13__ {int IsSSH2Running; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 TYPE_5__* VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int) ;
 TYPE_4__ VAR_2 ;

void FUNC_5(YuiSh * VAR_3) {
  sh2regs_struct VAR_4;
  FUNC_1(VAR_3->debugsh, &VAR_4);
  FUNC_2(VAR_3,VAR_4.PC);
  FUNC_3(VAR_3, &VAR_4);
  FUNC_4(VAR_3->bpList, VAR_1);
  FUNC_4(VAR_3->mbpList, VAR_1);
  FUNC_4(VAR_3->regList, VAR_1);
  FUNC_4(FUNC_0(VAR_3->buttonStep),
      !VAR_3->debugsh->isIdle && !(( VAR_3->debugsh == VAR_0 )&&( !VAR_2.IsSSH2Running )));
}
