
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int L; int ptop; TYPE_1__* cap; } ;
struct TYPE_6__ {int idx; } ;
typedef TYPE_2__ CapState ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_6 (CapState *VAR_0) {
  int VAR_1 = VAR_0->cap->idx;
  int VAR_2 = FUNC_3(VAR_0, 0);
  if (VAR_2 > 1)
    FUNC_2(VAR_0->L, VAR_2 - 1);
  FUNC_5(VAR_0, VAR_1);
  FUNC_0(VAR_0->L, FUNC_4(VAR_0->ptop));
  if (!FUNC_1(VAR_0->L, -1))
    return 1;
  else {
    FUNC_2(VAR_0->L, 1);
    return 0;
  }
}
