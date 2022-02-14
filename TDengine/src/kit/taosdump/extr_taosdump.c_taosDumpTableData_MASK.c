
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct arguments {int data_batch; int end_time; int start_time; scalar_t__ schemaonly; } ;
typedef int int64_t ;
struct TYPE_3__ {int type; int bytes; } ;
typedef int ** TAOS_ROW ;
typedef TYPE_1__ TAOS_FIELD ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_1 (char*,int ,char*,int ) ;
 int FUNC_2 (char*,int ,char*,int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int * VAR_3 ;
 int FUNC_6 (char*,char*,...) ;
 int * VAR_4 ;
 char* FUNC_7 (char*,char*) ;
 int VAR_5 ;
 char* FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (int *) ;
 int ** FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,char*) ;
 int * FUNC_14 (int ) ;

int FUNC_15(FILE *VAR_6, char *VAR_7, struct arguments *VAR_8) {

  int VAR_9 = 0;
  char *VAR_10 = ((void*)0);
  TAOS_ROW VAR_11 = ((void*)0);
  int VAR_12 = 0;
  char *VAR_13 = ((void*)0);

  if (VAR_8->schemaonly) return 0;

  FUNC_6(VAR_2, "select * from %s where _c0 >= %ld and _c0 <= %ld order by _c0 asc", VAR_7, VAR_8->start_time,
          VAR_8->end_time);
  if (FUNC_13(VAR_5, VAR_2) != 0) {
    FUNC_3(VAR_4, "failed to run command %s, reason: %s\n", VAR_2, FUNC_8(VAR_5));
    return -1;
  }

  VAR_3 = FUNC_14(VAR_5);
  if (VAR_3 == ((void*)0)) {
    FUNC_3(VAR_4, "failed to use result\n");
    return -1;
  }

  VAR_12 = FUNC_11(VAR_5);
  FUNC_0(VAR_12 > 0);
  TAOS_FIELD *VAR_14 = FUNC_9(VAR_3);
  VAR_13 = (char *)FUNC_5(VAR_0);
  if (VAR_13 == ((void*)0)) {
    FUNC_3(VAR_4, "No enough memory\n");
    return -1;
  }

  VAR_9 = 0;
  while ((VAR_11 = FUNC_10(VAR_3)) != ((void*)0)) {
    VAR_10 = VAR_1;

    if (VAR_9 == 0) {
      VAR_10 += FUNC_6(VAR_10, "INSERT INTO %s VALUES (", VAR_7);
    } else {
      VAR_10 += FUNC_6(VAR_10, "(");
    }

    for (int VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
      if (VAR_15 != 0) VAR_10 += FUNC_6(VAR_10, ", ");

      if (VAR_11[VAR_15] == ((void*)0)) {
        VAR_10 += FUNC_6(VAR_10, "NULL");
        continue;
      }

      switch (VAR_14[VAR_15].type) {
        case 135:
          VAR_10 += FUNC_6(VAR_10, "%d", ((((int)(*((char *)VAR_11[VAR_15]))) == 1) ? 1 : 0));
          break;
        case 128:
          VAR_10 += FUNC_6(VAR_10, "%d", (int)(*((char *)VAR_11[VAR_15])));
          break;
        case 130:
          VAR_10 += FUNC_6(VAR_10, "%d", (int)(*((short *)VAR_11[VAR_15])));
          break;
        case 132:
          VAR_10 += FUNC_6(VAR_10, "%d", *((int *)VAR_11[VAR_15]));
          break;
        case 137:
          VAR_10 += FUNC_6(VAR_10, "%ld", *((int64_t *)VAR_11[VAR_15]));
          break;
        case 133:
          VAR_10 += FUNC_6(VAR_10, "%f", *((float *)VAR_11[VAR_15]));
          break;
        case 134:
          VAR_10 += FUNC_6(VAR_10, "%f", *((double *)VAR_11[VAR_15]));
          break;
        case 136:
          *(VAR_10++) = '\'';
          FUNC_1((char *)VAR_11[VAR_15], VAR_14[VAR_15].bytes, VAR_13, VAR_0);
          VAR_10 = FUNC_7(VAR_10, VAR_13);
          *(VAR_10++) = '\'';
          break;
        case 131:
          FUNC_2((char *)VAR_11[VAR_15], VAR_14[VAR_15].bytes, VAR_13, VAR_0);
          VAR_10 += FUNC_6(VAR_10, "\'%s\'", VAR_13);
          break;
        case 129:
          VAR_10 += FUNC_6(VAR_10, "%ld", *(int64_t *)VAR_11[VAR_15]);
          break;
        default:
          break;
      }
    }
    VAR_10 += FUNC_6(VAR_10, ")");

    VAR_9++;
    FUNC_3(VAR_6, "%s", VAR_1);

    if (VAR_9 >= VAR_8->data_batch) {
      FUNC_3(VAR_6, "\n");
      VAR_9 = 0;
    } else {
      FUNC_3(VAR_6, "\\\n");
    }
  }

  FUNC_3(VAR_6, "\n");

  if (VAR_13) FUNC_4(VAR_13);
  FUNC_12(VAR_3);
  VAR_3 = ((void*)0);
  return 0;
}
