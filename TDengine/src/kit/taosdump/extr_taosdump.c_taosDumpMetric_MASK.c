
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct arguments {int dummy; } ;
typedef int int32_t ;
struct TYPE_8__ {int metric; int name; } ;
struct TYPE_7__ {int bytes; } ;
typedef scalar_t__* TAOS_ROW ;
typedef TYPE_1__ TAOS_FIELD ;
typedef TYPE_2__ STableRecord ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (char*,int,int) ;
 scalar_t__ FUNC_4 (int,TYPE_2__*,int) ;
 int FUNC_5 (char*) ;
 int * VAR_8 ;
 int FUNC_6 (char*,char*,char*) ;
 int VAR_9 ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,int ) ;
 int VAR_10 ;
 int FUNC_9 (int ,int ,struct arguments*,int *) ;
 TYPE_1__* FUNC_10 (int *) ;
 scalar_t__* FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,char*) ;
 int * FUNC_14 (int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int,TYPE_2__*,int) ;

int32_t FUNC_17(char *VAR_11, struct arguments *VAR_12, FILE *VAR_13) {
  TAOS_ROW VAR_14 = ((void*)0);
  int VAR_15 = -1;
  STableRecord VAR_16;

  FUNC_7(VAR_16.metric, VAR_11);

  FUNC_6(VAR_7, "select tbname from %s", VAR_11);
  if (FUNC_13(VAR_10, VAR_7) != 0) {
    FUNC_0(VAR_9, "failed to run command %s\n", VAR_7);
    return -1;
  }

  VAR_8 = FUNC_14(VAR_10);
  if (VAR_8 == ((void*)0)) {
    FUNC_0(VAR_9, "failed to use result\n");
    return -1;
  }

  VAR_15 = FUNC_3(".table.tmp", VAR_1 | VAR_0, VAR_5 | VAR_3 | VAR_6 | VAR_4);
  if (VAR_15 < 0) {
    FUNC_0(VAR_9, "failed to open temp file");
    return -1;
  }

  TAOS_FIELD *VAR_17 = FUNC_10(VAR_8);

  while ((VAR_14 = FUNC_11(VAR_8)) != ((void*)0)) {
    FUNC_2(&VAR_16, 0, sizeof(STableRecord));
    FUNC_8(VAR_16.name, (char *)VAR_14[0], VAR_17[0].bytes);
    FUNC_7(VAR_16.metric, VAR_11);
    FUNC_16(VAR_15, &VAR_16, sizeof(STableRecord));
  }

  FUNC_12(VAR_8);
  VAR_8 = ((void*)0);

  FUNC_1(VAR_15, 0, VAR_2);

  while (FUNC_4(VAR_15, &VAR_16, sizeof(STableRecord)) > 0) {
    FUNC_9(VAR_16.name, VAR_16.metric, VAR_12, VAR_13);
  }

  FUNC_15(VAR_15);
  FUNC_5(".table.tmp");

  return 0;
}
