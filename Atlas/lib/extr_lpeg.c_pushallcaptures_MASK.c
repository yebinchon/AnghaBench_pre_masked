
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* cap; int L; } ;
struct TYPE_8__ {scalar_t__ s; } ;
typedef TYPE_1__ Capture ;
typedef TYPE_2__ CapState ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5 (CapState *VAR_0, int VAR_1) {
  Capture *VAR_2 = VAR_0->cap;
  int VAR_3 = 0;
  if (FUNC_1(VAR_0->cap++)) {
    FUNC_4(VAR_0, VAR_2);
    return 1;
  }
  while (!FUNC_0(VAR_0->cap))
    VAR_3 += FUNC_3(VAR_0);
  if (VAR_1 || VAR_3 == 0) {
    FUNC_2(VAR_0->L, VAR_2->s, VAR_0->cap->s - VAR_2->s);
    VAR_3++;
  }
  VAR_0->cap++;
  return VAR_3;
}
