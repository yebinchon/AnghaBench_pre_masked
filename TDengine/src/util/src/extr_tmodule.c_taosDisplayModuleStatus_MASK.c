
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int thread; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;

char *FUNC_3(int VAR_1) {
  static char VAR_2[256];
  int VAR_3;

  VAR_2[0] = 0;

  for (VAR_3 = 1; VAR_3 < VAR_1; ++VAR_3)
    if (FUNC_2(VAR_0[VAR_3].thread)) FUNC_0(VAR_2 + FUNC_1(VAR_2), "%s ", VAR_0[VAR_3].name);

  if (VAR_2[0] == 0)
    FUNC_0(VAR_2, "all module is down");
  else
    FUNC_0(VAR_2, " is(are) up");

  return VAR_2;
}
