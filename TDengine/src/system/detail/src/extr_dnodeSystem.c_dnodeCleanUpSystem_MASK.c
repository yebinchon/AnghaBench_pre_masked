
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num; int (* cleanUpFp ) () ;int (* stopFp ) () ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int **) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int * VAR_4 ;
 int FUNC_6 () ;

void FUNC_7() {
  if (VAR_2) return;
  VAR_2 = 1;

  if (VAR_4 != ((void*)0)) {
    FUNC_5(&VAR_4);
    VAR_4 = ((void*)0);
  }

  for (int VAR_5 = 1; VAR_5 < VAR_0; ++VAR_5) {
    if (VAR_3[VAR_5].num != 0 && VAR_3[VAR_5].stopFp) {
      (*VAR_3[VAR_5].stopFp)();
    }
    if (VAR_3[VAR_5].num != 0 && VAR_3[VAR_5].cleanUpFp) {
      (*VAR_3[VAR_5].cleanUpFp)();
    }
  }

  if (VAR_3[VAR_1].num != 0 && VAR_3[VAR_1].cleanUpFp) {
    (*VAR_3[VAR_1].cleanUpFp)();
  }

  FUNC_6();

  FUNC_4();
  FUNC_3();
}
