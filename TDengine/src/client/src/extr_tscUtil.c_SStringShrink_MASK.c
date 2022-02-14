
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alloc; int n; int * z; } ;
typedef TYPE_1__ SString ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int) ;

void FUNC_2(SString* VAR_0) {
  if (VAR_0->alloc > (VAR_0->n + 1) && VAR_0->alloc > (VAR_0->n * 2)) {
    VAR_0->z = FUNC_1(VAR_0->z, VAR_0->n + 1);
    FUNC_0(VAR_0->z != ((void*)0));

    VAR_0->alloc = VAR_0->n + 1;
  }
}
