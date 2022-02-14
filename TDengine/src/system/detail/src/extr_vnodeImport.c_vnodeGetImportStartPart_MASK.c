
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bytesPerPoint; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_1__ SMeterObj ;



int FUNC_0(SMeterObj *VAR_0, char *VAR_1, int VAR_2, TSKEY VAR_3) {
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
    TSKEY VAR_5 = *((TSKEY *)(VAR_1 + VAR_4 * VAR_0->bytesPerPoint));
    if (VAR_5 >= VAR_3) break;
  }

  return VAR_4;
}
