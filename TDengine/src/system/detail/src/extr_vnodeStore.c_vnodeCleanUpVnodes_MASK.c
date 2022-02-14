
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ commitThread; scalar_t__ pCachePool; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_5 (TYPE_1__*,int *) ;

void FUNC_6() {
  static int VAR_4 = 0;
  if (VAR_3 == ((void*)0)) return;

  FUNC_0(&VAR_2);

  if (VAR_4) {
    FUNC_1(&VAR_2);
    return;
  }
  VAR_4 = 1;

  for (int VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
    if (VAR_3[VAR_5].pCachePool) {
      VAR_3[VAR_5].status = VAR_1;
      FUNC_4(VAR_5);
    }
  }

  FUNC_1(&VAR_2);

  for (int VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
    if (VAR_3[VAR_6].pCachePool) {
      FUNC_5(VAR_3 + VAR_6, ((void*)0));
      while (VAR_3[VAR_6].commitThread != 0) {
        FUNC_2(10);
      }
      FUNC_3(VAR_6);
    }
  }
}
