
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int8_t ;
typedef int int64_t ;
struct TYPE_3__ {int type; int bytes; } ;
typedef int ** TAOS_ROW ;
typedef TYPE_1__ TAOS_FIELD ;


 size_t FUNC_0 (size_t,int ) ;
 char* VAR_0 ;
 int FUNC_1 (char*,char*,size_t) ;
 scalar_t__ FUNC_2 (char*,char*,...) ;
 size_t FUNC_3 (int *) ;

int FUNC_4(char *VAR_1, TAOS_ROW VAR_2, TAOS_FIELD *VAR_3, int VAR_4) {
  int VAR_5 = 0;
  for (int VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {
    if (VAR_2[VAR_6] == ((void*)0)) {
      VAR_5 += FUNC_2(VAR_1 + VAR_5, "%s ", VAR_0);
      continue;
    }

    switch (VAR_3[VAR_6].type) {
      case 128:
        VAR_5 += FUNC_2(VAR_1 + VAR_5, "%d ", *((char *)VAR_2[VAR_6]));
        break;

      case 130:
        VAR_5 += FUNC_2(VAR_1 + VAR_5, "%d ", *((short *)VAR_2[VAR_6]));
        break;

      case 132:
        VAR_5 += FUNC_2(VAR_1 + VAR_5, "%d ", *((int *)VAR_2[VAR_6]));
        break;

      case 137:
        VAR_5 += FUNC_2(VAR_1 + VAR_5, "%lld ", *((int64_t *)VAR_2[VAR_6]));
        break;

      case 133:
        VAR_5 += FUNC_2(VAR_1 + VAR_5, "%f ", *((float *)VAR_2[VAR_6]));
        break;

      case 134:
        VAR_5 += FUNC_2(VAR_1 + VAR_5, "%lf ", *((double *)VAR_2[VAR_6]));
        break;

      case 136:
      case 131: {


        size_t VAR_7 = FUNC_3(VAR_2[VAR_6]);
        size_t VAR_8 = FUNC_0(VAR_7, VAR_3[VAR_6].bytes);

        FUNC_1(VAR_1 + VAR_5, (char*) VAR_2[VAR_6], VAR_8);

        VAR_1[VAR_5 + VAR_8] = ' ';
        VAR_5 += (VAR_8 + 1);
      }
        break;

      case 129:
        VAR_5 += FUNC_2(VAR_1 + VAR_5, "%lld ", *((int64_t *)VAR_2[VAR_6]));
        break;

      case 135:
        VAR_5 += FUNC_2(VAR_1 + VAR_5, "%d ", *((int8_t *)VAR_2[VAR_6]));
      default:
        break;
    }
  }

  return VAR_5;
}
