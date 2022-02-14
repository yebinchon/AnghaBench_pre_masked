
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pmem; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ VAR_5 ;

void* FUNC_3 (void) {
  void* VAR_6 = (void*)VAR_2;
  int VAR_7;

  VAR_4 = ((void*)0);
  VAR_2 = ((void*)0);

  if (VAR_6) {
    FUNC_1(&VAR_3, "dbg_finit");
    FUNC_1(&VAR_1, "dbg_finit");
  }

  if (VAR_5) {
    VAR_6 = ((void*)0);
  }
  VAR_5 = 0;

  for (VAR_7 = 1; VAR_7 < FUNC_0(VAR_0); VAR_7++) {
    if (VAR_0[VAR_7].pmem) {
      FUNC_2 (0, VAR_0[VAR_7].pmem);
    }
  }

  return (VAR_6);
}
