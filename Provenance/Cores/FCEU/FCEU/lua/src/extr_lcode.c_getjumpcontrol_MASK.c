
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* f; } ;
struct TYPE_4__ {int * code; } ;
typedef int Instruction ;
typedef TYPE_2__ FuncState ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static Instruction *FUNC_2 (FuncState *VAR_0, int VAR_1) {
  Instruction *VAR_2 = &VAR_0->f->code[VAR_1];
  if (VAR_1 >= 1 && FUNC_1(FUNC_0(*(VAR_2-1))))
    return VAR_2-1;
  else
    return VAR_2;
}
