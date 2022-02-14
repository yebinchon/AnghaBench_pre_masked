
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int PC; } ;
typedef TYPE_1__ sh2regs_struct ;
struct TYPE_9__ {int debugsh; } ;
typedef TYPE_2__ YuiSh ;
typedef int SH2_struct ;


 int * VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7 (SH2_struct *VAR_2, u32 VAR_3, void *VAR_4) {

  FUNC_6(VAR_1);
  {
    sh2regs_struct VAR_5;
    YuiSh* VAR_6 = FUNC_3(FUNC_5( VAR_1, VAR_2 == VAR_0 ));

    FUNC_0(VAR_6->debugsh, &VAR_5);
    FUNC_2(VAR_6, &VAR_5);
    FUNC_1(VAR_6, VAR_5.PC);
  }
  FUNC_4();
}
