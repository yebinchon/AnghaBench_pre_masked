
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ n; scalar_t__ alloc; int z; } ;
typedef TYPE_1__ SString ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void FUNC_3(SString* VAR_0, const SString* VAR_1) {
  if (VAR_1->n > 0) {
    VAR_0->n = VAR_1->n;
    VAR_0->alloc = VAR_0->n + 1;

    VAR_0->z = FUNC_0(1, VAR_0->alloc);

    FUNC_1(VAR_0->z, VAR_1->z, VAR_0->n);
  } else {
    FUNC_2(VAR_0, 0, sizeof(SString));
  }
}
