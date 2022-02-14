
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ maxSessions; } ;
struct TYPE_4__ {TYPE_1__ cfg; } ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

void FUNC_1() {
  int VAR_3 = 0;
  for (int VAR_4 = 0; VAR_4 <= VAR_0; ++VAR_4) {
    if (VAR_2[VAR_4].cfg.maxSessions <= 0) continue;
    VAR_3++;
  }

  FUNC_0(&VAR_1, VAR_3);
}
