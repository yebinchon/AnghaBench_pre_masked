
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int PC; } ;
typedef TYPE_1__ m68kregs_struct ;
typedef int YuiM68k ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7 (u32 VAR_1) {

  FUNC_6(VAR_0);
  {
    m68kregs_struct VAR_2;
    YuiM68k* VAR_3 = FUNC_1(FUNC_3( VAR_0 ));

    FUNC_0(&VAR_2);
    FUNC_4(VAR_3,VAR_2.PC);
    FUNC_5(VAR_3,&VAR_2);
  }
  FUNC_2();
}
