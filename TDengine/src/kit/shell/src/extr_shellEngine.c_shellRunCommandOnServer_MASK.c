
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char** we_wordv; } ;
typedef TYPE_1__ wordexp_t ;
typedef int int64_t ;
typedef int TAOS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int *,char*,int*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,char*) ;
 scalar_t__ FUNC_12 (char*,TYPE_1__*,int ) ;
 int FUNC_13 (TYPE_1__*) ;

void FUNC_14(TAOS *VAR_4, char VAR_5[]) {
  int64_t VAR_6, VAR_7;
  wordexp_t VAR_8;
  char * VAR_9 = ((void*)0);
  char * VAR_10 = ((void*)0);
  char * VAR_11 = ((void*)0);
  bool VAR_12 = 0;

  if ((VAR_9 = FUNC_5(VAR_5, ">>")) != ((void*)0)) {
    VAR_10 = FUNC_5(VAR_5, ";");
    if (VAR_10 != ((void*)0)) {
      *VAR_10 = '\0';
    }

    if (FUNC_12(VAR_9 + 2, &VAR_8, 0) != 0) {
      FUNC_1(VAR_2, "ERROR: invalid filename: %s\n", VAR_9 + 2);
      return;
    }
    *VAR_9 = '\0';
    VAR_11 = VAR_8.we_wordv[0];
  }

  if ((VAR_9 = FUNC_5(VAR_5, "\\G")) != ((void*)0)) {
    VAR_10 = FUNC_5(VAR_5, ";");
    if (VAR_10 != ((void*)0)) {
      *VAR_10 = '\0';
    }

    *VAR_9 = '\0';
    VAR_12 = 1;
  }

  VAR_6 = FUNC_6();

  if (FUNC_11(VAR_4, VAR_5)) {
    FUNC_8(VAR_4);
    return;
  }

  if (FUNC_3(VAR_5, "^\\s*use\\s+[a-zA-Z0-9]+\\s*;\\s*$", VAR_0 | VAR_1)) {
    FUNC_1(VAR_3, "Database changed.\n\n");
    FUNC_0(VAR_3);
    return;
  }

  int VAR_13 = FUNC_10(VAR_4);
  if (VAR_13 != 0) {
    int VAR_14 = 0;
    int VAR_15 = FUNC_4(VAR_4, VAR_11, &VAR_14, VAR_12);
    if (VAR_15 < 0) return;

    VAR_7 = FUNC_6();
    if (VAR_14 == 0) {
      FUNC_2("Query OK, %d row(s) in set (%.6fs)\n", VAR_15, (VAR_7 - VAR_6) / 1E6);
    } else {
      FUNC_2("Query interrupted (%s), %d row(s) in set (%.6fs)\n", FUNC_9(VAR_4), VAR_15, (VAR_7 - VAR_6) / 1E6);
    }
  } else {
    int VAR_16 = FUNC_7(VAR_4);
    VAR_7 = FUNC_6();
    FUNC_2("Query OK, %d row(s) affected (%.6fs)\n", VAR_16, (VAR_7 - VAR_6) / 1E6);
  }

  FUNC_2("\n");

  if (VAR_11 != ((void*)0)) {
    FUNC_13(&VAR_8);
  }
  return;
}
