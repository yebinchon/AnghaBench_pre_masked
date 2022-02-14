
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char* int8_t ;
typedef int int64_t ;
typedef char* int32_t ;
typedef char* int16_t ;
struct TYPE_6__ {scalar_t__ numOfRows; int timestamp; int table; int values; } ;
struct TYPE_5__ {int type; int bytes; } ;
typedef int ** TAOS_ROW ;
typedef int TAOS_RES ;
typedef TYPE_1__ TAOS_FIELD ;
typedef int JsonBuf ;
typedef TYPE_2__ HttpSqlCmd ;
typedef int HttpContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,char*) ;
 char* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,double) ;
 int FUNC_4 (int *,float) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,char*,int) ;
 int FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (char*,int,char*,char*,...) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 scalar_t__ FUNC_15 (char*) ;
 int FUNC_16 (char*,char*,int) ;
 TYPE_1__* FUNC_17 (int *) ;
 int ** FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

bool FUNC_21(HttpContext *VAR_4, HttpSqlCmd *VAR_5, TAOS_RES *VAR_6, int VAR_7) {
  JsonBuf *VAR_8 = FUNC_12(VAR_4);
  if (VAR_8 == ((void*)0)) return 0;

  int VAR_9 = FUNC_19(VAR_6);
  TAOS_FIELD *VAR_10 = FUNC_17(VAR_6);
  if (VAR_9 == 0) {
    return 0;
  }

  int VAR_11 = FUNC_20(VAR_6);






  int VAR_12 = -1;
  int VAR_13 = -1;
  bool VAR_14 = VAR_10[0].type == 129;
  if (VAR_14) {
    VAR_12 = 1;
    if (VAR_9 > 2) VAR_13 = VAR_9 - 1;
  } else {
    VAR_12 = 0;
    if (VAR_9 > 1) VAR_13 = VAR_9 - 1;
  }

  char *VAR_15 = FUNC_2(VAR_4, VAR_5->values);
  char *VAR_16 = FUNC_2(VAR_4, VAR_5->table);
  char *VAR_17 = FUNC_2(VAR_4, VAR_5->timestamp);

  if (VAR_13 == -1 && VAR_5->numOfRows == 0) {
    FUNC_1(VAR_8, VAR_15, VAR_16);
    VAR_5->numOfRows += VAR_7;
  }

  for (int VAR_18 = 0; VAR_18 < VAR_7; ++VAR_18) {
    TAOS_ROW VAR_19 = FUNC_18(VAR_6);


    if (VAR_13 != -1) {
      char VAR_20[VAR_0];

      switch (VAR_10[VAR_13].type) {
        case 135:
        case 128:
          FUNC_13(VAR_20, VAR_0, "%s%d", VAR_16, *((int8_t *)VAR_19[VAR_13]));
          break;
        case 130:
          FUNC_13(VAR_20, VAR_0, "%s%d", VAR_16, *((int16_t *)VAR_19[VAR_13]));
          break;
        case 132:
          FUNC_13(VAR_20, VAR_0, "%s%d", VAR_16, *((int32_t *)VAR_19[VAR_13]));
          break;
        case 137:
          FUNC_13(VAR_20, VAR_0, "%s%ld", VAR_16, *((int64_t *)VAR_19[VAR_13]));
          break;
        case 133:
          FUNC_13(VAR_20, VAR_0, "%s%.5f", VAR_16, *((float *)VAR_19[VAR_13]));
          break;
        case 134:
          FUNC_13(VAR_20, VAR_0, "%s%.9f", VAR_16, *((double *)VAR_19[VAR_13]));
          break;
        case 136:
        case 131:
          FUNC_13(VAR_20, VAR_0, "%s%s", VAR_16, (char *)VAR_19[VAR_13]);
          break;
        case 129:
          if (VAR_11 == VAR_3) {
            FUNC_13(VAR_20, VAR_0, "%s%ld", VAR_16, *((int64_t *) VAR_19[VAR_13]));
          } else {
            FUNC_13(VAR_20, VAR_0, "%s%ld", VAR_16, *((int64_t *) VAR_19[VAR_13]) / 1000);
          }
          break;
        default:
          FUNC_13(VAR_20, VAR_0, "%s%s", VAR_16, "invalidcol");
          break;
      }

      if (FUNC_14(VAR_20, VAR_17) != 0) {

        if (FUNC_15(VAR_17) != 0) {
          FUNC_0(VAR_8);
        }


        FUNC_1(VAR_8, VAR_15, VAR_20);
        FUNC_16(VAR_17, VAR_20, VAR_0);
      }
    }


    FUNC_7(VAR_8);
    FUNC_11(VAR_8, VAR_2);

    for (int VAR_21 = VAR_12; VAR_21 >= 0; VAR_21--) {
      FUNC_7(VAR_8);
      if (VAR_19[VAR_21] == ((void*)0)) {
        FUNC_8(VAR_8, "null", 4);
        continue;
      }

      switch (VAR_10[VAR_21].type) {
        case 135:
        case 128:
          FUNC_5(VAR_8, *((int8_t *)VAR_19[VAR_21]));
          break;
        case 130:
          FUNC_5(VAR_8, *((int16_t *)VAR_19[VAR_21]));
          break;
        case 132:
          FUNC_5(VAR_8, *((int32_t *)VAR_19[VAR_21]));
          break;
        case 137:
          FUNC_6(VAR_8, *((int64_t *)VAR_19[VAR_21]));
          break;
        case 133:
          FUNC_4(VAR_8, *((float *)VAR_19[VAR_21]));
          break;
        case 134:
          FUNC_3(VAR_8, *((double *)VAR_19[VAR_21]));
          break;
        case 136:
        case 131:
          FUNC_10(VAR_8, VAR_19[VAR_21], VAR_10[VAR_21].bytes);
          break;
        case 129:
          if (VAR_11 == VAR_3) {
            FUNC_6(VAR_8, *((int64_t *)VAR_19[VAR_21]));
          } else {
            FUNC_6(VAR_8, *((int64_t *)VAR_19[VAR_21]) / 1000);
          }
          break;
        default:
          FUNC_9(VAR_8, "invalidcol", 10);
          break;
      }
    }

    if (VAR_12 == 0) {
      FUNC_7(VAR_8);
      FUNC_9(VAR_8, "-", 1);
    }


    FUNC_11(VAR_8, VAR_1);
  }

  return 1;
}
