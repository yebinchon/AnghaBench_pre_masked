
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pVisibleCols; int pFields; int pOffset; } ;
typedef TYPE_1__ SFieldInfo ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ) ;

void FUNC_2(SFieldInfo* VAR_0) {
  if (VAR_0 == ((void*)0)) {
    return;
  }

  FUNC_1(VAR_0->pOffset);
  FUNC_1(VAR_0->pFields);
  FUNC_1(VAR_0->pVisibleCols);

  FUNC_0(VAR_0, 0, sizeof(SFieldInfo));
}
