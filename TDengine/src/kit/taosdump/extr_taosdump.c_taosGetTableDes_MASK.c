
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* cols; int name; } ;
struct TYPE_7__ {int bytes; } ;
struct TYPE_6__ {int length; int note; int type; int field; } ;
typedef scalar_t__* TAOS_ROW ;
typedef TYPE_2__ TAOS_FIELD ;
typedef TYPE_3__ STableDef ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int * VAR_5 ;
 int FUNC_1 (char*,char*,char*) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_7 ;
 TYPE_2__* FUNC_4 (int *) ;
 scalar_t__* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 int * FUNC_8 (int ) ;

int FUNC_9(char *VAR_8, STableDef *VAR_9) {
  TAOS_ROW VAR_10 = ((void*)0);
  int VAR_11 = 0;

  FUNC_1(VAR_4, "describe %s", VAR_8);
  if (FUNC_7(VAR_7, VAR_4) != 0) {
    FUNC_0(VAR_6, "failed to run command %s\n", VAR_4);
    return -1;
  }

  VAR_5 = FUNC_8(VAR_7);
  if (VAR_5 == ((void*)0)) {
    FUNC_0(VAR_6, "failed to use result\n");
    return -1;
  }

  TAOS_FIELD *VAR_12 = FUNC_4(VAR_5);

  FUNC_2(VAR_9->name, VAR_8);

  while ((VAR_10 = FUNC_5(VAR_5)) != ((void*)0)) {
    FUNC_3(VAR_9->cols[VAR_11].field, (char *)VAR_10[VAR_0],
            VAR_12[VAR_0].bytes);
    FUNC_3(VAR_9->cols[VAR_11].type, (char *)VAR_10[VAR_3],
            VAR_12[VAR_3].bytes);
    VAR_9->cols[VAR_11].length = *((int *)VAR_10[VAR_1]);
    FUNC_3(VAR_9->cols[VAR_11].note, (char *)VAR_10[VAR_2],
            VAR_12[VAR_2].bytes);

    VAR_11++;
  }

  FUNC_6(VAR_5);
  VAR_5 = ((void*)0);

  return VAR_11;
}
