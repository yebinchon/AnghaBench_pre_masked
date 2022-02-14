
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cfgType; scalar_t__ valType; char* option; scalar_t__ ptr; } ;
typedef TYPE_1__ SGlobalConfig ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char**,int*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_11 () ;
 int FUNC_12 () ;

int FUNC_13(char *VAR_4) {
  char *VAR_5, *VAR_6;
  int VAR_7, VAR_8, VAR_9 = 0;
  int VAR_10 = 0;

  FUNC_3(VAR_4, &VAR_5, &VAR_7);
  if (VAR_7 == 0) return 0;

  FUNC_3(VAR_5 + VAR_7 + 1, &VAR_6, &VAR_8);
  if (VAR_8 == 0)
    VAR_10 = 135;
  else {
    VAR_10 = FUNC_0(VAR_6);
  }

  FUNC_2("change dynamic option: %s, value: %d", VAR_5, VAR_10);

  for (int VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11) {
    SGlobalConfig *VAR_12 = VAR_2 + VAR_11;
    if (!(VAR_12->cfgType & VAR_0)) continue;
    if (VAR_12->valType != VAR_1) continue;
    if (FUNC_6(VAR_5, VAR_12->option, VAR_7) != 0) continue;
    *((int *)VAR_12->ptr) = VAR_10;

    if (FUNC_6(VAR_12->option, "monitor", VAR_7) == 0) {
      if (0 == VAR_10) {
        if(&FUNC_5) (void)FUNC_5)();
      } else {
        if(&FUNC_4) FUNC_4)();
      }
      return VAR_9;
    }

    if (FUNC_6(VAR_12->option, "debugFlag", VAR_7) == 0) {
      FUNC_12();
    }

    return VAR_9;
  }

  if (FUNC_6(VAR_5, "resetlog", 8) == 0) {
    FUNC_10();
    FUNC_11();
    return VAR_9;
  }

  if (FUNC_6(VAR_5, "resetQueryCache", 15) == 0) {
    if (&FUNC_9) {
      FUNC_2("the query cache of internal client will reset");
      FUNC_9("reset query cache");
    } else {
      FUNC_1("reset query cache can't be executed, for monitor not initialized");
      VAR_9 = 169;
    }
  } else {
    VAR_9 = 169;
  }

  return VAR_9;
}
