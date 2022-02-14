
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct arguments {int with_property; } ;
struct TYPE_12__ {char* name; } ;
struct TYPE_11__ {int metric; int name; } ;
struct TYPE_10__ {int bytes; } ;
typedef scalar_t__* TAOS_ROW ;
typedef TYPE_1__ TAOS_FIELD ;
typedef TYPE_2__ STableRecord ;
typedef TYPE_3__ SDbInfo ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 char* VAR_9 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (char*,int,int) ;
 scalar_t__ FUNC_4 (int,TYPE_2__*,int) ;
 int FUNC_5 (char*) ;
 int * VAR_10 ;
 int FUNC_6 (char*,char*,...) ;
 int VAR_11 ;
 int FUNC_7 (int ,char*,int ) ;
 int VAR_12 ;
 int FUNC_8 (TYPE_3__*,int ,int *) ;
 int FUNC_9 (int ,int ,struct arguments*,int *) ;
 TYPE_1__* FUNC_10 (int *) ;
 scalar_t__* FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,char*) ;
 int * FUNC_14 (int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int,TYPE_2__*,int) ;

int FUNC_17(SDbInfo *VAR_13, struct arguments *VAR_14, FILE *VAR_15) {
  TAOS_ROW VAR_16;
  int VAR_17 = -1;
  STableRecord VAR_18;

  FUNC_8(VAR_13, VAR_14->with_property, VAR_15);

  FUNC_6(VAR_9, "use %s", VAR_13->name);
  if (FUNC_13(VAR_12, VAR_9) != 0) {
    FUNC_0(VAR_11, "invalid database %s\n", VAR_13->name);
    return -1;
  }

  FUNC_0(*VAR_15, "USE %s\n\n", VAR_13->name);

  FUNC_6(VAR_9, "show tables");
  if (FUNC_13(VAR_12, VAR_9) != 0) {
    FUNC_0(VAR_11, "failed to run command %s\n", VAR_9);
    return -1;
  }

  VAR_10 = FUNC_14(VAR_12);
  if (VAR_10 == ((void*)0)) {
    FUNC_0(VAR_11, "failed to use result\n");
    return -1;
  }

  TAOS_FIELD *VAR_19 = FUNC_10(VAR_10);

  VAR_17 = FUNC_3(".table.tmp", VAR_1 | VAR_0, VAR_5 | VAR_3 | VAR_6 | VAR_4);
  if (VAR_17 == -1) {
    FUNC_0(VAR_11, "failed to open temp file\n");
    FUNC_12(VAR_10);
    return -1;
  }

  while ((VAR_16 = FUNC_11(VAR_10)) != ((void*)0)) {
    FUNC_2(&VAR_18, 0, sizeof(STableRecord));
    FUNC_7(VAR_18.name, (char *)VAR_16[VAR_8], VAR_19[VAR_8].bytes);
    FUNC_7(VAR_18.metric, (char *)VAR_16[VAR_7], VAR_19[VAR_7].bytes);

    FUNC_16(VAR_17, &VAR_18, sizeof(STableRecord));
  }

  FUNC_12(VAR_10);

  FUNC_1(VAR_17, 0, VAR_2);

  while (FUNC_4(VAR_17, &VAR_18, sizeof(STableRecord)) > 0) {
    FUNC_9(VAR_18.name, VAR_18.metric, VAR_14, VAR_15);
  }

  FUNC_15(VAR_17);
  FUNC_5(".table.tmp");

  return 0;
}
