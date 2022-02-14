
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int L; int * ocap; } ;
typedef int Capture ;
typedef TYPE_1__ CapState ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static Capture *FUNC_5 (CapState *VAR_0, Capture *VAR_1, int VAR_2) {
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    if (VAR_1 == VAR_0->ocap)
      FUNC_4(VAR_0->L, "invalid back reference (%d)", VAR_2);
    VAR_1--;
    if (FUNC_2(VAR_1))
      VAR_1 = FUNC_1(VAR_1);
    else if (!FUNC_3(VAR_1))
      VAR_3--;
  }
  FUNC_0(!FUNC_2(VAR_1));
  return VAR_1;
}
