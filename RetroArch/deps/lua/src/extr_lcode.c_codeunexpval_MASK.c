
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int info; } ;
struct TYPE_7__ {int k; TYPE_1__ u; } ;
typedef TYPE_2__ expdesc ;
typedef int OpCode ;
typedef int FuncState ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,int ,int ,int,int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4 (FuncState *VAR_1, OpCode VAR_2, expdesc *VAR_3, int VAR_4) {
  int VAR_5 = FUNC_2(VAR_1, VAR_3);
  FUNC_0(VAR_1, VAR_3);
  VAR_3->u.info = FUNC_1(VAR_1, VAR_2, 0, VAR_5, 0);
  VAR_3->k = VAR_0;
  FUNC_3(VAR_1, VAR_4);
}
