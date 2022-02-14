
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cfgStatus; } ;
typedef TYPE_1__ SGlobalConfig ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char**,size_t*,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char**,int*) ;
 int FUNC_6 (char*,char*,char*) ;
 int FUNC_7 (scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_8 (scalar_t__*) ;
 int FUNC_9 (scalar_t__*) ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;
 TYPE_1__* FUNC_12 (char*) ;
 int FUNC_13 () ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__* VAR_7 ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 () ;
 scalar_t__* VAR_8 ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 char* VAR_11 ;

bool FUNC_18() {
  FUNC_13();

  FILE * VAR_12;
  char * VAR_13, *VAR_14, *VAR_15, *VAR_16;
  size_t VAR_17;
  int VAR_18, VAR_19, VAR_20;
  char VAR_21[128];

  FUNC_6(VAR_21, "%s/taos.cfg", VAR_1);
  VAR_12 = FUNC_2(VAR_21, "r");
  if (VAR_12 == ((void*)0)) {
  } else {
    VAR_13 = ((void*)0);
    while (!FUNC_1(VAR_12)) {
      FUNC_11(VAR_13);
      VAR_13 = VAR_14 = VAR_15 = ((void*)0);
      VAR_17 = VAR_18 = VAR_19 = 0;

      FUNC_3(&VAR_13, &VAR_17, VAR_12);
      if (VAR_13 == ((void*)0)) break;

      FUNC_5(VAR_13, &VAR_14, &VAR_18);
      if (VAR_18 == 0) continue;
      VAR_14[VAR_18] = 0;

      FUNC_5(VAR_14 + VAR_18 + 1, &VAR_15, &VAR_19);
      if (VAR_19 == 0) continue;
      VAR_15[VAR_19] = 0;



      FUNC_5(VAR_15 + VAR_19 + 1, &VAR_16, &VAR_20);

      FUNC_14(VAR_14, VAR_15);
    }

    FUNC_11(VAR_13);
    FUNC_0(VAR_12);
  }

  FUNC_15();

  if (VAR_6[0] == 0) {
    FUNC_9(VAR_6);
  }

  if (VAR_7[0] == 0) {
    FUNC_7(VAR_7, VAR_6);
  }

  if (VAR_2[0] == 0) {
    FUNC_7(VAR_2, VAR_6);
  }

  if (VAR_3[0] == 0) {
    FUNC_7(VAR_3, VAR_6);
  }

  if (VAR_4[0] == 0) {
    FUNC_7(VAR_4, VAR_6);
  }

  if (VAR_8[0] == 0) {
    FUNC_7(VAR_8, VAR_4);
  }

  FUNC_10();

  FUNC_16();

  SGlobalConfig *VAR_22 = FUNC_12("timezone");
  if (VAR_22 && VAR_22->cfgStatus == VAR_0) {
    FUNC_17();
  }

  if (VAR_5 <= 0) {
    VAR_5 = 1;
  }

  if (FUNC_8(VAR_6) == 0) {
    FUNC_4("privateIp is null");
    return 0;
  }

  if (VAR_10) {
    FUNC_7(VAR_3, VAR_6);
  }

  VAR_9 = 0;
  for (int VAR_23 = 0; VAR_23 < 10; VAR_23++) {
    if (VAR_11[VAR_23] >= '0' && VAR_11[VAR_23] <= '9') {
      VAR_9 = VAR_9 * 10 + (VAR_11[VAR_23] - '0');
    } else if (VAR_11[VAR_23] == 0) {
      break;
    }
  }
  VAR_9 = 10 * VAR_9;

  return 1;
}
