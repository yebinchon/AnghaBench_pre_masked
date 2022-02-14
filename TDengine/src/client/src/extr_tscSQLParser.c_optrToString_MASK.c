
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nSQLOptr; } ;
typedef TYPE_1__ tSQLExpr ;
typedef int int32_t ;
typedef int int16_t ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,char const*) ;

__attribute__((used)) static int32_t FUNC_1(tSQLExpr* VAR_2, char** VAR_3) {
  const char* VAR_4 = "<=";
  const char* VAR_5 = ">=";
  const char* VAR_6 = "<>";
  const char* VAR_7 = "LIKE";

  switch (VAR_2->nSQLOptr) {
    case 135: {
      *(int16_t*)(*VAR_3) = *(int16_t*)VAR_4;
      *VAR_3 += 1;
      break;
    }
    case 137: {
      *(int16_t*)(*VAR_3) = *(int16_t*)VAR_5;
      *VAR_3 += 1;
      break;
    }
    case 131: {
      *(int16_t*)(*VAR_3) = *(int16_t*)VAR_6;
      *VAR_3 += 1;
      break;
    }

    case 133:
      *(*VAR_3) = '<';
      break;
    case 136:
      *(*VAR_3) = '>';
      break;
    case 138:
      *(*VAR_3) = '=';
      break;
    case 130:
      *(*VAR_3) = '+';
      break;
    case 132:
      *(*VAR_3) = '-';
      break;
    case 128:
      *(*VAR_3) = '*';
      break;
    case 139:
      *(*VAR_3) = '/';
      break;
    case 129:
      *(*VAR_3) = '%';
      break;
    case 134: {
      int32_t VAR_8 = FUNC_0(*VAR_3, " %s ", VAR_7);
      *VAR_3 += (VAR_8 - 1);
      break;
    }
    default:
      return VAR_0;
  }

  *VAR_3 += 1;

  return VAR_1;
}
