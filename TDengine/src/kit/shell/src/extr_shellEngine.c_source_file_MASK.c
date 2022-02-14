
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char** we_wordv; } ;
typedef TYPE_1__ wordexp_t ;
typedef int TAOS ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char**,size_t*,int *) ;
 scalar_t__ FUNC_6 (char*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (char*,char*,char*) ;
 int FUNC_11 (int *,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_12 (char*,TYPE_1__*,int ) ;
 int FUNC_13 (TYPE_1__*) ;

void FUNC_14(TAOS *VAR_4, char *VAR_5) {
  wordexp_t VAR_6;
  int VAR_7 = 0;
  char * VAR_8 = FUNC_7(VAR_0);
  size_t VAR_9 = 0;
  char * VAR_10 = ((void*)0);
  size_t VAR_11 = 0;

  if (FUNC_12(VAR_5, &VAR_6, 0) != 0) {
    FUNC_3(VAR_3, "ERROR: illegal file name\n");
    return;
  }

  char *VAR_12 = VAR_6.we_wordv[0];

  if (FUNC_0(VAR_12, VAR_2) == -1) {
    FUNC_3(VAR_3, "ERROR: file %s is not readable\n", VAR_5);
    FUNC_13(&VAR_6);
    return;
  }

  FILE *VAR_13 = FUNC_2(VAR_12, "r");
  if (VAR_13 == ((void*)0)) {
    FUNC_3(VAR_3, "ERROR: failed to open file %s\n", VAR_12);
    FUNC_13(&VAR_6);
    return;
  }

  while ((VAR_7 = FUNC_5(&VAR_10, &VAR_11, VAR_13)) != -1) {
    if (VAR_7 >= VAR_0) continue;
    VAR_10[--VAR_7] = '\0';

    if (VAR_7 == 0 || FUNC_6(VAR_10)) {
      continue;
    }

    if (VAR_10[VAR_7 - 1] == '\\') {
      VAR_10[VAR_7 - 1] = ' ';
      FUNC_8(VAR_8 + VAR_9, VAR_10, VAR_7);
      VAR_9 += VAR_7;
      continue;
    }

    FUNC_8(VAR_8 + VAR_9, VAR_10, VAR_7);
    FUNC_10("%s%s\n", VAR_1, VAR_8);
    FUNC_11(VAR_4, VAR_8);
    FUNC_9(VAR_8, 0, VAR_0);
    VAR_9 = 0;
  }

  FUNC_4(VAR_8);
  if (VAR_10) FUNC_4(VAR_10);
  FUNC_13(&VAR_6);
  FUNC_1(VAR_13);
}
