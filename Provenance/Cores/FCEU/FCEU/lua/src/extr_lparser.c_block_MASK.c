
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ breaklist; } ;
struct TYPE_6__ {int * fs; } ;
typedef TYPE_1__ LexState ;
typedef int FuncState ;
typedef TYPE_2__ BlockCnt ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4 (LexState *VAR_1) {

  FuncState *VAR_2 = VAR_1->fs;
  BlockCnt VAR_3;
  FUNC_1(VAR_2, &VAR_3, 0);
  FUNC_0(VAR_1);
  FUNC_3(VAR_3.breaklist == VAR_0);
  FUNC_2(VAR_2);
}
