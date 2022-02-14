
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bytesPerPoint; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_1__ SMeterObj ;



int FUNC_0(SMeterObj *VAR_0, char *VAR_1, int VAR_2, char **VAR_3, TSKEY VAR_4) {
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
    TSKEY VAR_6 = *((TSKEY *)(VAR_1 + VAR_5 * VAR_0->bytesPerPoint));
    if (VAR_6 > VAR_4) break;
  }

  *VAR_3 = VAR_1 + VAR_5 * VAR_0->bytesPerPoint;
  return VAR_2 - VAR_5;
}
