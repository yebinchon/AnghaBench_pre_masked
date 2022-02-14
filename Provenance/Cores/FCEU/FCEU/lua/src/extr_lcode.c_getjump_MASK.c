
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* f; } ;
struct TYPE_4__ {int * code; } ;
typedef TYPE_2__ FuncState ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1 (FuncState *VAR_1, int VAR_2) {
  int VAR_3 = FUNC_0(VAR_1->f->code[VAR_2]);
  if (VAR_3 == VAR_0)
    return VAR_0;
  else
    return (VAR_2+1)+VAR_3;
}
