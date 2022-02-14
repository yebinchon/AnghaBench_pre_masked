
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct arguments {int dummy; } ;
struct TYPE_5__ {char* name; TYPE_1__* cols; } ;
struct TYPE_4__ {char* note; char* field; char* type; int length; } ;
typedef TYPE_2__ STableDef ;
typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char*,char*,...) ;
 scalar_t__ FUNC_2 (char*,char*) ;

void FUNC_3(STableDef *VAR_1, int VAR_2, struct arguments *VAR_3, FILE *VAR_4) {
  char *VAR_5 = ((void*)0);
  VAR_5 = VAR_0;
  int VAR_6 = 0;
  int VAR_7 = 0;

  VAR_5 += FUNC_1(VAR_0, "CREATE TABLE IF NOT EXISTS %s", VAR_1->name);

  for (; VAR_6 < VAR_2; VAR_6++) {
    if (VAR_1->cols[VAR_6].note[0] != '\0') break;

    if (VAR_6 == 0) {
      VAR_5 += FUNC_1(VAR_5, " (%s %s", VAR_1->cols[VAR_6].field, VAR_1->cols[VAR_6].type);
    } else {
      VAR_5 += FUNC_1(VAR_5, ", %s %s", VAR_1->cols[VAR_6].field, VAR_1->cols[VAR_6].type);
    }

    if (FUNC_2(VAR_1->cols[VAR_6].type, "binary") == 0 ||
        FUNC_2(VAR_1->cols[VAR_6].type, "nchar") == 0) {
      VAR_5 += FUNC_1(VAR_5, "(%d)", VAR_1->cols[VAR_6].length);
    }
  }

  VAR_7 = VAR_6;

  for (; VAR_6 < VAR_2; VAR_6++) {
    if (VAR_6 == VAR_7) {
      VAR_5 += FUNC_1(VAR_5, ") TAGS (%s %s", VAR_1->cols[VAR_6].field, VAR_1->cols[VAR_6].type);
    } else {
      VAR_5 += FUNC_1(VAR_5, ", %s %s", VAR_1->cols[VAR_6].field, VAR_1->cols[VAR_6].type);
    }

    if (FUNC_2(VAR_1->cols[VAR_6].type, "binary") == 0 ||
        FUNC_2(VAR_1->cols[VAR_6].type, "nchar") == 0) {
      VAR_5 += FUNC_1(VAR_5, "(%d)", VAR_1->cols[VAR_6].length);
    }
  }

  VAR_5 += FUNC_1(VAR_5, ")");

  FUNC_0(VAR_4, "%s\n\n", VAR_0);
}
