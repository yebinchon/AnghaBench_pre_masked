
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cap; int L; } ;
typedef TYPE_1__ CapState ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5 (CapState *VAR_0) {
  int VAR_1 = 0;
  FUNC_2(VAR_0->L);
  if (FUNC_1(VAR_0->cap++))
    return 1;
  while (!FUNC_0(VAR_0->cap)) {
    int VAR_2;
    int VAR_3 = FUNC_4(VAR_0);
    for (VAR_2 = VAR_3; VAR_2 > 0; VAR_2--)
      FUNC_3(VAR_0->L, -(VAR_2 + 1), VAR_1 + VAR_2);
    VAR_1 += VAR_3;
  }
  VAR_0->cap++;
  return 1;
}
